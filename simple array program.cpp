#include<iostream> //header file
using namespace std ;

int main () //function of body
{
	int age[4];
	for(int j=0;j<4;j++){
		cout<<"enter the age; ";
		cin>>age[j];
	}
	for(int j=0;j<4;j++){
		cout<<"your age is: "<<age[j]<<endl;
	}
	return 0;
}
