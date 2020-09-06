#include<stdio.h>
#include<conio.h>
float watch(float,float);
void main()
{
	
	float H,M,d=0;
	
	clrscr();
	while(1)
	{
	printf("\nEnter Hour and Minute:\n");
	scanf("%f%f",&H,&M);
	d=watch(H,M);
	printf("%.fH:%.fM =%.2f Degree\n",H,M,d);
	
	getch();
}
}
float watch(float h,float m)
{
	
	float res;
	if(m/5>h)
	{
		res=(m/5-h)*30-m/2;
		return res;
	}
	else
	{
	 res=(h-m/5)*30+m/2;
		return res;
	
	}
	

}