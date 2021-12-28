#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> challenge {};
	vector<int> challenge2 {2,3};
	challenge.push_back(challenge2.back());
	cout<<challenge[0]<<endl;
}
