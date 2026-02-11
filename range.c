#include<stdio.h>
int main()
{
	int i;
	int r1;
	int r2;
	printf("enter the start point \n");
	scanf("%d",&r1);
	printf("enter the end point \n");
	scanf("%d",&r2);
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
