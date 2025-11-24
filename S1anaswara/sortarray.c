#include<stdio.h>
void display_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void merge_array(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
        int i;
        for(i=0;i<size1;i++)
        {
		arr3[i]=arr1[i];
	}
	for(int j=0;j<size2;j++)
	{
		arr3[i]=arr2[j];
	        i=i+1;
	}
}
int main()
{
	int arr1[10],arr2[10],arr3[20],i,j,temp;
	int size1,size2,size3;
	printf("Enter the array1 size:");
	scanf("%d",&size1);
	if(size1>10)
		printf("invalid number");
	for(i=0;i<size1;i++)
	{
		printf("Enter the array1 elements:");       
	        scanf("%d",&arr1[i]);
	}
	printf("array elements are: ");
	display_array(arr1,size1);
	printf("\n");
	for(i=0;i<size1;i++)
	{
		for(j=i+1;j<size1;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
		 	}
		 }
	}
	printf("sorted array elements are" );
	display_array(arr1,size1);
	printf("\n");
	printf("Enter the array2 size:");
	scanf("%d",&size2);
	if(size2>10)
		printf("invalid number");
	for(j=0;j<size1;j++)
	{
		printf("Enter the array2 elements:");       
	        scanf("%d",&arr2[j]);
	}
	printf("array elements are: ");
	display_array(arr2,size2);
	printf("\n");
	for(i=0;i<size2;i++)
	{
		for(j=i+1;j<size2;j++)
		{
			if(arr2[i]>arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
		 	}
		 }
	}
	printf("Sorted array elements are:");
	display_array(arr2,size2);
	printf("\n");
	printf("merged array elements are: ");
	merge_array(arr1,arr2,arr3,size1,size2);
	display_array(arr3,size1+size2);
	size3=size1+size2;
	for(i=0;i<size3;i++)
	{
		for(j=i+1;j<size3;j++)
		{
			if(arr3[i]>arr3[j])
			{
				temp=arr3[i];
				arr3[i]=arr3[j]; 
				arr3[j]=temp;
		 	}
		 }
	}
	printf("\n");
	printf("Sorted array elements are:");
	display_array(arr3,size3);
	printf("\n");
	return(0);
}
