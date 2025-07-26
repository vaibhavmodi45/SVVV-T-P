#include<iostream>
using namespace std;

class A{
	public:
		int SI(float p, float r, int t) {
			return (p*r*t)/100;
		}
};

int main() {
	float a, b;
	int t;
	cout << "Enter Principle Amt, Rate and Time = ";
	cin >> a >> b >> t;
	A b1;
	cout << "SI is = " << b1.SI(a, b, t);
}
