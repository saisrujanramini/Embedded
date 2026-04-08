#include<stdio.h>
#include<string.h>
/*int main(){
	//pointers
	int a=10;
	int *apoint;
	apoint=&a;
	printf("%p\n",&a);
	printf("address of pointer %p\n",&apoint);
	printf("addres of variable using pointer %p\n",apoint);
	printf("accessing the value of variable using the pointer %d\n",*apoint);
	printf("size of variable %lu\n size of pointer %lu\n",sizeof(a),sizeof(apoint));
	printf("size of pointer variable %zu\n size of vaalues dereferenced by it %zu\n",sizeof(apoint),sizeof(*apoint));
	//artametics
	printf("value of pointer %p\n",apoint);
	apoint++;
	printf("value of pointer after the incrementation %p\n",apoint);
	apoint=apoint-2;
	printf("value of pointer after subtraction%p\n",apoint);
	//array pointers 
	int size,*arrpoint;
	int arr1[size];
	printf("enter  the size");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("enter the %d valueof the array",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size;i++){
		arrpoint=&arr1[i];
		printf("value of the %d element in  arrayis %d\n",i,*arrpoint);
		printf("value of the pointer (address in it) %p\n",arrpoint);
	}
	for(int i=0;i<size;i++){
		printf("value of the %d element in array %d\n",i,*(arr1+i));
		printf("value of the pointer (address in it) %p\n",arr1+i);
	}
	int ar[3][4]={
			{1,2,3,4},
			{6,7,8,9},
			{11,12,14,15}
			};
	int (*ptr)[3][4];
	p=ar;
	ptr=&ar;
	printf("p=%p,ptr=%p\n",p,ptr);
	printf("*p=%d,*ptr=%p\n",*p,*ptr);
	printf("size of p=%zu,size of ptr=%zu\n",sizeof(p),sizeof(ptr));
	printf("size of *p=%zu,size of *ptr=%zu\n",sizeof(*p),sizeof(*ptr));
	ptr=&ar;
	printf("ptr=%p\n",ptr);
	printf("size of ptr=%zu\n",sizeof(ptr));
	for(int i=0;i<3;i++){
		printf("elements in the %d row\n",i);
		for(int j=0;j<4;j++){
			printf("element in the %d row %d coloumn =  %d \nand the addres of it is =%p\n",i,j,*(*(ar+i)+j),(*(ar+i)+j);
		}
	}
	int arr[2][2][3]={
		{{1,2,3,},{4,5,6,}},
		{{7,8,9},{10,11,12}}
				};
	printf("%p",arr);
	int (*ptr)[2][2][3];
	ptr=&arr;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				printf("the element %d in the %d row %d coloumn is %d\n",k,i,j,*(*(*(*ptr+i)+j)+k));}
		}
	}
	//pointers to functins
	//cal,l by value
	void value(int x,int y) {
		x=30;
		y=40;
		printf("x=%d,y=%d\n",x,y);
	}
	int a,b;
	a=10;
	b=20;
	printf("a=%d,b=%d\n",a,b);
	value(a,b);
	printf("a=%d,b=%d\n",a,b);
	//call by reference
	void reference(int *x,int *y){
		*x=20;
		*y=90;
		printf("x=%d,y=%d\n",*x,*y);
	}
	int a=10,b=52;
	printf("a=%d,b=%d\n",a,b);
	reference(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	//returning multipul values
	void returnmulti(int a,int b,int *pa,int *pp,int *ps){
		*pa=a+b;
		*pp=a*b;
		*ps=a-b;
	}
	int x,y,sum,product,difference;
	x=10;
	y=20;
	returnmulti(x,y,&sum,&product,&difference);
	printf("sum=%d\nproduct=%d\ndifference=%d",sum,product,difference);*/
	int *rtnpoint(int *p,int b){
		p=p+b;
		return p;}
	int pass1d(int *a,int b){
		printf("inside the function");
		for(int i=0;i<b;i++){
			printf("%p",a+i);
		}printf("\n");
	}
int swap(int i,int j){
	i=i+j;
	j=i-j;
	i=i-j;
	printf("%d,%d",i,j);
}
float add(float i,int j){
	int added=i+j;
	return added;
}
float sub(float i,int j){
	int subed=i-j;
	return subed;
}
float mul(float i,int j){
	int muled=i*j;
	return muled;
}
float div(float i,int j){
	int dived=i/j;
	return dived;
}
int swap1(int *i,int *j){
	*i=*i+*j;
	*j=*i-*j;
	*i=*i-*j;
	printf("%d,%d",*i,*j);}
unsigned int len (char *a){
	int count=0;
	while(*a!='\0'){
		count++;
		a++;}
	printf("%d",count);
	return count;
}
int arrmm(int *a,int b){
	int min=0,max=0;
	for(int i=0;i<b;i++){
		for(int j=0;i<b;j++){
			if(*a+i>*a+j){
				max=*a+i;}
			else
				max=*a+j;}
	}
}

int main(){
	int a=1,b=2,s=5;
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	/*int n=5,*ptr;
	ptr=rtnpoint(arr,n);
	printf("value of arr=%p\nvalue of ptr=%p\n,value of *ptr=%d\n",arr,ptr,*ptr);
	pass1d(arr,s);
	printf("in the main loop:\n");
	for(int i=0;i<s;i++)
		printf("%d",arr[i]);
	int a=1,b=2;
	printf("%d,%d\n",a,b);
	swap(&a,&b);
	char sru[]="happy birthday";
	printf("%zu",strlen(sru));
	printf("%p",sru);
	char *p=sru;
	len(p);
	printf("add of function is %p\n",add);
	int (*funpoint)(int,int);
	funpoint=add;
	printf("the address of the function using the pointer function: %p\n",funpoint);
	swap(funpoint(a,b),s);
	int a=10;
	float b=20;
	char *operations[4]={"add","sub","mul","div"};
	float (*functions[])(float,int)={add,sub,mul,div};
	for(int i=0;i<4;i++){
		printf("%s \n%f\n",operations[i],functions[i](b,a));
	}*/
	printf("%d,%d\n",*p++,*++p);
	printf("%d\n",*p);
	printf("%d\n",a);
	printf("%d\n,%d,%d,%d,%d",a,++a,a++,++a,++a);

}
