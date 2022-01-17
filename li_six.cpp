/*Write a C++ program to use scope resolution operator. Display the various values of the same
variables declared at different scope levels.*/

#include<iostream>
using namespace std;

int num = 10;

int main(){
	int num = 5;
	cout<<"Value of num as local variable: "<<num<<endl;
	cout<<"Value of num as global variable: "<<::num; //we are using scope operator to access the global variable
	return 0; 
}

