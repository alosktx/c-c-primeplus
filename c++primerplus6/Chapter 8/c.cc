#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    int * p = &a;
    int &c = *p;
    int d = 20;
    p = &d;

    cout<<a<<"\t"<<&a<<endl;
    cout<<*p<<"\t"<<p<<endl;
    cout<<c<<"\t"<<&c<<endl;
    cout<<d<<"\t"<<&d<<endl;

    return 0;
}
