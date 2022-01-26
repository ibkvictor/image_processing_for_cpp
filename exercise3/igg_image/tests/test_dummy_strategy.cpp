#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

using namespace igg;

TEST ( test_dummy, normal ){
        ASSERT_EQ(Image(DummyIoStrategy()).cols(), 0);
}

TEST ( test_dummy, extreme ){
/*
	std::cout<<"you"<<std::endl;
	Image img (4, 4, DummyIoStrategy());
        img.ReadFromDisk("dummy_file"); //dummy_file does not exist
        std::cout<<"here higher"<<std::endl;
        //expect row, cols, max_val should 0,0,0.
        std::cout<<img.cols()<<std::endl;

	//std::cout<<"here1"<<std::endl;
	Image img (4, 4, DummyIoStrategy());
	//std::cout<<"here2"<<std::endl;
	img.ReadFromDisk("dummy_file"); //dummy_file does not exist
	//std::cout<<"here higher"<<std::endl;
	//expect row, cols, max_val should 0,0,0.
	ASSERT_EQ( img.cols(), 0);
*/
}

