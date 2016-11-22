/*
Student Name : Swaumya Pokharel
Roll No      : 25
Subject      : Programming Fundamental
Program      : Write a program to to generate first n even terms and find their sum
Lab no       : 16
Date         : 22nd November 2016
*/

		#include<stdio.h>
			
				int main()
				{
				
					int n,i,sumofeven=0,sumofodd=0;
						printf("Enter any number\n");
						scanf("%d",&n); 
						
						for(i=1;i<=n;i++)
					{
					 if (i%2==0)
					 {
						sumofeven +=i;
						}
						else
						{
							sumofodd +=i;
						}
					}
					printf("sum of even number %d",sumofeven);
					printf("sum of odd number %d",sumofodd); 
							
						
				    return 0;
				    }    
				        
							
