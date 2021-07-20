#include<stdio.h>
void main()
{
int marks[3][4],highest[3],i,j;
for(i=0;i<3;i++)
{printf("Enter the marks of the students in subject %d:\n",(i+1));
for(j=0;j<4;j++)
{scanf("%d",&marks[i][j]);}
}
for(i=0;i<3;i++)
{highest[i]=marks[i][0];
for(j=1;j<4;j++)
{if(marks[i][j]>highest[i])
{highest[i]=marks[i][j];}
}
}
for(i=0;i<3;i++)
{printf("Highest marks in subject %d = %d\n",(i+1),highest[i]);}
}
