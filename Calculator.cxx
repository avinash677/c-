#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int pow(int, int);
int fact(int);
int main()
{
	int i,n;
	int n1,n2,total;
	float s;
	

	printf("\nSelect option:-\n");
	printf(" 1 - DIVISION  \n");
	printf(" 2 - MULTIPLICATION \n");
	printf(" 3 - ADD\n");
	printf(" 4 - SUBTRACTION \n");
	printf(" 5 - FACTORIAL\n");
	printf(" 6 - POWER\n");
    printf(" 7 - SQURE ROOT\n");
	printf(" 8 - QUBE ROOT\n");
	printf(" 9 - Exit\n");
while(1)
{	    
/*enter  option*/
printf("\nSelect no= ");
scanf("%d",&n);	

  switch(n)  
 {
  	case 3:
  	       printf("Enter any two no\n");
  	       scanf("%d%d",&n1,&n2);
  	       total=n1+n2;
  	       printf("%d + %d = %d",n1,n2,total);break;
  	       
 case 1:
  printf("Enter any two no\n");
  	       scanf("%d%d",&n1,&n2);
  	       total=n1/n2;
  	       printf("%d / %d = %d",n1,n2,total);break;
  	   
 case 2: 	       
  printf("Enter any two no\n");
  	       scanf("%d%d",&n1,&n2);
  	       total=n1*n2;
  	       printf("%d * %d = %d",n1,n2,total);break;
  
case 4:  	       	               	       	               
  printf("Enter any two no\n");
  	       scanf("%d%d",&n1,&n2);
  	       total=n1-n2;
  	       printf("%d - %d = %d",n1,n2,total);break;
  	       	
  case 5:
   printf("Enter any no\n");	
   scanf("%d",&n1);
  printf(" %d! = %d",n1,fact(n1));
   break;	
  	
  case 6:
  printf("Enter two no\n");	
   scanf("%d%d",&n1,&n2);
  printf(" %d^%d=%d",n1,n2,pow(n1,n2));
   break;	
    case 7:
     printf("Enter a no for Root:-\t");
     scanf("%d",&n1);
     s=sqrt(n1);
     printf("%d root is =  %.2f",n1,s);
   break;
  case 9:
  	
        exit(0);
  	} 
  	
	}
	return 0;
getch();
}


int pow(int x, int y)
{
	int p=1;
	while(y>0)
	{
		p=p*x;
		y--;
		}
	return p;
	}

int fact(int x)
{
	int t=1;
	while(x>0)
	{
	t=t*x;
	x--;
	}
return t;
}
