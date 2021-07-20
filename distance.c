#include<stdio.h>
#include<math.h>
void main()
{
int x1,x2,y1,y2;
float d;
printf("enter x1,x2,y1,y2 values: \n ");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
d = sqrt(pow((x2-x1),2) + pow((y2 -y1),2));
printf("the distance between the two points = %f",d);
}

