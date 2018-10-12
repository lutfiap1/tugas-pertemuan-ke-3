#include <iostream>
using namespace std;

int main()
{
    double suhu;
    cout<<"Masukkan suhu :";
    cin>>suhu;
    cout<<"Kategori suhu :";
    string aa = suhu <= 25 ? "dingin" : "panas";
    cout<<aa;
}
