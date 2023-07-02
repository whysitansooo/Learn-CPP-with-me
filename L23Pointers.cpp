#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout<<&i<<endl;
    //! Pointers are variables which can store address of variables

    int * p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<sizeof(p)<<endl;

}