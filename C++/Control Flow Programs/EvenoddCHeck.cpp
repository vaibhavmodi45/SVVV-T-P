#include<iostream>
using namespace std;

class A{
	public:
		void check(int n){
			(n%2==0)?cout<< "It's Even":cout << "It's Odd";
		}
};

int main() {
	int a;
	cout << "Enter a num = ";
	cin >> a;
	A a1;
	a1.check(a);
}	
