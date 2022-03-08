//Program to find the sum of first n terms of series
#include <iostream>
#include <math.h>
using namespace std;

double s(int n)
{
	int i;
	double sum=0.0, ser;
	for (i=1 ; i<=n ; ++i)
	{
		ser = 1/pow(i,i);
		sum += ser;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Enter the vale of n:";
	cin >> n;
	double result = s(n);
	cout << result;
	return 0;
}
