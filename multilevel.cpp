#include <iostream>
using namespace std;

class A1 {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class A2 : public A1 {};

class A3 : public A2 {};

int main() {
    A3 a;
    a.display();
    return 0;
}

