#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/png_strategy.h"

using namespace igg;

TEST ( test_from_png, normal ){
	PngIoStrategy png;
        Image img_temp (png);
        img_temp.ReadFromDisk("tests/data/test_from_png.png");
	ASSERT_EQ( img_temp.rows(), 825 );
}

TEST ( test_from_png, extreme ){
        PngIoStrategy png;
        //IoStrategy& strategy {png};
        Image img_temp (png);
        ASSERT_EQ(img_temp.ReadFromDisk("tests/data/test_from_png.png"), true);
        img_temp.WriteToDisk("tests/data/test_from_png_img_temp.png");
}
