#include<iostream> 
#include<ctime>
#include "InfInt.h"//allows big integers
using namespace std;
bool isPrime(InfInt); 
int Fibonacci(int);
int main(){
int n = 0, counter = 0; 
InfInt fib;
clock_t start = clock(); 
while(counter < 10)
{
	fib = Fibonacci(n); 
	if(isPrime(fib))
	{
		counter++; 
	}
		n++; 
	}

clock_t end = clock();
double execution = (double)(end-start)/CLOCKS_PER_SEC;
cout << "execution time at " << counter << " prime Fibonacci numbers: " << execution << " seconds." << endl;
return 0; 
}
bool isPrime(InfInt num){
	if((num == 2) || (num == 0))
	return false;
for(InfInt i = "2"; i < num; i++)
	{ 
	if(num%i == 0)
	}
	return true; 
	}
int fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
     return 1;
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
