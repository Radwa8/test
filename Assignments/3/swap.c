#include <stdio.h>
int main(void){
	int x,y;
	printf("enter the first number");
	scanf("%d",&x);
	printf("enter the second number");
	scanf("%d",&y);
	printf("before swapping X=%d Y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping X=%d Y=%d",x,y);
}