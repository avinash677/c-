#include<stdio.h>
#include<conio.h>
int fun(int);
void main()
{
	
	int d,m,y,a,r,r2,g;
	int y1,t,t2,i,sum=0,f,ft;
	
	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
int arr2[]={31,29,31,30,31,30,31,31,30,31,30,31};

	printf("Enter date month and year\n");
	scanf("%d%d%d",&d,&m,&a);
	printf("Entred date are here =\t");
	printf("%d\\%d\\%d",d,m,a);
	
	y=a%100;
	printf("\nyear :%d",y);
	r=(a-y)%400;
	r2=r/100;
	g=fun(r2);
	printf("\n%d sadi ka day",g);
	
// for year 	
	y1=y-1;
	t=y1/4+y1;
	printf(" \ntoatal in year%d\n",t);
	t2=t%7;
	printf(" \nafter 7 toatal in year\n%d",t2);
	
//for month
if(y%4==0)
{
for( i=0;i<m-1;i++)	
{

	sum+=arr2[i];
	}
	
}	
else
{
	for( i=0;i<m-1;i++)	
{
	
	sum+=arr[i];
	}
  
}

printf("\n%d date total\n",sum);

//total

f=g+t2+sum+d;
ft=f%7;
printf("\ntotal is here and no is %d\n",ft);

switch(ft)
{
case 0:printf("sunday");break;
case 1:printf("Monday");break;
case 2:printf("Tuesday");break;
case 3:printf("Wednesday");break;
case 4:printf("Thursday");break;
case 5:printf("Friday");break;
case 6:printf("Saturday");break;
	}
	
	
	
}
int fun(int v)
{
	switch(v)
	{
	    case 0:
		        return 0; break;
		  	case 1:
		        return 5; break;
		        
			case 2:
		        return 3; break;
		        
		     	case 3:
		        return 1; break;   
		        
		}
	
	}