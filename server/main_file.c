#include"myheaders.h"
extern struct stu *db;
extern int cfd;

void db_menu()
{
	int s;
	struct stu buff;
	while(1)
	{
		s=recv(cfd,&buff,sizeof(buff),0);
		if(s<0)
		{
			perror("recv");
			break;
		}
		else if(s==0)
		{
			puts("client exited abnormally\n");
			break;
		}

		switch(buff.choice)
		{
			case 'A':
			case 'a':add_record(&buff); break;

			case 'P':
			case 'p':sending_all_records(); break;

			case 'D':
			case 'd':Delete_record(&buff); break;

/*			case 'F':
			case 'f':find_record(db); break;

			case 'R':
			case 'r':db=reverse_records(db); break;
*/
			case 'S':
			case 's':Save(); break;

			case 'Q':
			case 'q':return 0;
		}


	}




}





