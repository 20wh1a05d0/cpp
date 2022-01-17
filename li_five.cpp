/*Write a C++ program to read the data of N employee and compute Net salary of each employee 
(DA=52% of Basic and Income Tax (IT) =30% of the gross salary).*/


#include<iostream>
#include<string>
using namespace std;

class employee{
	public:
		string name;
		int roll;
		float basic,da,it,net,gross;
		
		void read_details(int count){
			cout<<"Enter details of employee:"<<count<<endl;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter roll: ";
			cin>>roll;
			cout<<"Enter basic salary: ";
			cin>>basic;
			cout<<endl;
		}
		int netSalary(){
			da = basic * 0.52;
			gross = basic + da;
			it = gross * 0.30;
			net = (basic + da) - it;
			return net;
		}
		void display(int count){
			cout<<"Details of employee "<<count<<":"<<endl;
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee id no.: "<<roll<<endl;
			cout<<"Net Salary: "<<net<<endl<<endl;
		}
};
int main(){
	employee e[50];
	int i,n;
	cout<<"Enter number of employees: ";
	cin>>n;
	for(i = 0; i < n; i++){
		e[i].read_details(i+1);
	}
	for(i = 0; i < n; i++){
		e[i].netSalary();
	}
	for(i = 0; i < n; i++){
		e[i].display(i+1);
	}
	return 0;
}

