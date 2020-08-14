#include <stdio.h>
#include "Prime.h"

int main()
{
	int n;
	printf("Enter a Number :");
	scanf("%d", &n);

	int ans;

	ans = IsPrime(n);

	if(ans)
		printf("Given Number is a Prime Number\n");
	else
		printf("Given Number is Not a Prime Number\n");

    return 0;
}


/**
 * This function is used to check for the Prime Property of a given number
 */

int IsPrime(int n)
{
    int i;
	for(i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
			return 0;
	}

	return 1;
}

