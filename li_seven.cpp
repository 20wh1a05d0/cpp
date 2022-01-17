#include<iostream>
using namespace std;

int main(){
	int *ptr,n;
	ptr = new int[n];
	cout<<"Enter any number: ";
	cin>>n;
	cout<<"Memory allocated in bytes: "<<sizeof(n)<<endl;
	*ptr = n;
	cout<<"Value at pointer: "<<*ptr;
	delete [] ptr;
	return 0;
}

