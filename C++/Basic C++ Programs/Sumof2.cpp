#include<iostream>
using namespace std;

class A{
	public:
	void sum() {
		int a, b;
		cout << "Enter 2 nums = ";
		cin >> a >> b;
		cout << "Sum is = " << a+b;
	}
};

int main( ){
	A b;
	b.sum();
}
