#include<iostream>
using namespace std;

class Tempcheck {
	public:
		void f2c(){
			int temp;
			cout << "Enter tempreture in Fahrenheit = ";
			cin >> temp;
			
			int inCel = (temp - 32) * 5/9;
			
			cout << "Tempreture in Celcius is = " << inCel << " Degree Celsius"  << endl;
		}
		
		void c2f(){
			int temp;
			cout << "Enter tempreture in Fahrenheit = ";
			cin >> temp;
			
			int inFeh = (temp * 9/5) + 32;
			
			cout << "Tempreture in Fahrenheit is = " << inFeh << " Degree Fahrenheit" << endl;
		}
		
};

int main( ){
	int n;
	cout << "Enter the Convertion \n 1 For Fahrenheit to Celsius \n 2 For Celsius to Fahrenheit \n";
	cin >> n;
	
	Tempcheck a1;
	switch(n) {
		case 1:
			a1.f2c();
			break;
		case 2:
			a1.c2f();
			break;
		default:
			cout << "Enter valid Input...";
	};
}
