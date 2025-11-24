#include<stdio.h>
int main()
{
	int i,n,sum,avg;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{ 
	 	sum=sum+i;
	        i++;
	}while(i<=n);
	avg=sum/n;
printf("average of first n number is %d",avg);
return(0);
}	
		
