#include <gtest/gtest.h>
#include "igg_image/image.h"

using namespace igg;

IoStrategy& strategy;
Image img(strategy(PpmIoStrategy()));

TEST ( Image, size_normal ){
	img.rows();
}

TEST ( Image, size_extreme ){
	Image().rows();
}

TEST ( Image, at_normal ){
	Image().cols();
}

TEST ( Image, at_extreme ){

}

TEST ( Image, index_normal ){

}

TEST ( Image, index_extreme ){

}

TEST ( Image,  ReadFromDisk_normal ){
	ASSERT_EQ(img.ReadFromDisk("data/pbmlib.ascii.ppm"), true);
}

TEST ( Image, WriteToDisk_normal ){
	img.WriteToDisk("data/tests_image_img.ppm");
}

TEST ( Image, WriteToDisk_extreme ){
	Image img_temp (strategy(PngIoStrategy());
	ASSERT_EQ(img_temp.ReadFromDisk("data/pbmlib.ascii.ppm"), true);
	Image img_temp2 (strategy(PpmIoStrategy()));
	img_temp2 = img_temp;
	img_temp2.WriteToDisk("data/tests_image_img_temp2.png");
}

TEST ( Image, scale_normal ){
	const Image &img2 = img;
	img.UpScale(2);
	img.DownScale(2);
	ASSERT_EQ(img.at(1, 1), img2.at(1, 1));
}

TEST ( Image, scale_extreme ){
	Image img3(strategy(PpmIoStrategy()));
	img3.ReadFromDisk("data/pbmlib.ascii.ppm");
}
