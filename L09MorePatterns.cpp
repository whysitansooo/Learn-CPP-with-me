//? Pattern 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//? Pattern 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Rows: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<n;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Rows: ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Rows: ";
//     cin>>n;
    
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Rows: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j = n;j!=0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 6

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int val=i;
//         for(int j=1;j<=i;j++){
//             cout<<val;
//             val++;
//         }
//         cout<<endl;
//     }
// }

//? Pattern 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//? Pattern 8

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j!=0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//? ALPHA pattern 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char c = 65;
//     for(char i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<c;
//         }
//         c++;
//         cout<<endl;
//     }
// }

//? ALPHA pattern 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char c = 'A'+i-1;
//         for(int j=1;j<=i;j++){
//             cout<<c;
//             c++;
//         }
//         cout<<endl;
//     }
// }

//? ALPHA pattern 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char c = 'A'+n+1;
//         for(int j=1;j<=i;j++){
//             cout<<c;
//             c--;
//         }
//         cout<<endl;

//     }
    
// }

//? ALPHA Pattern 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

    
//     for(int i=1;i<=n;i++){
//         char c = 'A'+n-i;
//         for(int j=1;j<=i;j++){
//             cout<<c;
//             c++;
//         }
//         cout<<endl;;
//     }
// }


//? Inverted star Pattern 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//? Inverted number pattern 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         int val = 1;
//         for(int j=1;j<=i;j++){
//             cout<<val;
//             val++;
//         }
//         cout<<endl;
//     }
// }

//? Pyramid number pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


//? Pyramid star pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int space =1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int k=1;k<=i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//? Triangle of Numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int val = i;
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<val;
            
//             val++;
//         }
//         int neg=val-2;
//         for(int k=1;k<=i-1;k++){
//             cout<<neg;
//             neg--;
            
//         }
//         cout<<endl;


//     }
// }

//?  Diamond of Stars

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=i+1;space++){
//             cout<<" ";
//         }

//     }
// }