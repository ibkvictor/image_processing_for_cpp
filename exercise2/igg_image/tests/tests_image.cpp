#include <iostream>
#include "igg_image/image.h"
#include "igg_image/io_tools.h"
#include <gtest/gtest.h>

using namespace igg;
TEST(Simplified, Simplified_Test){
	ASSERT_EQ(1, 1);
}
TEST(Image_indexing, normal){
	EXPECT_EQ(Image(10,10).at(9,9), 0); //testing default vaule of image data
}

TEST(Image_indexing, extreme){
	EXPECT_EQ(Image(1,1).at(0, 0), 0);
}

TEST(Image_size, normal){
        EXPECT_EQ(Image().rows(), 0);
	EXPECT_EQ(Image().cols(), 0);
}

TEST(Image_size, extreme){
        EXPECT_EQ(Image(100, 100).size(), (std::vector<int> {100,100}));
}

TEST(Image_read_from_file, normal){
        EXPECT_EQ(Image().FillFromPgm("data/lena.ascii.pgm"), true);
}

/*TEST(Image_Histogram, normal){
	Image img();
	img.FillFromPgm("lena.ascii.pgm");
        EXPECT_EQ(img.ComputeHistogram(4), (std::vector<float> {}));
}*/

TEST(Image_DownScale, normal){
	Image img(4,4);
	for(auto i = 0; i <= 4; i++){
		for(auto j = 0; j <=4; j++){
			if((i < 2 && j < 2) || (i >= 2 && j >= 2)){
				img.at(i, j) = 255;
			}
			else{
				img.at(i, j) = 0;
			}
		}
	}
	img.DownScale(2);
	EXPECT_EQ(img.at(0,0), 255);
	EXPECT_EQ(img.at(1,1), 0);
}

TEST(Image_UpScale, normal){
        Image img(4,4);
        for(auto i = 0; i <= 2; i++){
                for(auto j = 0; j <=2; j++){
                        if((i < 1 && j < 1) || (i >= 1 && j >= 1)){
                                img.at(i, j) = 255;
                        }
                        else{   
                                img.at(i, j) = 0;
                        }
                }
        }
        img.UpScale(2);
        EXPECT_EQ(img.at(0,0), 255);
	EXPECT_EQ(img.at(1,1), 255);
}
