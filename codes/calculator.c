#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first number=");
	scanf("%d",&a);
	printf("Enter the Second number=");
	scanf("%d",&b);
	printf("Enter the choice of the operation\n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISSION\n 5.MODULUS\n");
	scanf("%d",&c);
	switch(c){
		case 1: printf("ADDITION OF GIVEN INPUT=%d",a+b);
			break;
		case 2: printf("SUBTRACTION OF GIVEN INPUT=%d",a-b);
			break;
		case 3: printf("MULTIPLICATION OF GIVEN INPUT=%d",a*b);
			break;
		case 4: printf("DIVISSION OF GIVEN INPUT=%d",a/b);
			break;
		case 5: printf("MODULUS OF GIVEN INPUT=%d",a%b);
			break;
		default : printf("incalid\n");
			}
	printf("operation complete ");
}

