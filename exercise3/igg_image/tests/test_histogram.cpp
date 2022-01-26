#include <gtest/gtest.h>
#include "igg_image/io_strategies/strategy.h"
#include "igg_image/io_strategies/ppm_strategy.h"
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"
using namespace igg;

TEST ( test_histogram, normal ){
	Image img (2,2, DummyIoStrategy());
	//Setting top-right and bottom-left corners to purple
	img.at(0,0) = {255, 0, 255}; //purple
	img.at(1,1) = {255, 255, 0}; //yellow
	std::vector<int> histogram {8,0,0,4};
        ASSERT_EQ( img.ComputeHistogram(4), histogram );
}

TEST ( test_histogram, extreme ){
	PpmIoStrategy ppm;
	Image img (ppm);
        //Setting top-right and bottom-left corners to purple
        img.ReadFromDisk("../data/pbmlib.ascii.ppm");
	//Histogram of give "data/pbmlib.ascii.ppm":
	std::vector<int> histogram { 67954, 21266, 67200, 113580 };
        ASSERT_EQ( img.ComputeHistogram(4), histogram );        
}
  
