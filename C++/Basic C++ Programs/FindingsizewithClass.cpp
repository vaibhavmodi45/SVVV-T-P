#include<iostream>
using namespace std;

class A{
	public:
		void size() {
			int a;
			float b;
			char c;
			double d;
			
			cout << "Size of int is = " << sizeof(a) << " Bytes" << endl;
			cout << "Size of Float is = " << sizeof(b) << " Bytes" << endl;
			cout << "Size of char is = " << sizeof(c) << " Bytes" << endl;
			cout << "Size of Double is = " << sizeof(d) << " Bytes" << endl;
		}
};

int main() {
	A a1;
	a1.size();
}
