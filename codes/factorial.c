#include<stdio.h>
unsigned long long factorial(int n){
	int i,p;
	p=n;
	for(i=1;i<=(p-1);i++){
		n=n*(p-i);}
	printf("%d",n);}
int  main ()
{	int n;
	printf("enter the numbr");
	scanf("%d",&n);
	factorial(n);
}
