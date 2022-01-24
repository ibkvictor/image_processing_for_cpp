#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/ppm_strategy.h"

using namespace igg;

TEST ( test_from_ppm, normal ){
        PpmIoStrategy ppm;
        Image img_temp (ppm);
        ASSERT_EQ(img_temp.ReadFromDisk("data/pbmlib.ascii.ppm"), true);
        ASSERT_EQ( img_temp.rows(), 300 );
}

TEST ( test_from_ppm, extreme ){
        PpmIoStrategy ppm;
        Image img_temp (ppm);
        ASSERT_EQ(img_temp.ReadFromDisk("data/pbmlib.ascii.ppm"), true);
	int col_size = img_temp.cols();
        img_temp.WriteToDisk("tests/data/test_from_ppm_img_temp.ppm");
	ASSERT_NE(col_size, img_temp.cols());
}


