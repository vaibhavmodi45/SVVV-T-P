#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
	public:
		float CI(float p, float r, int t, int n) {
			float Amt = p * ((pow((1 + r/100), t)));
			int Intrest = Amt - p;
			
		}
};

int main() {
	float a, b;
	int t, n;
	cout << "Enter Principle Amt, Rate and Time & Compounding Time= ";
	cin >> a >> b >> t >> n;
	A b1;
	cout << "CI is = " << b1.CI(a, b, t, n);
}
