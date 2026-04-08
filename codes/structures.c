#include<stdio.h>
#include<string.h>
/*struct student{
	int roll_no;
	char name[20];
	int age;
};*/
struct student{
	char name[20];
	int roll_no;
	float marks;
	struct date{
		char day[10];
		char month[10];
		int year;
	}birth;
}stu1;
struct books{
	char title[20],author[20];
	long int ISBN;
	int numop;
};
void printstr(struct student a){
	printf("name: %s\nroll number: %d\nmarks: %f\n",a.name,a.roll_no,a.marks);
}
void printbstr(struct books a){
	printf("title: %s\nauthor: %s\nISBN: %ld\nnumber of pages : %d\n",a.title,a.author,a.ISBN,a.numop);
}
int main(){
	struct student stu1={"r sai srujan",439,21};
	/*printf("student 1\n%d,%s,%d\n",stu1.age,stu1.name,stu1.roll_no);
	struct student stu2,stu3;
	strcpy(stu2.name,"sai");
	printf("studen 2\n%s ",stu2.name);
	stu2.age=26;
	stu2.roll_no=39;
	printf("%d,%d\n",stu2.age,stu2.roll_no);
	printf("enter the data of student 3:\nname\nroll number\nage\n");
	scanf("%s%d%d",stu3.name,&stu3.roll_no,&stu3.age);
	printf("student 3\n%s,%d,%d\n",stu3.name,stu3.roll_no,stu3.age);
	stu3=stu1;
	printf("student 3\n%s,%d,%d\n",stu3.name,stu3.roll_no,stu3.age);
	struct student stu1={"srujan",439,79};
	printstr(stu1);
	struct books book1;
	printf("enter the title of the book:\n");
	scanf("%s",book1.title);
	printf("enter the author of the book:\n");
	scanf("%s",book1.author);
	printf("enter the ISBN of the book:\n");
	scanf("%ld",&book1.ISBN);
	printf("enter the number ofpages of the book of the book:\n");
	scanf("%d",&book1.numop);
	printbstr(book1);
	printf("%zu",sizeof(struct student));
	struct student stu[3];
	for(int i=0;i<3;i++){
		printf("enter the detailes(name , roll number ,marks) of the student %d",i);
		scanf("%s%d%f",stu[i].name,&stu[i].roll_no,&stu[i].marks);
	}
	for(int i=0;i<3;i++){
		printf("%s\t%d\t%f\n",stu[i].name,stu[i].roll_no,stu[i].marks);
	}*/
	strcpy (stu1.birth.day,"thursday");
	printf("%s",stu1.birth.day);
	struct student *ptr=&stu1;
	printf("%s",ptr->name);
	printf("%s",ptr->birth.day);
}
