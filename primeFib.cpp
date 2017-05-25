#include <iostream>
#include <math.h>
#include <ctime>
#define MAX 1000
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
    return true;
    int checkRange = sqrt(n);
    for (int i = 2; i <= checkRange; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
{
	clock_t start;
	double duration;
	start= clock();
    int n, c, first = 0, second = 1, next, primeCount = 0;
    int primes[MAX];

    cout << "Enter a positive number  " << endl;
    cin >> n;

    cout << "First " << n << " terms of Fibonacci series are :- " << endl;

    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << endl;

        if (isPrime(next))
        {
            primes[primeCount] = next;
            primeCount++;
        }
    }

    for (c = 0; c < primeCount; c++)
        cout << primes[c] << ",";

    duration=(clock()-start)/(double) CLOCKS_PER_SEC;
    cout<<"Time taken: "<<duration<<"\n";
    return 0;

}
return 0;
}

