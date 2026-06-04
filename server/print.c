
#include"myheaders.h"
extern struct stu *db;
extern int cfd;
void sending_all_records()
{
	struct stu buff,*p=db;
	//system("clear");
	if(db==NULL)
	{
		strcpy(buff.name,"EMPTY");
		send(cfd,&buff,sizeof(buff),0);
		return ;
	}
	while(p)
	{
		send(cfd,p,sizeof(struct stu),0);
		//printf("%d\t%s\t%f\t %p\n",p->roll,p->name,p->per,p);
		p=p->next;
	}
	strcpy(buff.name,"QUIT");
	send(cfd,&buff,sizeof(buff),0);

}
