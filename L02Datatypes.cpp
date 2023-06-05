#include <iostream>
using namespace std;

int main()
{
    int a=10; // int takes 4 bytes
    int b=15;
    int c = a+b;

    float d = 2.23; // float takes 4 bytes
    bool flag = true;
    double k = 43.666666; // double takes 8 bytes
    char l = 'A'; // char takes 1 byte

    cout<<c<<endl;
    cout<<sizeof(c)<<endl;
    cout<<flag;
    
}