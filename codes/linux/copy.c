#include<stdio.h>
int main(int argv, char *argc[]){
	int source_fd,destination_fd;
	if(argv<3){
		perror("lack of usage arguments");
	}
	else{
		for (int i=0;i<argv;i++){
			printf("argument %d id %s\n",i,argc[i]);
		}
	source_fd=open(argc[1],O_RONLY | O_CREAT, 0777);
	printf("%d",source_fd);
	destination_fd=open(argc[2],O_WRONLY | O_CREAT, 0777);
	printf("%d",destination_fd);
	


	}

}
