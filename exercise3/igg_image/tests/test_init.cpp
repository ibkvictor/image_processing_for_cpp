#include <gtest/gtest.h>
#include "igg_image/image.h"
#include "igg_image/io_strategies/dummy_strategy.h"

using namespace igg;

TEST ( test_init, normal ){
	DummyIoStrategy dum;
        IoStrategy& stra {dum};
        ASSERT_EQ(Image(stra).cols(), 0);
}

TEST ( test_init, extreme ){
	DummyIoStrategy dum;
	IoStrategy& stra = dum;
	ASSERT_EQ(Image(4, 4, stra).at(0, 0).red, 0);
}

