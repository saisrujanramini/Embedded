#include<stdio.h>
#include<math.h>
void main(){
	int i,a=0,b=1,c,n;
	printf("Enter the numbber of elements you want in the series");
	scanf("%d",&n);
		printf("%d,",a);
		printf("%d,",b);
	for(i=0;i<=n;i++){
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
		}
}
