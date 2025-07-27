#include<iostream>
using namespace std;

class Check{
    public:
        void Leap(int y){
            (y%100==0 || y%4==0 && y%400!=0)?cout<< "It's a Leap Year":cout << "It's not a Leap Year";
        }
};

int main(){
    int n;
    cout << "Enter the year to check = ";
    cin >> n;

    Check a;
    a.Leap(n);
}