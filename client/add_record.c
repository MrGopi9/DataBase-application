#include"headers.h"
extern int fd;

void add_record()
{
	struct stu *New_node;
	New_node=calloc(1,sizeof(struct stu)); // creating New_node

	// New_node details providing here
	New_node->choice='A';
	puts("Enter New_node info ( roll , name , per )");
	__fpurge(stdin);
	scanf("%d",&New_node->roll);
	__fpurge(stdin);
	gets(New_node->name);
	__fpurge(stdin);
	scanf("%f",&New_node->per);

	send(fd,New_node,sizeof(struct stu),0);
	return;

}
