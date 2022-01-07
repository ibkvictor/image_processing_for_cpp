#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "png_strategy.h"

using namespace igg;

TEST ( Image, WriteToDisk_extreme ){
        IoStrategy& strategy;
        Image img_temp (strategy(PpmIoStrategy());
        ASSERT_EQ(img_temp.ReadFromDisk("data/pbmlib.ascii.ppm"), true);
        ASSERT_EQ( img_temp.rows(), 300 );
}

TEST ( test_from_png, extreme ){
        IoStrategy& strategy;
        Image img_temp (strategy(PpmIoStrategy());
        img_temp.ReadFromDisk("data/pbmlib.ascii.ppm");
        ASSERT_EQ(img_temp.WriteToDisk("tests/data/test_from_ppm_img_temp.ppm"), true);
}
~         

