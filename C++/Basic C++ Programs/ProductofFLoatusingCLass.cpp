#include<iostream>
using namespace std;

class M{
	public:
		float mul(float a, float b) {
			return a*b;
		}
};

int main() {
	float x, y;
	cout << "Enter 2 Float Values = ";
	cin >> x >> y;
	
	M a1;
	cout << "Product is = " << a1.mul(x,y);
}
