//? This is my OG approach 

#include <iostream>
using namespace std;


int binarySearch(int nums[], int left, int right, int target) {
    
    for(int i=0;i<10000;i++){
        int mid = (left+right)/2;
        if(nums[mid]==target) return mid;

        else if(nums[mid]>target){
            
            right--;
        }
        else if(nums[mid]<target){
            left++;
        }
        if(left>right) return -1;

    }
    
}

int main()
{
    int N;
    cin>>N;
    int A[N];
    
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    int left=0;
    int right=N-1;
    
    int target;
    cin>>target;

    int ans = binarySearch(A,0,N-1,target);
    cout<<ans;
}

//? Another approach 

int binarySearch(int nums[], int left, int right, int target) {
    // Write Your Code Here
    for(;left<=right;){
        int mid = (left+right)/2;

        if(nums[mid]==target) return mid;

        else if(target<nums[mid]){
            right = mid-1;
        }
        
        else left  = mid+1;
    }
    return -1;
}
