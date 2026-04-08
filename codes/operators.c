#include<stdio.h>
int main()
{
	
	int A,B;
	printf("input A=\n");
	scanf("%d",&A);
	printf("input B=\n");
	scanf("%d",&B);
	printf("A=%d\n",A);
	printf("B=%d\n",B);
	printf("arthametic operaations");
	printf("addition A+b=%d\n",A+B);
	printf("subtraction A-B=%d\n",A-B);
	printf("multiplication A*B=%d\n",A*B);
	printf("division A/B=%d\n",A/B);

	printf("relational  operatiors\n ");
	if(A==B){
		printf("A=b\n");
	}
	else{
		printf("A not equal to B\n");
	}
	if(A<B){
		printf("A less than B\n");
	}
	else {
		printf("A greater than B\n");
	}
	if(A>=B){
		printf("A>=b\n");
	}
	else{
		printf("A not equal to or greater than B\n");
	}

	if(A<=B){

		printf("A<=B\n");
	}
	else{
		printf("A not equal to or less than  B\n");
	}

	if(A==B){
		printf("A=B\n");
	}
	else{
		printf("A not equal to B\n");
	}
	A=++B;
	printf("preincrement of B and assigned to A A=++B then:\n");
	printf("A=%d\n",A);
	printf("B=%d\n",B);
	B=A--;
	printf("postdecrement of A and assigned to B B=A--:\n");
	printf("A=%d\n",A);
	printf("B=%d\n",B);	
}
