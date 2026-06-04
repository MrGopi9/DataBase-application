#include"myheaders.h"
extern struct stu *db;
void add_record(struct stu *p ) // adding at last evry record
{

	struct stu *temp;
	struct stu *New_node;
	New_node=calloc(1,sizeof(struct stu)); // creating New_node 

	// received data storing in SLL
	New_node->roll=p->roll;
	strcpy(New_node->name,p->name);
	New_node->per=p->per;

	if(db==NULL)
	{
		db=New_node;// if LIST is empty , inserting as a first node 
	}
	else
	{
		temp=db; // taking temp help to traverse in list to reach last node
			// why temp ?? -> we should not loose first node address, thats why.
			
		// checking every node , whether it is a last node or not
		// if not a last node , moving to next node
		// if it is last node , condition will be failed , so temp will point at last node
		while(temp->next != NULL)
			temp=temp->next;

		//inserting New_node at last 
		temp->next=New_node;
	}
	
}
