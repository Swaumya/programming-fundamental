 #include<stdio.h>
//#include<conio.h>

	int main()
		{
		int n,i,a;
		printf("Enter a number");
		scanf("%d",&n);		
		i=n %10;
		a=n/10;
		printf("The last digit is %d",i);
		printf("Without last digit is %d",a);		
		return 0;
			
		}
