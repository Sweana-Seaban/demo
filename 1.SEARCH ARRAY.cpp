/*1.search array*/
#include<stdio.h>
void search(int a[],int *size,int *element)
{
	
	for(i=0;i<(*size);i++)
	{
		if(a[i]==(*element))
		{
			printf("%d is found in the array at position %d",*element,i+1);
			break;	
		}
	}
	if(i==(*size))
	printf("\n%d is not found in the array",*element);
}
int main()
{
	int array[10],item,n,i;
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element %d : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched : ");
	scanf("%d",&item);
	search(array,&n,&item);
	return 0;
}
