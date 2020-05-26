#include "src/hello.h"

#include "gtest/gtest.h"

TEST(Hello, Default) { EXPECT_EQ(Hello(""), "Hello, world"); }

TEST(Hello, Specified) { EXPECT_EQ(Hello("aiueo"), "Hello, aiueo"); }