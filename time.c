#include<stdio.h>
int minutes(int h,int m)
{
return (60*h)+m;
}
void main()
{
int a,b,result;
printf("\n Enter the number of hours and minutes ");
scanf("%d %d",&a,&b);
result=minutes(a,b);
printf("\n Total Number of Minutes: %d",result);
}
