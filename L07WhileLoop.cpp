//?Given a number N, print sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;


int main(){
	int N;
	cin>>N;
	int i=0;
	int sum=0;
	while(i<=N){
		if(i%2==0) sum = sum+i;
		i++;
	}
	cout<<sum;
}

/* Q- Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) 
and Step Size (W), you need to convert all Fahrenheit values from Start to 
End at the gap of W, into their corresponding Celsius values and print the table.*/

#include<iostream>
using namespace std;


int main(){

    int S,E,W;
	cin>>S>>E>>W;

	while(S<=E){
		int celcius = 5*(S-32)/9;
		cout<<S<<' '<<celcius<<endl;
		S = S+W;
	}
  
}