/*Program to print Inverted half pyramid using *

* * * * *
* * * *
* * * 
* *
*
AUTHOR:JINJU RAJU
DATE:27/02/19*/
#include<stdio.h>
void main()
{ 
int x,y,limit;
printf("enter the limit");
scanf("%d",&limit);
for(x=1;x<=limit;x++)
	{
	for(y=limit;y>=x;y--)
		{
		printf("*\t",y);
		}
	printf("\n");
	}
}
