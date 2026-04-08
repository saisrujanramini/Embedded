#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the value of aabd b=\n");
	scanf("%d%d",&a,&b);
	printf("with format specifier d %d\n",a);
	printf("with format specifier i %i\n",b);
	printf("hexadecimal pre defined value c\n");
	c=0xf0b2;
	printf("printing c, a hexadecimal value using the format specifier x%x\n",c);
	printf("printing c, a hexadecimal value using the format specifier p%p\n",c);

}
