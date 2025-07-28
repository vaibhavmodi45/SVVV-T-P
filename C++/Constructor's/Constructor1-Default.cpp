#include<iostream>
using namespace std;

class A {
	public:
	void show() {
		cout << "Hello" << endl;
	}
	A(){
		cout << "It's the Constructor's Body .\n.\n.\n" << endl ;
	}
};

int main() {
	A a1;
	a1.show();
}
