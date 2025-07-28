#include<iostream>
using namespace std;

class A{
	public:
	void loop(int n){
		int i = 1;
		while(i<=10){
			cout << n*i << endl;
			i++; 
		}
	}
	
	void loop2(int x){
		int i=x, fact = 1;
		do{
			fact *= i;
			i--;
		}
		while(i>=1);
		
		cout << "Fact is = " << fact << endl;
	}
};

int main() {
	A a1;
	a1.loop(7);
	a1.loop2(7);
}
