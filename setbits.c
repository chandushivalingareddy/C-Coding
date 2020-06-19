include<stdio.h>
int find_set_bits(int);

int main()
{
int num ;

printf("Enter the Number Limit...\n");
scanf("%d",&num);
printf("Total No set bits in Given limit is... = %d\n",find_set_bits(num));
}

int find_set_bits(int num)
{
int i ,j, count = 0;

for(i = 1; i <= num ; i++)
{
for(j = 31; j >=0; j--)
{
if((i>>j) & 1)
count ++;
}
}
return count;
}