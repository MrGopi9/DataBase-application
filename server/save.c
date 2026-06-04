#include"myheaders.h"
extern struct stu *db;
extern int cfd;
void Save()
{

	FILE *fp;
	char filename[30]="records.txt";
	struct stu *p=db,buff;
	
	if(p==NULL)
	{
		strcpy(buff.name,"EMPTY");
		send(cfd,&buff,sizeof(buff),0);	
		return;
	}

	//strcat_file_pid(filename);

	//puts(filename);
	fp=fopen(filename,"w");
	if(fp==NULL)
	{
		puts("unable to open file in write mode");
		return;
	}
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->roll,p->name,p->per);
		p=p->next;
	}
	strcpy(buff.name,"DONE");
	send(cfd,&buff,sizeof(buff),0);	

	fclose(fp);
}
