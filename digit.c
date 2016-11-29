 #include<stdio.h>

//#include<conio.h>
	int main()
		{
			int n,i=10,a,rem=0,count=0;
			printf("Enter a number");
			scanf("%d",&n);
			
			for (a=1;n>0;a++)
			{			
			 n/=10;
                         count++;
				
			
				
			}
			printf("%d",count);	
	return 0;
		}
