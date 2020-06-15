#include<stdio.h>
void main()
{
	int num,i,j;
	printf("Enter the number..\n");
	scanf("%d",&num);
	printf("Just printing binary of number..\n");
	for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	for(i=0,j=31;i<j;i++,j--)
	{
		if(num>>i&1!=num>>j&1)
		{
			num=num ^1<<i;
			num=num^1<<j;
		}
	}
	printf("\n");
	for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");
}