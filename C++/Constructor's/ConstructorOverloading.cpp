#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout << "This is Default Constructor" << endl;	
	}
	
	A(int x, int y) {
		cout << "Sum is = " << x+y << endl;
	}
	
	A(int p, int r, int t){
		cout << "SI is = " << (p*r*t)/100 << endl;
	}
	
	A(string name) {
		cout << "Name is = " << name << endl;
	}
};

int main() {
	A a1;
	A a2("Vaibhav");
	A a3(1250,3,2);
	A a4(10,20);
}
