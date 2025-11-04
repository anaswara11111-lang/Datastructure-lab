#include<stdio.h>
int main()
{
	int array[50],n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>50||n<1)
	{
		printf("Invalid number of elements");	
	}
	printf("Enter %d number:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	printf("Sum of %d numbers is %d",n,sum);
        return(0);
}
		 
