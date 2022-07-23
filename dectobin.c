#include <stdio.h>
int main(){
	long long bin = 0;
	long long dec;
	long long hex=0;
	int rem;
	int place = 1;
	printf("Please Enter a decimal number:");
	scanf("%lld",&dec);
	while(dec > 0){
        rem = dec % 2;
		hex = hex + rem * place;
        bin=(rem * place) + bin;
		dec /= 2;
        place *= 10;
    }
printf("hexadecimal output is : %lX",hex);
printf("binary output is : %d",bin);
		
	
}