// #include <iostream>
// using namespace std;
// int main()
// {
//     // char str[100] = "Si  lo";
//     // cout<<str;

//     char str2[10];
//     cin.getline(str2,10,'u');
//     cout<<str2;
    
// }


//? Reversing a string

// #include <iostream>
// using namespace std;

// void reverse(char str[]){

//     for(int i = 0,j=13;i<j;i++,j--){
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

// }

// int main()
// {
//     char str[30] = "Sitansu Sekhar";
//     reverse(str);
//     cout<<str;
// }


//? Removing spaces 

#include <iostream>
using namespace std;


int main()
{
    char str[5] = "s\0i\0";
    cout<<str;
}


//? Printing all substrings 

//! A substring is a contiguous sequence of characters within a string. 
//!Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

void printSubstrings(char input[]) {
    // Write your code here


   for(int i=0;input[i]!='\0';){

       for(int j=i;input[j]!='\0';j++){
           for(int k =i;k<=j;k++ ){
               cout<<input[k];
           }
           cout<<endl;
       }
       i++;
   }
}