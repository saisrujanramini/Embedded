#include<stdio.h>
int modify(int **ptr){
	**ptr=3;
}
int sum(int a ,int b){
	return a+b;
}
int square(int a){
	return a*a;
}
int main()
{
	/*int size ,count=0,element;
	printf("enter the size of the array");
	scanf("%d",&size);
	int arr[size];
	int *ptr=arr;
	for(int i=0;i<size;i++){
		printf("enter the element of arr[%d]",i);
		scanf("%d",ptr+i);
	}
	for(int i=0;i<size;i++){
		count=0;
		for(int j=0;j<size;j++){
			if(i!=j){
				if((*(ptr+i))==(*(ptr+j)))
					count++;
				}
		}
			if (count<=0){
				element=*(ptr+i);
				break;}
		
		}
	printf("%d isd the first non repeated element",element);
	int var=5;
	ptr=&var;
	pptr=&ptr;
	printf("%d",var);
	modify(pptr);
	printf("%d",var);*/
	int (*ptr)(int)=&square;
	printf("%d",sum((*ptr)(5),5));
}
