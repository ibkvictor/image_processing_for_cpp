#inlcude <iostream>

#inlcude "sq_root.h"
#include "blah.h"

#include <gtest/gtest.h>

TEST(example_module, normal){
	EXPECT_EQ(sq_root(1.0), 1.0);
}

TEST(example_module, extreme){
	EXPECT_EQ(sq_root(-54.4), -1);
}

TEST(example_module_blah, normal){
	EXPECT_STRE(PrintBlah("just testing"), "just testing");
}

TEST(example_module_blah, extreme){
	EXPECT_STRE(PrintBlah(" ", " ");
} 
