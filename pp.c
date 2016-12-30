#include<stdio.h>
	int main()
	{
		int i,j,a;
		for(a=1;a<=2;a++)
		{
		for(i=1;i<=10;i++)
		{
			
			for(j=1;j<=i;j++)
			{
				  if(j==1||j==i||i==10)
				  { printf("*");
				  }
				  else 
				  { printf(" ");
				  }
				
		}	
		printf("\n");
		
	}
}
		printf("*\n");
		printf("*\n");
		printf("*\n");
		printf("*\n");
	return 0;
	}

	
