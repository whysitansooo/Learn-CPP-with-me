#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    //! Taking input
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

        //! Printing
      for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}