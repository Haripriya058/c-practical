#include<iostream>
using namespace std;

int main()
{
	int a[50] , i, j, k, count=0, dup[50], number; 
	cout << "Enter size of the array\n";
    scanf("%d",&number);
    cout << "Enter Elements of the array:\n";
    for(i=0;i<number;i++)
	{
      scanf("%d",&a[i]);
      dup[i] = -1;
    }
    cout << "Entered element are: \n";
    for(i=0;i<number;i++)
	{
      cout << "%d ",a[i];
    }
    for(i=0;i<number;i++)
	{
      for(j = i+1; j < number; j++)
	  {
         if(a[i] == a[j])
		 {
            for(k = j; k <number; k++)
			{
            	 a[k] = a[k+1];
            }
            j--;
            number--;
         }
      }
    }
    cout << "\nAfter deleting the duplicate element the Array is:\n";
    for(i=0;i<number;i++)
	{
      cout << "%d ",a[i];
    }
    return 0;
}

