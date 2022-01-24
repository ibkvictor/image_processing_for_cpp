#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

using namespace igg;

TEST ( test_dummy, normal ){
        ASSERT_EQ(Image(DummyIoStrategy()).cols(), 0);
}

TEST ( test_dummy, extreme ){
        Image img (4, 4, DummyIoStrategy());
	img.ReadFromDisk("dummy_file"); //dummy_file does not exist
	//expect row, cols, max_val should 0,0,0.
	ASSERT_EQ( img.cols(), 0 );
}

