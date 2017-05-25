
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
     long double n1 = 0,n2=1,next=0;
	int n;

    cout << "Enter a positive number: "<< endl;
    cin >> n;
    clock_t start, end;
    start = clock();
	for (int i = 3; i <= n; ++i)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	end=clock();
	double execution = (double)(end-start)/CLOCKS_PER_SEC;

    cout << "Fibonacci series at "<<n<<" terms:  "<<next << endl;
    cout << "Execution time = " << execution << endl;

	return 0;
}


