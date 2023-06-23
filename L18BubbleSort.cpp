// //? My approach

// #include <iostream>
// using namespace std;

// void BubbleSort(int arr[],int n){
    
//         for(int i=0;i<n-1;i++){
//             for(int j=0;j<n;j++){
//                 if(arr[j]>arr[j+1]){
//                     int temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
//                 }
//             }
//         }

// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     BubbleSort(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }


//? Find Kth Smallest

#include <iostream>
using namespace std;


int BubbleSort(int arr[],int n,int k){


 for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr[k-1];

}

int main()
{
    int n;
    cin>>n;
    

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;


    int ans=BubbleSort(arr,n,k);
    cout<<ans;
}