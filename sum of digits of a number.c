#include<stdio.h>
void main()
{
int m,n,sum=0;
printf("Enter the number:\n");
scanf("%d",&n);
while(n>0)
{m=n%10;
sum=sum+m;
n/=10;}
printf("Sum= %d",sum);
}
