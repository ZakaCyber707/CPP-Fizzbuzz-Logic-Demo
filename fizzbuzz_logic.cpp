//1. Print numbers from 1 to n. For multiples of 3, print "Fizz". For multiples of 5, print "Buzz". For
//numbers divisible by both 3 and 5, print "FizzBuzz"
#include<iostream>
using namespace std;
int main(){
	
	int num1=0;
	int num2=0;
	
	cout<<"Enter number1:  ";
	cin>>num1;
	cout<<"Enter number2:  ";
	cin>>num2;
	
	while(num1<num2)
	{
		
		if(num1%3==0&&num1%5==0)
		{
			cout<<num1<<"FizzBuzz\n";
		}
		
		else if(num1%3==0)
		{
			cout<<num1<<"Fizz\n";
		}
		
		
		else if(num1%5==0)
		{
			cout<<num1<<"Buzz\n";
			
			
		}
		
		else{
			cout<<num1<<endl;
		}
		
		num1++;
		}	
	
}
