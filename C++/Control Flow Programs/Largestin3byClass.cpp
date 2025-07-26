#include<iostream>
using namespace std;

class A{
	public:
		void check(int a, int b, int c){
			(a>b && a>c)?cout << a << " is Largest":(b>c)?cout << b << " is Largest":cout << c << " is Largest";
		}
};

int main() {
	int a, b, c;
	cout << "Enter three num = ";
	cin >> a >> b >> c;
	A a1;
	a1.check(a, b, c);
}	
