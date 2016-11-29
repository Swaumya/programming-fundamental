 #include<stdio.h>

//#include<conio.h>
	int main()
		{
			int n,a,sum=0,rem=0,reminder=0;
			printf("Enter a number");
			scanf("%d",&n);
			reminder=n%10;
			for (a=0;n!=0;a++)
			{			
			 
				rem =n%10;
				sum=sum+rem;
				n/=10;	

				/*count++;
				 if (count==1)
					{ 
					printf("The Last digit is: %d \n",rem); }
				if (n==0)
					{
					printf("The first digit is: %d \n",rem);	
					}
*/	
				
			}

			printf("The count is %d",a);	
			printf("Sum is :%d",sum);
			printf("Last No is: %d",reminder);
			printf("first no is :%d",rem);
			
	return 0;
		}
