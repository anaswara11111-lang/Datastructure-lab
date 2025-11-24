 #include<stdio.h>
#include<ctype.h>
	char universal_set[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char set1[26],set2[26];
	int bit_vec1[26],bit_vec2[26],result[26];
	
void initializeSet()
{
	//initialize the arrays bit_vec1,bit_vec2,result
	for(int i=0;i<26;i++)
	{
		bit_vec1[i]=0;
		bit_vec2[i]=0;
		result[i]=0;
	}
			
}
void bitVector(char  ary[26],int bit[26],int num)
{
	//represent the array in bitvector form
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<26;j++)
		{
			char c = toupper(ary[i]);
			if(c == universal_set[j])
				bit[j]=1;
		}
	}
}
void setunion(int bit_vec1[26],int bit_vec2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i]=bit_vec1[i]|bit_vec2[i];
	}
}

void setintersection(int bit_vec1[26],int bit_vec2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i]=bit_vec1[i]&bit_vec2[i];
	}
}

void setcomplement(char bit[26])
{
	for(int i=0;i<26;i++)
	{
		if(bit_vect[i]==0)
			result[i]=-1;
		else
			result[i]=0;
	}
}

void setdifference(int bit_vec1[26],int bit_vec2[26])
{
	setcomplement(bit_vec2);
	setintersection(bit_vec1,bit_vec2,result);
}

int main()
{
	int num1,num2;
	initializeSet();
	printf("Enter the number of elements in set1:\n"); 
	scanf("%d",&num1);
	//get user inputs to set1
	printf("Enter the set1 elements:");
	for(int i=0;i<num1;i++)
		scanf("%c",&set1[i]);
	//get user inputs to set2
	printf("Enter the number of elements in set2:\n");
	scanf("%d",&num2);
	printf("Enter the set2 elements:");
	for(int i=0;i<num2;i++)
		scanf("%c",&set2[i]);
return 0;
}	
