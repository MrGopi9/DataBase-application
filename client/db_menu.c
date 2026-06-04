#include"headers.h"
void db_operations()
{
	char ch;

	while(1)
	{
		printmenu();
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'A':
			case 'a':add_record(); break;

			case 'P':
			case 'p':print_records(); break;

			case 'D':
			case 'd':Delete(); break;

			//case 'F':
			//case 'f':find(db); break;

			case 'S':
			case 's':save(); break;

			//case 'R':
			//case 'r':db=reverse(db); break;

			//case 'E':
			//case 'e':edit(db); break;

			case 'q':return 0;

		}
	}
}
