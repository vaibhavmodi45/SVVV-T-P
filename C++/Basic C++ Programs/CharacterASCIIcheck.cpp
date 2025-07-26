#include<iostream>
using namespace std;

class M{
	public:
		void check() {
			char c;
			cout << "Enter a Character = ";
			cin >> c;
			
			int a = c;
			
			cout << "It's ASCII Value is = " << a << endl;
		}
};

int main() {
	M a1;
	a1.check();
}
