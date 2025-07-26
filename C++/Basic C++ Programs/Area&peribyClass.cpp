#include<iostream>
using namespace std;

class A{
	public:
		void area(){
			int l, b;
			cout << "Enter the length and breadth of Rectangle = ";
			cin >> l >> b;
			
			cout << "Area is = " << l*b << endl;
		}
		
		void perimeter() {
			int l, b;
			cout << "Enter the length and breadth of Rectangle = ";
			cin >> l >> b;
			
			cout << "Perimeter is = " << 2*(l+b) << endl;
		}
};

int main() {
	int n;
	cout << "Select Operation \n\n 1 ---  For Calculating Area: \n 2 ---  For Calculating Perimeter: ";
	cin  >> n;
	A a1;
	switch(n) {
		case 1:
		a1.area();
		break;
		case 2:
		a1.perimeter();
		break;
		default:
		cout << "Enter valid Input" << endl;		
	};
}	


