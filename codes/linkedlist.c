#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int length(struct node *head){
	if (head == NULL)
		return 0;
	return 1+length(head->next);
}
int sum(struct node * head){
	int sums=0;
	if(head==NULL)
		return 0;
	sums=head->data+sum(head->next);
	return sums;
}
void printing(struct node *head){
	if (head==NULL){
		return;
	}
	printf("%d\n",head->data);
	printing(head->next);

}

void revprint(struct node *head){
	if(head==NULL)
		return;
	revprint(head->next);
	printf("%d",head->data);
}

struct node *reversing(struct node *head){
	if(head==NULL||head->next==NULL)
		return head;
	struct node *newhead=reversing(head->next);
	struct node *front=head->next;
	front->next=head;;
	head->next=NULL;
	return newhead;
}

struct node *lastnode(struct node*head,int data)
{
	if (head==NULL){
		struct node* newnode=malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=NULL;
		return newnode;
	}
	head->next=lastnode(head->next,data);
	return head;
}
struct node* find(struct node *head,int sdata){
	if(head==NULL)
		return NULL;
	if(head->data==sdata){
		printf("element fount");
		return head;
	}
	find(head->next,sdata);
}
struct node *head;
void maxmin(struct node *head){
	int min=head->data;
	int max=head->data;
	struct node *ptemp=head;
	while(ptemp!=0){
		if (ptemp->data < min)
			min= ptemp->data;
		if (ptemp->data > max)
			max= ptemp->data;
		ptemp=ptemp->next;
	}
	printf("min =%d\nmax= %d",min,max);
}
void occurrence(struct node*head){
	int check,count=0;
	printf("enetr the number you want to ckeck for occurrence");
	scanf("%d",&check);
	struct node *ptemp=head;
	while(ptemp !=0){
		if (check==ptemp->data)
			count++;
		ptemp=ptemp->next;
	}
	printf("the value %d has occured %d times",check,count);
}
int main(){
/*	int choice=1;
	struct node *add,*temp;
	while(choice){
		add=(struct node *)malloc(sizeof (struct node));
		printf("enetr the value of the data node");
		scanf("%d",&add->data);
		add->next=0;
		if (head==0){
			head=temp=add;
		}
		else{
			temp->next=add;
			temp=add;
		}
	printf("enter 1 if u want to add node or enter 0 to exit");
	scanf("%d",&choice);
	}
	//printing
	struct node *ptemp=head;
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}
	// insertion at the end
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the data needed to be initialised in the new first node:\n");
	scanf("%d",& newnode->data);
	newnode->next=head;
	head=newnode;
	ptemp=head;
	//printing
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}
	ptemp=head;
	struct node *endnode;
	endnode=(struct node *)malloc(sizeof(struct node));
	endnode->data=5;
	while(ptemp->next!=0){
		ptemp=ptemp->next;
	}
	endnode->next=ptemp->next;
	ptemp->next=endnode;
	ptemp=head;
	//insering after a node
	int i;
	printf("enter the data after which new node is to be added");
	scanf("%d",&i);
	struct node *midnode=(struct node *)malloc(sizeof(struct node));
	do {
		ptemp=ptemp->next;
	}while(ptemp->data!=i);
	midnode->data=39;
	midnode->next=ptemp->next;
	ptemp->next=midnode;
	ptemp=head;
	/deletion of given data node
	int element;
	printf("enter the data of the node to be deleted\n");
	scanf("%d",&element);
	while(ptemp!=0){
		if(ptemp->next->data==element){
			temp=ptemp->next;
			ptemp->next=temp->next;
		}
	ptemp=ptemp->next;
	}
	ptemp=head;
	//printing
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}
	occurrence(head);
	maxmin(head);
	//deletion 
	int del;
	ptemp=head;
	printf("enter the data to be deleted\n");
	scanf("%d",&del);
	if(head->next == NULL && head->data==del){
		head=head->next;
		free(ptemp);
	}
	else if(head->next!=NULL && head->data==del){
		head=head->next;
		free(ptemp);
	}
	else{
		while(ptemp->next!=NULL){
			if(ptemp->next->data == del){
				temp=ptemp->next;
				ptemp->next=temp->next;
				free(temp);
			}
			ptemp=ptemp->next;
		}
	}
	ptemp=head;
	//printing
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}
	//reverseing of a linked list
	struct node *prev,*current,*nextn;
	prev=NULL;
	nextn=current=head;
	while(nextn!=0){
		nextn=nextn->next;
		current->next=prev;
		prev=current;
		current=nextn;
}
	head=prev;
	//SHIFTINF THE MAX N=MODE TO END 
	struct node *maxadd;
	ptemp=head;
	int max=head->data;
	while(ptemp->next!=0){
		if (ptemp->data>max){
			max=ptemp->data;
			maxadd=ptemp;
		}
		ptemp=ptemp->next;
	}
	printf("%d",max);
	printf("%p",maxadd);
	ptemp=head;
	if(head->data==max){
		head->next=maxadd->next;
		do{
			if(ptemp->next==NULL){
				ptemp->next=maxadd;
				maxadd->next=NULL;
			}
			ptemp=ptemp->next;
		}while(ptemp->next!=0);
	}
	else{
		while(ptemp->next!=NULL){
			if (ptemp->next->data==max){
				ptemp->next=maxadd->next;
			}
			ptemp=ptemp->next;
		}
		ptemp->next=maxadd;
		maxadd->next=NULL;
	}
	ptemp=head;
	int length=0;
	if (head->next!=NULL){
		while(ptemp!=NULL){
			length++;
			ptemp=ptemp->next;
		}
		printf("%d",length);
		
	}
	else
		printf("the list is empty");
	//printing
	ptemp=head;
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}

	printf("\n\n");
	printf("%d",length(head));
	printf("%d",sum(head));
	printing(head);
	revprint(head);
	printing(reversing(head));
	printf("\n");
	//printing(lastnode(head,369));
	printf("\n");
	struct node*result =find(head,15);
	if (result==NULL)
		printf("no found");*/
	int count=1;
	struct node *add,*temp,*ptemp;
	while(count){
		add=(struct node *)malloc(sizeof (struct node));
		printf("enter the value of lined list node\n");
		scanf("%d",&add->data);
		add->next=0;
		if(head==NULL)
			head=temp=add;
		else{
			temp->next=add;
			temp=add;
		}
		printf("enter 1 if you want to continue or 0 to exit\n");
		scanf("%d",&count);
	}
	//printing
	ptemp=head;
	while(ptemp!=0){
		printf("node 1: data: %d\taddress: %p\n\tnext add: %p\n",ptemp->data,ptemp,ptemp->next);
		ptemp=ptemp->next;
	}
}
