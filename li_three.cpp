//Using pointer topoint the object

#include<iostream>
using namespace std;

class rectangle{
	public:
		int length,breadth;
		getlength(int l, int b){
			length = l;
			breadth = b;
		}
		int getArea(){
			return length * breadth; 
		}
		void display(){
			int area = getArea();
			cout<<"Area: "<<area<<endl;
		}
};
int main(){
	rectangle rect, *ptr;
	ptr = &rect;
	ptr->getlength(5,10);
	ptr->getArea();
	ptr->display();
	return 0;
}

