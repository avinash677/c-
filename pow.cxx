#include<stdio.h>
int pow(int,int);
int main()
{
	int x,y;
	printf("enter any two no\n");
	scanf("%d%d",&x,&y);
	printf("x =%d  and y =%d \n",x,y);
printf("power of %d^%d is %d ",x,y,pow(x,y));
return 0;
}

int pow(int x,int y)
{
	int p=1;
	while(y>0)
	{
		p=p*x;
		y--;
		
		}
		return p;
	
	}