#include<stdio.h>
int main(){
/*	int a,b,c;
	a=10;
	b=2;
	c=(a&b);
	printf("%d",c);*/
	/*char var=0x04;
	var= var|0x04;
	printf("%d\n",var);
	var|=0x01;
	printf("%d",var);*/
	/*char flag=0x0f;
	flag &=~0x02;*/

	/*
	//even odd using bitwise operators &|^
	int a;
	printf("enter the value to check:\n");
	scanf("%d",&a);
	printf("the given number is %d\n",a);
	//even or odd with and & operator 
	printf("checking the number using the bitwise operator AND &");
	if(a & 1==1){
		printf("the given number %d is  odd\n",a);}
	else{
		printf("the given number %d is  even\n",a);}
	//even or odd with or| operator
	printf("checking the number using bitwise OR |\n");
	if ((a|1)==a){
		printf("the number %d is odd\n",a);
	}
	else {
		printf("the given number %d is even\n",a);}
	//even or odd with xor^ operator
	printf("checking the number using bitwise XOR |\n");
	if ((a^1)==a-1){
		printf("the number %d is odd\n",a);
	}
	else {
		printf("the given number %d is even\n",a);}*/
	/*printf("%d",(++10));*/
	/*const char var='A';
	++var;
	printf("%c",var);*/
	/*int x=10;
	x+=(x++)+(++x)+x;
	printf("%d",x);*/
	/*int a=10,b=2,x=0;
	x=a+b*a+10/2*a;
	printf("%d",x);*/
	/*unsigned short var='B';
	var+=2;
	var++;
	printf("%c,%d",var,var);*/
	/*int x=((20||40)&&10);
	printf("%d",x);*/
	/*int x;
	x=(printf("AA")||printf("BB"));
	printf("%d",x);
	printf("\n");
	x=(printf("AA")&&printf("BB"));
	printf("%d",x);*/
	/*int inta=3,b=2;
	inta=inta==b==0;
	printf("%d%d",inta,b);*/
	/*int intvar=20,x;
	x=++intvar,intvar++,++intvar;
	printf("%d%d",intvar,x);*/
	/*int a=10,c;
	double b=5.6;
	c=a+b;
	printf("%d",c);*/
	/*int x;
	x=100,30,50;
	printf("%d",x);
	x=(100,30,50);
	printf("%d",x);*/
	/*int i=-1,j=-1,k=0,l=2,m;
	m=i++&&j++&&k++||l++;
	printf("%d%d%d%d%d",i,j,k,l,m);
	int var;
	var=++10;
	printf("%d",var);
	var=--10;
	printf("%d",var);*/
	/*char var,varinvert;
	printf("enter thr value:\n");
	scanf("%c",&var);
	printf("%b\n",var);
	varinvert=~var;
	printf("%08b\n",varinvert);*/
	/*int var,n;
	printf("enter the value of the var:\n");
	scanf("%d",&var);
	printf("enetr the bit need to be checked\n");
	scanf("%d",&n);
	if(((var>>n-1)&1)==1){
		printf("the %d bit in %d is set",n,var);
	}
	else{
		printf("the %d bit in %d is not set",n,var);}*/
	/*#define checkbit(a,b) ((a>>(b-1))&(1)?(1):(0))
	int a,b,var;
	var= checkbit(a,b);
	if(var==1){
		printf("the bit is set");*/
	/*int a,lower,upper,comb;
	printf("enter the 16-bit value:\n");
	scanf("%d",&a);
	printf("0x%04x\n",a);
	lower=a&0x00FF;
	upper=a&0xFF00;
	printf("0x%04x\n",(lower<<8)|(upper>>8));
	#define bitswapping16(n)(((n&0x00ff)<<8)|((n&0xff00)>>8))
	int n,swapped;
	printf("enter the value to be swapped:\n");
	scanf("%d",&n);
	printf("0x%04x\n",n);
	swapped= bitswapping16(n);*/
	/*int x,mask=1,count=0;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("%d",x);
	while(x!=0){
		count=x&mask?count+1:count;
	x=x>>1;
	}
	printf("%d",count);*/
	

}
