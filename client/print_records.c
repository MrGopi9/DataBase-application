#include"headers.h"
extern int fd;

void print_records()
{
	struct stu buff;
	buff.choice='P';
	send(fd,&buff,sizeof(struct stu),0);
	system("clear");
	do
	{
		recv(fd,&buff,sizeof(struct stu),0);
		if(strcmp(buff.name,"EMPTY")==0)
		{
			puts(" LIST IS EMPTY \n");
				break;
		}
		else  if(strcmp(buff.name,"QUIT")==0)
			break;
		printf("%d  %s  %f\n",buff.roll,buff.name,buff.per);
	}while(1);	

	printf("\n******************** end ******************/n");
	return;

}
