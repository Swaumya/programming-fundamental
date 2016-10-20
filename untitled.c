/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to use of assignment of operator
Date        :20th October 2016
*/

		
		#include<stdio.h>
		
			int main()
			{
					int a,b;
					printf("Enter the first number:\n");
					scanf("%d",&a);
					printf("Enter the second number:\n");
					scanf("%d",&b);
					printf("The use of +=:\n");
					printf("%d \n ",a+=b);
					
					printf("The use of -=:\n");
					printf("%d\n",a-=b);
					
					printf("The use of *=:\n");
					printf("%d\n",a*=b);
					
					printf("The use of /=:\n");
					printf("%d\n",a/=b);
					
					printf("The use of %=:\n");
					printf("%d\n",a%=b);
				
					return 0;
					
					}
					
					
