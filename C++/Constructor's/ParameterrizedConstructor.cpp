#include<iostream>
using namespace std;

class A {
	int a, b;
	public:
	A(int x, int y) {
		a = x;
		b = y;
	}
	int sum(){
		return a+b;
	}
	int sub() {
		return a-b;
	}
	int pro() {
		return a*b;
	}
	int div() {
		return a/b;
	}
};

int main() {
	int x,y;
	cout << "Enter two numbers = ";
	cin >> x >> y;
	A a1(x,y);
	cout  << endl << "Sum is = " << a1.sum() << endl;
	cout << "Sub is = " << a1.sub() << endl;
	cout << "Pro is = " << a1.pro() << endl;
	cout << "Div is = " << a1.div() << endl;
}
