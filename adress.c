/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to print your name 10 times
Date        :24th October 2016
*/
      
      
      #include<stdio.h>
        
        int main()
        {
        
        int i,age;
        char name[20],adress[20],gender[20];
        
        printf("Enter your name:\n");
        scanf("%s",&name);
        
        printf("Enter your age:\n");
        scanf("%d",&age);
        
        printf("Enter your address :\n");
        scanf("%s",&adress);
        
        printf("Enter your gender:\n");
        scanf("%s",&gender);
        
  
			for(i=1;i<=5;i++)
			{
			printf("\nName:%s",name);
			
			printf("\nAge:%d",age);	
			
			printf("\nAdress:%s",adress);
			
			printf("\nGender:%s",gender);
			 }
			 return 0;
			 }
