#include<iostream>
using namespace std;
enum bits{one=1,two=2,three=3,four=4,eight=8};
int main(int argc, char const *argv[])
{
    bits b1 = bits(2);
    bits b2 = bits(6);
    cout<<bits(b1)<<"\t"<<b2<<endl;
    return 0;
}
