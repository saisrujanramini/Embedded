#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,d=0,c;
	printf("Enter the number you want to check=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			d++;
		}
	}
	if(d>2){
		printf("the given number %d is not a prime\n",n);}
	else{
		printf("the given number %d is a prime number\n",n);}
	
	printf("end of operation");
}
