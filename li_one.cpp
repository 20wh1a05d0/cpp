#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int roll_no;
		int grade;
		
		void output(){
			cout<<name<<"   "<<roll_no<<"   "<<grade<<endl;
		}
};
int main(){
	student s[20];
	cout<<"Enter details of first student: ";
	cin>>s[0].name>>s[0].roll_no>>s[0].grade;
	cout<<"Enter details of second student: ";
	cin>>s[1].name>>s[1].roll_no>>s[1].grade;
	cout<<"Enter details of third student: ";
	cin>>s[2].name>>s[2].roll_no>>s[2].grade;
	int i;
	for(i = 0; i < 3; i++){
		s[i].output();
	}
}

