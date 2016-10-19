/*
Student Name : Swaumya Pokharel
Subject      : Programming Fundaental
Roll         :
Lab.no       :
Program      : Write a program to swap two numbers
Date         :19th October
*/
	  
		
		#include<stdio.h>
		
		
			int main()
			{
					int a,b,temp;
					printf("Enter the first number:\n");
					scanf("%d",&a);
					printf("Enter the second number:\n");
					scanf("%d",&b); 
					printf("Before swap %d %d :\n",a,b);
					temp=a;
					a=b;
					b=temp;
					
					printf("the value after swap=%d %d",a,b);
					return 0;
					
					}
					
