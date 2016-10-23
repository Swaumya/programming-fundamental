/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to print simple calculator
Date        :21st October 2016
*/



                
                
                #include<stdio.h>
                
                
                int main()
                {
                  int a,b,c;
                  char operator;
                  
                  printf("Enter (+,-,*,/) the operation you want:\n");
                  scanf("%c",&operator);
                
                  
                  printf("Enter the first number:\n");
                  scanf("%d",&a);
                  printf("Enter the second number:\n");
                  scanf("%d",&b);
                  
                  
                  switch(operator)
                  {
                  case '+':
						  c=a+b;
						  printf("sum of the numbers:%d",c);
						  break;
                  
                  case '-':
						  c=a-b;
						  printf("difference of the numbers:%d",c);
						  break;
						  
				case '*':
				        c=a*b;
				        printf("Multiplication of two numbers:%d",c);
				        break;
				case '/':
				        c=a/b;
				        printf("Division of two numbers:%d",c);
				        break;        	  
			
                  
				default:
				  printf("Invalid input:\n");
				  }
	return 0	;		
  }
                  
                  
