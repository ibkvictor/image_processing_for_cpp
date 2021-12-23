#include <iostream>

using namespace std;

int main() {
	int num = 43;
	int &a = num;
	const int &ka = num;
	a = 0;
	cout<<a<<" "<<num<<" "<<ka<<endl;
	num = 60;	
	cout<<a<<" "<<num<<" "<<ka<<endl;
	return 0;
}
