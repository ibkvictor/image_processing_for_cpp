#include <iostream>
#include "print.h"
#include <gtest/gtest.h>

TEST(Testing_no_module, assert_test){
	ASSERT_EQ(Print("i am a test").str(), "i am a test");
}
TEST(Testing_no_module, expect_test){
	EXPECT_EQ(Print("i am a test").str(), "i am a test");
}
