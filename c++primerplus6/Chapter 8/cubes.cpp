// cubes.cpp -- regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);
double refcube1(const double &ra);
int refcube2(const int &ra);

int main ()
{
    using namespace std;
    double x = 3.0;

    // cout << cube(x);
    // cout << " = cube of " << x << endl;
    // cout << refcube(x);
    // cout << " = cube of " << x << endl;

    double s = 3.0;
    double *p = &s;
    double &r = s;
    long e = 5L;
    double arr[3] = {1.0 ,2.0 ,3.0};

    cout<<refcube1(s)<<endl;
    cout<<refcube1(arr[1])<<endl;
    cout<<refcube1(r)<<endl;
    cout<<refcube1(*p)<<endl;

    cout<<refcube1(e)<<endl;
    cout<<refcube1(1.0)<<endl;
    cout<<refcube1(s+1.0)<<endl;

    long tets = 1L;
    cout<<"sadasf"<<refcube2(tets)<<endl;

    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

 double refcube(double &ra)
{
    ra *= ra * ra;
    return ra; 
}

double refcube1(const double &ra)
{
    return ra * ra * ra;
}

int refcube2(const int &ra)
{
    return ra * ra * ra;
}