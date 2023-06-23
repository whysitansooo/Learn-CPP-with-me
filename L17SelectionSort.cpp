//? My OG approach

#include <iostream>
using namespace std;


void SelectionSort(int arr[],int n){
    

    //! Finding Min element
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        int bing=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                bing = j;
            }
        }
        //! Swap
        int temp = arr[i];
        arr[i] = arr[bing];
        arr[bing] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    SelectionSort(arr,n);
}