//! Return type function

#include <iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = i*fact;
    }
    return fact;
}

int main()
{
    int n,r;
    cin>>n>>r;

    int output = factorial(n)/(factorial(r)*(factorial(n-r)));
    cout<<output;

}


//! Void function

#include <iostream>
using namespace std;
void print_1_n(int x){
    for(int i=1;i<=x;i++){
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    print_1_n(n);
}
