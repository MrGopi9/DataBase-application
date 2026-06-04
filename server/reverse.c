#include"myheaders.h"
struct stu * reverse_nodes(struct stu *ptr)
{
	struct stu *prev=NULL,*cur=NULL,*temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(ptr->next==NULL)
	{
		printf("List is having only one node in the list\n");
	}
	else
	{	temp=ptr->next;
		prev=ptr;
		cur=temp->next;
		temp->next=prev;
		prev->next=NULL;

		while(cur)
		{
			prev=temp;
			temp=cur;
			cur=cur->next;
			temp->next=prev; // linking with previous node;
		}
		ptr=temp;
	}

	return ptr;
}


