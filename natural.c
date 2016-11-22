/*
Student Name : Swaumya Pokharel
Roll No      : 25
Subject      : Programming Fundamental
Program      : Write a program to find th sumofn natural numbers
Lab no       : 16
Date         : 22nd November 2016
*/




		#include<stdio.h>
		
			int main ()
			{
			
				int i,n,sum=0;
					printf("Enter any number\n");
					scanf("%d",&n);
					
					for(i=1;i<=n;i++)
					{
						sum += i;
					}
					printf("\nThe sum of numbers is%d",sum);
			return 0;
		}		
