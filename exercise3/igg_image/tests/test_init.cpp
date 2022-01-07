include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

using namespace igg;

TEST ( test_init, normal ){
}

TEST ( test_init, extreme ){
	ASSERT_EQ(Image(4, 4, DummyIoStrategy()).at(0, 0).red, 0);
}

