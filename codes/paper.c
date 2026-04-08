#include<stdio.h>
#include<string.h>
/*int main()
{
int count=0;
char str1[20],str2[20];
char *pstr1,*pstr2;
scanf("%s",str1);
scanf("%s",str2);
pstr1=str1;
pstr2=str2;
if(strlen(str1)!=strlen(str2))
	printf("the given strings size do not match and are not anagram\n");
else{
	for(int i=0;i<strlen(str1);i++){
		for(int j=0;j<strlen(str1);j++){
			if(*(pstr1+i) == *(pstr2+j)){
				printf("%c found in both strings\n",*(pstr1+i));
				count++;
			}		
	}

}
}
if (count==strlen(str1)){
	printf("the given strings are anagram\n");
}
else
	printf("not anagrams");
}
int fibanocci(int n);
int main(){
	int nterms;
	printf("enter the number of terms in the fibanocci:\n");
	scanf("%d",&nterms);
	for(int i=0;i<nterms;i++){
	printf("%d\t",fibanocci(i));}

}

int fibanocci(int n){
	int fib;
	if (n==0)
		return 0;
	if(n==1)
		return 1;
	fib=fibanocci(n-1)+fibanocci(n-2);
	return fib;
}
int main(){
	int last,i,j,n,k;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the value of k\n");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}printf("\n");
	for(i=0;i<k;i++){
		last=arr[n-1];
		for(j=n-1;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=last;
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
int main()
{
	int i,j,first,n,k;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the value of k\n");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}printf("\n");
	for(i=0;i<k;i++){
		first=arr[0];
		for(j=0;j<n;j++){
			arr[j]=arr[j+1];
		}
		arr[n-1]=first;
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}printf("\n");


}
int main ()
{	int k,j,i,size;
	char buf;
	char str[20];
	char *pstr=str;
	printf("enter the string:\n");
	scanf("%s",str);
	printf("printing the given string:\n%s\n",str);
	size = strlen(str);
	for (i=0;i<size;i++){
		buf= (*(pstr+i));
		for(j=0;j<size;j++){
			if(i == j){
				printf("the i nd j are equal skiping the statments below \n");
				continue;}
			if((*(pstr+j))==buf){
				printf("element found:%c\n",(*(pstr+j)));
				for(k=j;(*(pstr+k))!='\0';k++){
					*(pstr+k)= *(pstr+(k+1));
					j--;
				}
			}
		}
	}
	printf("%s\n",str);
}
int main()
{	int size,i,j,k;
	int digitcount=0,alphacount=0,symbolcount=0;
	printf("enter the size of the string:\n");
	scanf("%d",&size);
	char *pstr,str[size];
	pstr=str;
	printf("enter the string:\n");
	scanf("%s",str);
	printf("%s",str);
	for(i=0;i<size;i++){
		printf("%c\n",*(pstr+i));
		if(*(pstr+i)>='0' && *(pstr+i)<='9')
			digitcount++;
		else if(*(pstr+i)>='a' && *(pstr+i)<='z')
			alphacount++;
		else
			symbolcount++;
	}
	printf("number od digits:\n%d\nnumber of alphabets:\n%d\nnumber of symbols:\n%d\n",digitcount,alphacount,symbolcount);
}*/
int main(){
	int i,j,size1,size2;	
	printf("enter the size of the both  strings:\n");
	scanf("%d%d",&size1,&size2);
	char *pstr1,str1[size1];
	char *pstr2,str2[size2];
	pstr1=str1;
	pstr2=str2;
	printf("enter the first string:\n");
	scanf("%s",str1);
	printf("%s",str1);
	printf("enter the second string:\n");
	scanf("%s",str2);
	printf("%s",str2);
	strcpy(str1,str2);
	printf("%s",str1);


}
