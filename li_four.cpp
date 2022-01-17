#include<iostream>
#include<string>
using namespace std;

class employee{
	public:
		string name;
		int roll_no;
		int it;
		int salary;
		
		void output(){
			cout<<name<<"   "<<roll_no<<"   "<<salary<<"    "<<it<<endl;
		}
};
int main(){
	employee e;
	cout<<"Enter details of first student: ";
	cin>>e.name>>e.roll_no>>e.salary>>e.it;
	e.output();
	return 0;
}

