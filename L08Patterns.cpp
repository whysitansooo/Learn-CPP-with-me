//? Pattern 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<j<<' ';
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//? Pattern 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number rows: ";
//     cin>>n;
//     int i = 1;
//     int value = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<value<<' ';
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
//     }

//? Pattern 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number of row: ";
//     cin>>n;
//     int i=1;
//     int value=1;

//     while(i<=n){
//     int space =1;
//     while(space<=n-i){

//         cout<<" ";
//         space++;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<value;
//         value++;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
// }

//? Pattern 4 hard

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row: ";
//     cin >> n;

//     int val;
//     for (int i = 1; i <= n; i++)
//     {
//         val = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<val;
//             val++;
//         }
//         cout << endl;
//     }
// }

//? Pattern 5 hard

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int val=i;
//         for(int space=i;space<=n-1;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<val;
//             val++;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 6 star pattern
// #include<iostream>
// using namespace std;


// int main(){

//    int n;
//    cin>>n;

//    for(int i=1;i<=n;i++){
// 	   for(int space=i;space<=n-1;space++){
// 		   cout<<" ";
// 	   }
// 	   for(int j=1;j<=i*2-1;j++){
// 		   cout<<"*";
// 	   }
// 	   cout<<endl;
//    }
  
// }

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	int BasicSal;
	char Grade;
	cin>>BasicSal>>Grade;
    int Allowance = 0;
    if(Grade =='A'){
        Allowance = 1700;
    } 
    else if(Grade='B'){
        Allowance = 1500;
    }
    else Allowance = 1300;

	int hra = (BasicSal*0.2);
	int da= (BasicSal*0.5);
	double pf = (BasicSal*0.11);

	double TotalSal = BasicSal+hra+da+Allowance-pf;
	cout<<hra;
}
