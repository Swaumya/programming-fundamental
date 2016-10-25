/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to print sum of 10 num
Date        :24th October 2016
*/
      
      
      #include<stdio.h>
      #include<math.h>
      
        int main()
        {
        int i=0,n,sum=0;
        
        printf("Enter any number:\n");
        scanf("%d",&n);
        do
        {
		sum+=i;
		printf("sum is:%d",sum);
		i++;
        } while(i<=n);
        		printf("sum is:%d",sum);
        
        return  0;
        
	}
        
        
