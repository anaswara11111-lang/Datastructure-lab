#include<stdio.h>
int main()
{
	int i=1,largest=0,num;
	while(i<=5)
	{
		printf("Enter a number:");
		scanf("%d",&num);
		if(num>largest)
		 largest=num;
		 i+=1;
	}
printf("largest number is %d",largest);
return 0;
}
