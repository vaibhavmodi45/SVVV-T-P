#include<iostream>
using namespace std;

class A{
    public:
    void check(){
        char c;
        cout << "Enter a Character = ";
        cin >> c;
        (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')?cout <<"It's a Vowel" : cout << "It's a Consonent";
    }
};

int main() {
    A a1;
    a1.check();
}