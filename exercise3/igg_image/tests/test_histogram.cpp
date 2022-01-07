#include <gtest/gtest.h>
#include "igg_image/io_strategies/ppm_strategy.h"
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

TEST ( test_histogram, normal ){
	Image img (2,2, DummyIoStrategy());
	//Setting top-right and bottom-left corners to purple
	img.at(0,0) = {255, 0, 255}; //purple
	img.at(1,1) = {255, 255, 0); //yellow
        ASSERT_EQ( img.ComputeHistogram(4), {8, 0, 0, 4} );
}

TEST ( test_histogram, extreme ){
	Image img (PpmIoStrategy());
        //Setting top-right and bottom-left corners to purple
        img.ReadFromDisk("data/pbmlib.ascii.ppm");
	//Histogram of give "data/pbmlib.ascii.ppm": 
        ASSERT_EQ( img.ComputeHistogram(4), {8, 0, 0, 4} );        
}
  
