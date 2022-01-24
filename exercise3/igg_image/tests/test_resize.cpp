#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/strategy.h"
#include "igg_image/io_strategies/dummy_strategy.h"
#include "igg_image/io_strategies/ppm_strategy.h"

using namespace igg;

TEST ( test_resize, normal ){
        Image img (2, 2, DummyIoStrategy());
	//making left and right bottom corners color purple red + blue;
	img.at(0,0) = {128, 128, 0};
	img.at(1,1) = {128, 128, 0};
	img.UpScale(2);
	ASSERT_EQ(128, img.at(1,0).red);
}

TEST ( test_resize, extreme ){
	PpmIoStrategy ppm;
	Image img (ppm);
	img.ReadFromDisk("data/pbmlib.ascii.ppm");
	int holder = img.at(5,5).red;
	img.UpScale(2);
	img.DownScale(2);
	ASSERT_EQ(holder, img.at(5,5).red);	
}

