#include <gtest/gtest.h>

extern "C" {
    #include "greeter.h"
}

const char *greeting = "Hello, world!";

TEST(GreeterTest, Greeting) {
    EXPECT_STREQ(greeting, get_greeting());
}
