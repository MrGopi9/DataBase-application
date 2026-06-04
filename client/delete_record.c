#include"headers.h"
extern int fd;

void Delete()
{
	struct stu *New_node;
	New_node=calloc(1,sizeof(struct stu)); // creating New_node

	// New_node details providing here
	New_node->choice='D';
	puts("Enter roll to delete record.");
	__fpurge(stdin);
	scanf("%d",&New_node->roll);

	send(fd,New_node,sizeof(struct stu),0); // sending to server
					

	// waiting for replie from server
	recv(fd,New_node,sizeof(struct stu),0);
	if(strcmp(New_node->name,"EMPTY")==0)
		puts("No records in DataBase to delete");
	else if(strcmp(New_node->name,"NO RECORD")==0)
		puts("Record not found in DataBase to delete");
	else
		puts("Record deleted sucessfully");
	
	return;

}
