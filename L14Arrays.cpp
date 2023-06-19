#include<iostream>
using namespace std;
int main()
{   
    //Taking array input
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

   
    

}

? Largest element in an array

#include <iostream>
#include<climits>
using namespace std;
int  main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"MAX:"<<max;

}

//! This is how arrays stored 

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<arr<<endl; // This will print address of 0th index
    cout<<sizeof(int);
}
