#include<stdio.h>
#include<math.h>
void main()
{
int x1,x2,y1,y2;
float d;
printf("Enter x1 and y1 for point 1: \n");
scanf("%d%d",&x1,&y1);
printf("Enter x2 and y2 for point 2: \n");
scanf("%d%d",&x2,&y2);
d = sqrt(pow((x2-x1),2) + pow((y2 -y1),2));
printf("The distance between the two points = %f",d);
}


