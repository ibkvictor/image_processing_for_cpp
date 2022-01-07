#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "png_strategy.h"

using namespace igg;

TEST ( test_from_png, normal ){
	IoStrategy& strategy;
        Image img_temp (strategy(PngIoStrategy());
        img_temp.ReadFromDisk("tests/data/test_from_png.png");
	ASSERT_EQ( img_temp.rows(), 825 );
}

TEST ( test_from_png, extreme ){
        IoStrategy& strategy;
        Image img_temp (strategy(PngIoStrategy());
        img_temp.ReadFromDisk("tests/data/test_from_png.png");
	ASSERT_EQ(img_temp.WriteToDisk("tests/data/test_from_png_img_temp.png"), true);
}
