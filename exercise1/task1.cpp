#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int x;
	int y = rand() % 100;
	cout<<"guess the number between 0 and 99"<<endl;
	cout<<y<<endl;
	
	while(true){
		cin>>x;
		cout<<"you guessed: "<<x<<endl;
		if(x>y){
			cout<<"the number is smaller"<<endl;	
			cout<<"enter another number: ";		
		}
		else if(x==y){
			cout<<"you have won"<<endl;	
			break;
		}
		else{
			cout<<"the number is larger"<<endl;
			cout<<"enter another number: ";	
		};
	};
	return 0;
};
