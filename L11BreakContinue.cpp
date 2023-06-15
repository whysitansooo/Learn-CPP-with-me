//? Prime number - Break 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter ur number: ";
    cin>>n;
    bool divide = false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            divide = true;
            break;
        }
    }
    if(divide) cout<<"Not prime";
    else cout<<"Prime";
}


//? Continue

#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<10;j++){
        if(j==7){
            continue;
        }
        cout<<j<<endl;
    }
    
}
