//! We use cin.get() to get character input and also count the spaces and newline

#include <iostream>
using namespace std;
int main()
{
    char c;
    int count=0;
    for(int i=0;c!='Z';i++){
        cin.get(c);
        count++;
        
    }
    cout<<count;

}