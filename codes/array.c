#include<stdio.h>
#include<limits.h>
/*void printarr(int q[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("the %d element of array :%d\n",i,q[i]);
	}
}
int main(){
	//reading the elements (user defined)
	int j,i,size,temp,max,min,count,sum,n;
	printf("enter the size of the array:");
	scanf("%d",&size);
	int arr[size],arr2[n];
	for (i=0;i<size;i++){
		printf("enetr the %d element of the array",i);
		scanf("%d",&arr[i]);
	}
	n=sizeof(arr)/sizeof(arr[0]);*/
	/*//reversing
	for (i=0,j=size-1;i<j;i++,j--){
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}//summing
	for (i=0;i<size;i++){
		sum=sum+arr[i];}
	printf("%d",sum);
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		arr2[i]=arr[i];
	}
	printf("the copied array arr2 is:\n");
	printarr(arr2,n);
	for (i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if (i==j){
				continue;
			}
			else{
			if (arr[i]==arr[j]){
				count++;}
				}
		}
		}
	count=count/2;
	printf("%d\n",count);
	//unfinished frequency
	for (i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if (arr[i]==arr[j]){
				count++;}
				}
		
		printf("the frequency of %d is %d\n",arr[i],count);
		count=0;
		}*//*
	min=max=arr[0];
	for(i=0;i<size;i++){
			if(arr[i]>max){
				max=arr[i];}
			if(arr[i]<min){
				min=arr[i];}
	}
			printf("%d%d",max,min);*/
	/*int p,arreven[10],arrodd[10];
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			arreven[i]=arr[i];}
		else{
			arrodd[i]=arr[i];}
	}
	printf("the even array :");
	printarr(arreven,10);
	printf("the odd array :");
	printarr(arrodd,10);*/
	/*count=0;
	for(i=0;i<size;i++){
		temp=arr[i];
		for(j=0;j<size;j++){
			if(temp==arr[j]){
				count++;}
		}
		printf("frequency of %d in the array is %d\n",arr[i],count);
		count=0;
	}*/
	/*for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;}}
	}printarr(arr,size);*/
	//deletiion of desired position
	/*int pos;
	printf("enter the position of the array to be deleted:\n");
	scanf("%d",&pos);
	for(i=pos;i<size;i++){
		arr[i]=arr[i +1];}
	size--;
	printarr(arr,size);*/
	/*int high,high2;
	for(i=0;i<size;i++){
		if(arr[i]>high){
			high2=high;
			high=arr[i];}
		else if (arr[i]>high2  && arr[i]<high){
			high2=arr[i];}
	}
	printf("%d",high);		
	printf("%d",high2);		
	int low=INT_MAX,low2;
	for(i=0;i<size;i++){
		if(arr[i]<low){
			low2=low;
			low=arr[i];}
		else if (arr[i]<low2  && arr[i]!=low){
			low2=arr[i];}
	}
	printf("%d",low);		
	printf("%d",low2);
	int pos,new;
	printf("enetr the position to inset the new element \n:");
	scanf("%d",&pos);
	printf("new elemen:");
	scanf("%d",&new);
	printf("%d%d",pos,new);
	size=size+1;
	for (i=pos;i<size;i++){
		arr[i+1]=arr[i];
				}
	arr[pos]=new;
	printarr(arr,size);*/
	//2D array
void print2darray(int row,int coloumn, int arr[row][coloumn]){
	for(int i=0;i<row;i++){
		for(int j=0;j<coloumn;j++){
			printf("%d",arr[i][j]);
		}printf("\n");
	}
}
/*
int main(){
	//addition of matrix
	for(i=0;i<rs;i++){
		for(j=0;j<cs;j++){
			arr3[i][j]=arr[i][j]+arr2[i][j];
		}
	}
	print2darray(rs,cs,arr);
	printf("\n");
	print2darray(rs,cs,arr2);
	printf("\n");
	print2darray(rs,cs,arr3);
	printf("\n");
	int rs2,cs2,rs,cs,i,j;
	printf("enter the number od rows and coloumns\n");
	scanf("%d%d",&rs,&cs);
	printf("%d%d\n",rs,cs);
	int arr[rs][cs];
	printf("enter the elements of the array row wise\n");
	for(i=0;i<rs;i++){
		printf("%d row\n",i);
		for(j=0;j<cs;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	print2darray(rs,cs,arr);
	printf("enter the size of the 2nd array\n");
	scanf("%d%d",&rs2,&cs2);
	int arr2[rs2][cs2];
	printf("enter the elements of the 2nd array row wise\n");
	for(i=0;i<rs2;i++){
		printf("%d row\n",i);
		for(j=0;j<cs2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	print2darray(rs2,cs2,arr2);*/


int main(){
	int rs1,cs1,rs2,cs2;
	printf("enter the size rows and coloumns of 1st array\n");
	scanf("%d%d",&rs1,&cs1);
	printf("%d%d",rs1,cs1);
	int arr1[rs1][cs1];
	printf("enter the values of first array :\n");
	for(int i=0;i<rs1;i++){
		printf("enter the %d element of 1st row:\n",i);
		for(int j=0;j<cs1;j++){
			printf("enter the elements of %d row %d coloumn:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	print2darray(rs1,cs1,arr1);
	/*printf("the size (number of) rows in second array will be equal top the coloumn sof 1st array s per the condition of array multiplication");
	printf("enter the coloumns of 2nd array\n");
	scanf("%d",&cs2);
	rs2=cs1;
	int arr2[rs2][cs2];
	printf("enter the elements of 2nd array\n");
	for(int i=0;i<rs2;i++){
		for(int j=0;j<cs2;j++){
			printf("enter the element in %d row %d coloumn:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	print2darray(rs2,cs2,arr2);
	//multiplication
	int arr3[rs1][cs2];
	for(int i=0;i<rs1;i++){
		for(int j=0;j<cs2;j++){
			arr3[i][j]=0;
			for(int k=0;k<cs1;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	print2darray(rs1,cs2,arr3);*/
	for(int i=0;i<cs1;i++){
		for(int j=0;j<rs1;j++){
			printf("%d",arr1[j][i]);
		}printf("\n");
	}
}
