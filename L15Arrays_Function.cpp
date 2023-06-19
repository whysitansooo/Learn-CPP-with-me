#include <iostream>
using namespace std;

void print(int array[]){
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr);
}

//? Reversing Array

#include <iostream>
using namespace std;

void reverse(int n,int arr[]){
    for(int i=0,j=n-1;j>i;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    reverse(5,arr);

}
