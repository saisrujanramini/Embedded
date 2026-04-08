#include<stdio.h>
int main(){
	int a,b;
	printf("entr the values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("swapping using arthimetic operations:\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d \n,b=%d\n",a,b);
	printf("swapping the values again to the initial values using the bitwise xor operation:\n");
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d, b=%d\n",a,b);
}
