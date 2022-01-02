#include "print.h"

int main(){
	Print word ("I am a word");
	std::cout<<"confirming the str works"<<word.str()<<std::endl;
	word.print();
	std::cout<<"much better"<<std::endl;
	return 0;
}
