#include<stdio.h>  
int main(){    
int num,rem,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&num);    
temp = num;    
while(num>0){    
rem=num%10;    
sum = sum+(rem*rem*rem);    
num=num/10;    
}  
switch(num){
case temp == sum:
printf("armstrong  number ");
default:    
printf("not armstrong number");
}
return 0;  
}   