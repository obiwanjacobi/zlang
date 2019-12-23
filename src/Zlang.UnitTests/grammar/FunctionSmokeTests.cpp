#include "pch.h"
#include "../Utils.h"


TEST(FunctionSmokeTests, Void) {
    const char* src = 
        "MyFunction()\n"
        "    return\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, ParamVoid) {
    const char* src = 
        "MyFunction(p: U8)\n"
        "    return\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, Param2Void) {
    const char* src =
        "MyFunction(p: U8, s: Str)\n"
        "    return\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, RetVal) {
    const char* src = 
        "MyFunction(): Bool\n"
        "    return true\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, ParamRetVal) {
    const char* src = 
        "MyFunction(p: Str): Bool\n"
        "    return true\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}


TEST(FunctionSmokeTests, Param2RetVal) {
    const char* src =
        "MyFunction(p: U8, s: Str): Bool\n"
        "    return true\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, Call) {
    const char* src =
        "Container()\n"
        "    FnCall()\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, CallWithParam) {
    const char* src =
        "Container()\n"
        "    FnCall(42)\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}

TEST(FunctionSmokeTests, CallWithParam2) {
    const char* src =
        "Container()\n"
        "    FnCall(42, \"Hello World\")\n"
        ;

    EXPECT_TRUE(ParserSmokeTest(src));
}
