		
		
#include<stdio.h>
//#include<conio.h>
			
int main()
{
int n, remainder,div;
printf("Enter a number: %d");
scanf("%d",&n);
printf("Enter the divisor");
scanf("%d",&div);
remainder= n%div;
printf("The remainder is %d",remainder); 										
return 0;

}
