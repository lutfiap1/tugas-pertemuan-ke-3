#include <iostream>
using namespace std;

int main()
{
    int bil;
    cout<<"Masukkan bilangan :";
    cin>>bil;
    cout<<"Yang anda masukkan bilangan ";
    string ab = bil % 2 == 0 ? "genap" : "ganjil";
    cout<<ab;
    
}
