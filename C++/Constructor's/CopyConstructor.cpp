#include<iostream>
using namespace std;

class A{
	int i, x;
	public:
	A(int x){
		for(i=1;i<=10;i++){
			x = x;
			cout << i << " * " << x << " = " << x*i << endl;
		}
	}
	
	A(A&b){
		int c = b.x;
		cout << "In copy constructor = " << c << endl;
	}
};

int main() {
	A a1(5);
}
