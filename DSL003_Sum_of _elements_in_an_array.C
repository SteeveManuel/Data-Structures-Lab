#include<stdio.h>
int main()
{	int i,size,sum=0,array[100];
	printf("\n\n\n Enter the size of the array  \t:\t");
	scanf("%d",&size);
	printf("\n\n");
	for(i=0;i<size;i++)
	{	printf("\n Enter the element array_[%d] \t:\t" ,i);
		scanf("%d",&array[i]);
	}
	printf("\n\n The array you have entered is \t:\t");
	for(i=0;i<size;i++)
	{	printf("%d\t",array[i]);
	}
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	}
	printf("\n\n The sum of element of the given array is \t:\t%d",sum);
	return(0);
}