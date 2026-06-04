#include"myheaders.h"
struct stu * syncfile()
{
	struct stu *ptr=NULL,*newnode=NULL,*temp=NULL;
	//struct stu Var;
	int id;
	char name[100];
	float f;
	//Var.name=calloc(1,100);
	FILE *fp;
	fp=fopen("records.txt","r");

	if(fp==NULL)
	{
		return ptr;
	}
	else
	{
		while(fscanf(fp,"%d%s%f",&id,name,&f)==3)
		{

			newnode=calloc(1,sizeof(struct stu));

			if(newnode==NULL)
			{
				printf("Node not created\n");
			}
			else
			{
				newnode->roll=id;

				newnode->name=calloc(1,strlen(name)+1);
				strcpy(newnode->name,name);

				newnode->per=f;

				if(ptr==NULL)
				{
					temp=ptr=newnode;
				}
				else
				{
					//temp=ptr;
					//while(temp->next!=NULL)
					//	temp=temp->next;
					// we traverse until we reach the last node

					temp->next=newnode;  // linking newnode to  existing last node
				        temp=newnode;
				}
			}

			print_all_nodes(ptr);
			sleep(1);
		}


		fclose(fp);

		return ptr;
	}

}
