#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

using namespace igg;

TEST ( test_init, normal ){
        ASSERT_EQ(Image(DummyIoStrategy()), true);
}

TEST ( test_init, extreme ){
        Image img (4, 4, DummyIoStrategy());
	img.ReadFromDisk("dummy_file") //dummy_file does not exist
	//expect row, cols, max_val should 0,0,0.
	ASSERT_EQ( img.cols, 0 );
	ASSERT_EQ( img.max_val, 0 );
}

