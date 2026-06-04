#include"headers.h"
extern int fd;

void save()
{
	struct stu buff;
	buff.choice='S';
	send(fd,&buff,sizeof(struct stu),0);
	system("clear");
	
	recv(fd,&buff,sizeof(struct stu),0);
	if(strcmp(buff.name,"DONE")==0)
	{
		puts(" DATA HAS BEEN SAVED IN A FILE AT SERVER \n");
		
	}
	else  if(strcmp(buff.name,"EMPTY")==0)
	{
		puts("NO DATA TO SAVE\n");
		
	}
		
		

	return;

}
