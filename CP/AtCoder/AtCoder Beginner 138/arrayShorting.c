#include <stdio.h>              //including stdio.h for printf and other functions


int main()                        //default function for call
{
	int a[50],n,i,j;
  scanf("%d",&n);

  for(i=0;i<n;scanf("%d",&a[i]),i++);

	for (int i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}
		}
	}

  float sum = a[0];                //Printing message
	for (int i = 0; i < n-1; i++)                     //Loop for printing array data after sorting
	{
		sum=(sum + a[i+1])/2;
	}

  printf("%f",sum);
}
