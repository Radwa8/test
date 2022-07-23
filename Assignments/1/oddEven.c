#include <stdio.h>
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	if (number & 1 ){
		
		printf("The number is odd");
	}
	else{
		printf("the number is Even");
	}
}