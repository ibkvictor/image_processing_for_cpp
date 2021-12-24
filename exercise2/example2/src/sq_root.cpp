#include "sq_root.h"

float sq_root(float value){
	//perform NaN check
	float result = std::sqrt(value);
	if (result!=result){//reference c++11 and IEE
		result = -1;
	}
	return result;
}
