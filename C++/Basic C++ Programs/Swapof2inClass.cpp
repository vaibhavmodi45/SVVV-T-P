#include<iostream>
using namespace std;

class A{
	public:
		void swap() {
			int a, b;
			cout << "Enter 2 number's to swap = ";
			cin >> a >> b;
			
			cout << "Before Swaping" << endl;
			cout << "a = " << a << "\t" << "b = " << b << endl;
			int temp = a;
			a = b;
			b = temp;
			
			cout << "After Swaping" << endl;
			cout << "a = " << a << "\t" << "b = " << b;
		}
};

int main(){
	A a1;
	a1.swap();
}
