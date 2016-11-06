/*
Student Name : Swaumya Pokharel
Program      : to check whether  the given num  is palindrome or not
 Roll no     : 25
 Lab no      :
 date        :
 */
 
		#include<stdio.h>
		
			int main ()
			{
			
			 int n=0,i=0,a=0,b=0;
			 printf("Enter any num:\n");
			 scanf("%d",&n);
			 
			 b=n;
			 
			 while (n!=0)
			 {
				
				 
			 a=n%10;
			 
			  
			 i=i*10+a;
			  
			  
			 n=n/10;
			 
			 
			 }
			 
			 if( b==i)
			 {
			 printf("%d is palindrome ",b);
			 }
			 else
			 {
			 printf("%d is not palindrome",b);
			 }
			 return 0;
			 }
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			 
			
 
 
 
 
 
 
 
 
 
