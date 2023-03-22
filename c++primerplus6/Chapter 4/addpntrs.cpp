// addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
    using namespace std;
//     double wages[3] = {10000.0, 20000.0, 30000.0};
//     short stacks[3] = {3, 2, 1};

// // Here are two ways to get the address of an array
//     double * pw = wages;     // name of an array = address
//     short * ps = &stacks[0]; // or use address operator
// // with array element
//     cout << "pw = " << pw << ", *pw = " << *pw << endl;
//     pw = pw + 1;
//     cout << "add 1 to the pw pointer:\n";
//     cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

//     cout << "ps = " << ps << ", *ps = " << *ps << endl;
//     ps = ps + 1;
//     cout << "add 1 to the ps pointer:\n";
//     cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

//     cout << "access two elements with array notation\n";
//     cout << "stacks[0] = " << stacks[0] 
//          << ", stacks[1] = " << stacks[1] << endl;
//     cout << "access two elements with pointer notation\n";
//     cout << "*stacks = " << *stacks
//          << ", *(stacks + 1) =  " << *(stacks + 1) << endl;

//     cout << sizeof(wages) << " = size of wages array\n";
//     cout << sizeof(pw) << " = size of pw pointer\n";
//     cout<< sizeof(ps) <<endl;
//     cout<<wages+1<<endl;
//     cout<<&wages+1<<endl;
//     // cin.get();

    short tell[10]={1,2,3,4,5,6,7,8,9,10};
    short (*pas) [10] = &tell;
    cout<<pas[0]<<"\t"<<*pas[0]    <<"\t"<<*pas  <<"\t"<<pas  <<"\t"<<&tell  <<"\t"<<tell<<endl;
    cout<<pas[1]<<"\t"<<(*pas+1)[0]<<"\t"<<*pas+1<<"\t"<<pas+1<<"\t"<<&tell+1<<"\t"<<tell+1<<endl;

    char flower[10] = "sadhakh";
    cout<<*flower       <<"\t"<<(int*)flower     <<"\t"<<flower      <<"\t"<<tell<<endl;
    cout<<*(flower+1)   <<"\t"<<(int*)(flower+1) <<"\t"<<flower+1    <<"\t"<<tell+1<<endl;

    return 0; 
}
