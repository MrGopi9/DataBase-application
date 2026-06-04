#include"myheaders.h"
extern struct stu *db;
extern int cfd;
void Delete_record(struct stu *p)
{
	struct stu buff,*temp,*prev;
	int x;

	if(db==NULL)
	{	
		strcpy(buff.name,"EMPTY");
		send(cfd,&buff,sizeof(buff),0);
		return;
	}
	else if((db->roll)==(p->roll))
	{
		temp=db;
		db=db->next;
	}
	else
	{
		temp=db->next;
		prev=db;
		while(temp)
		{
			if((temp->roll) != (p->roll))
			{
				prev=temp;
				temp=temp->next;
			}
			else
				break;
		}
		if(temp==NULL)
		{
			strcpy(buff.name,"NO RECORD");
			send(cfd,&buff,sizeof(buff),0);
			return;

		}
		else
			prev->next=temp->next;
		

	}

	free(temp);//avoids memory leakage
	temp=NULL;//avoids dangling pointer
	strcpy(buff.name,"DONE");
	send(cfd,&buff,sizeof(buff),0);

	return;
}
