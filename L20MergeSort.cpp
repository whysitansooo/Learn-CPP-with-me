//? Merge sorting two Arrays

#include <iostream>
using namespace std;
#include<climits>

//? My approach

//void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
//{

    // int pos = 0;
    // if(size2==0){
    //     for(int i=0;i<size1;i++){
    //         arr2[i] = INT_MAX;
    //     }
    // }
    // if(size1==0){
    //     for(int i=0;i<size1;i++){
    //         arr1[i] = INT_MAX;
    //     }
    // }
    
    //  for(int i=0,j=0;i<size1 || j<size2;){

        
    //     if(arr1[i]<=arr2[j]){
    //         ans[pos]   =  arr1[i];
    //         pos++;
    //         i++;
    //     }
    //     else if(arr1[i]>=arr2[j]) {
    //         ans[pos] = arr2[j];
    //         pos++;
    //         j++;
    //     }
    //  }
     
//}

//? Another approach

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){


    int pos = 0;
    int i = 0, j = 0;
    for(;i<size1 && j<size2;){

        if(arr1[i]<arr2[j]){
            ans[pos] = arr1[i];
            i++;
            pos++;
        }
        else {
            ans[pos] = arr2[j];
            j++;
            pos++;
        }
    }

    for(;i<size1;){
        ans[pos] = arr1[i];
        i++;
        pos++;
    }

    for(;j<size2;){
        ans[pos] = arr2[j];
        j++;
        pos++;
    }
    
}
    


int main()
{
   int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}

    


}