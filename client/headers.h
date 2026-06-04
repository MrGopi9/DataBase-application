
/* headers.h */

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include<signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<stdio_ext.h>

//more can added as and when required
struct stu
{
	int choice;
	int roll;
	char name[20];
	float per;
	struct stu *next;
};
void printmenu();
void db_operation();
void add_record();
void Delete();
void print_records();

