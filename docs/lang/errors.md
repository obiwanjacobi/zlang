# Errors

The error mechanism in Z# is not based on exceptions. This would be a load too heavy for the smaller and simpler CPUs. On the other hand, naked error value passing is tedious, error prone and does not guarantee handling of the error.

To create a robust error handling mechanism, it has been incorporated into the language. There are two keywords that deal with handling errors and syntax to specify errors can be returned from a function.

Errors are values returned from a function that cannot be ignored by the caller.

The story starts when an error condition is detected and a function returns an error:

```C#
errorFn: (): U8!
    return Error("Failed")
```

This indicates that you should pay attention, because this function can return an error!

Details on using the `Error` type can be read [here]('../types/error.md')

The calling code needs to have a way to deal with either a good return value from a function or handling the error. The primary keyword to use is `catch`, like so:

```C#
couldWork: (): U8!
    return Error("Sorry, I can't do that Dave.")

v = couldWork() catch(err)
    print(err.message())    // access error message
    return                  // exit control flow
use(v)
```

The catch keyword is specified after the function that could return the error, and it introduces a scope. This scope is where the handler code goes in case there is an error. The variable name that is used to hand the code the `Error` is specified inside the parentheses.

> TBD: use a more lambda-like syntax: `v = fn() catch => (err)`? That would align more with [Error Handlers](#Error-Handlers).

Alternate way of handling more complex error conditions using a `match` expression.

```csharp
FnErr: (): U8!
    ...

a = match FnErr()
    err: Error => 0
    custom: MyError => return custom.fld    // return exits the function
    n: U8 => n
```

A (predicted) common pattern is that a function will call many functions itself and as soon as one errors out, the function itself will simply stop and propagate the error to its caller. The `try` keyword is syntactic sugar for '`catch(err) return err`' and is specified in front of the function call. It can be used as follows:

```C#
MyFunc: (): Bool!
    // propagate error from function
    b = try couldWork() // try => catch(err) return err
    // b is the plain type - without the Err<> component.
    use(b)
```

It takes away some of the noise of simple error handling.

The explicit keywords `catch` and `try` -and in a lesser sense `match` are explicitly chosen to make it clear how these errors are handled in the code.

Note that both `catch` and `try` strip of the `Err<T>` part from the return value of the function. So variable has no `Err<T>` component/decorator type, it's just its plain Type.

The `catch` and `try` keywords can only be used on functions that actually return errors.

```C#
myFunc: (): Bool
    ...

b = myFunc() catch(err)  // error! myFunc does not return errors
    ...
```

It is also possible to return an Error from a `Void` function - a function that has no return value.

```C#
voidFn: (): Void!       // Void with Err
    return Error("Failed")  // ok, exit function

// handle error on Void! fn
voidFn() catch(err)
    // handle error
    ...
```

It is also possible to trigger a `FatalError` anywhere.

```C#
noErrorFn: ()       // no Err return value specified
    return Error("Failed")  // error! no error return type
    FatalError("Abort!")    // ok, exit program
```

You can use the `return` keyword in a function to exit its execution of course.

---

## Error Handlers

Use `catch` with a handler function instead of an inline handler? Function Interface needed for the error-handler function.

> How can the handler-function direct control-flow?

```C#
errorHandler: (err: Error): Bool!
    return err          // try functionality, same as...
    return false        // could not handle, propagate err
    return true         // error is handled, continue
    return Error("New Error", err)

errorFn: (): U8!
    return Error("Failed")

v = errorFn() catch(errorHandler)
```

> Test for error type

How to test for the type of error or if a field is available.
Cannot use compile-time extensions because type of error is determined at runtime.

```C#
errorFn: (p: U8) U8!
    if p = 42
        err42 = MyError     // custom error type
            ...
        return Error("Custom Error Type", err42)
    else
        return Error("Standard Error")

v = errorFn(42) catch(err)
    // control flow: using typeid
    if err#typeId = MyError#typeId
        ...

v = errorFn(42) catch(err)
    // value: match
    a = match err
        myErr: MyError => ...
        _ => ...

v = match errorFn(42)
    n: U8 => // use normal return value
    myErr: MyError => ...
    _ => ...
```

---

## Fatal Errors

What some call 'panic' also known as exit()

For some type of errors you want to crash and have diagnostics.

```C#
// exits program
FatalError("panic!")
FatalError("panic!", err)
```

> What errors are fatal? DivideByZero, StackOverflow, OutOfMemory, ... ??

---

## Error Trace

When an error is returned from a function and it naturally bubbles up the call stack, a trace can be made of all the code sites it visits.

This diagnostic information can be useful for tracking down problems.

---

> How to access standard errors (make a list of standard errors?)?
