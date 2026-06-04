client: client.o db_menu.o client_menu.o add_record.o print_records.o delete_record.o save.o
	gcc client.o db_menu.o client_menu.o add_record.o print_records.o delete_record.o save.o -o client

client.o : client.c
	gcc -c client.c

db-mwnu.o : db_menu.c
	gcc -c db_menu.c

add_record.o : add_record.c
	gcc -c add_record.c

print_records.o : print_records.c
	gcc -c print_records.c

client_menu.o : client_menu.c
	gcc -c client_menu.c

delete_record.o : delete_record.c
	gcc -c delete_record.c

save.o : save.c
	gcc -c save.c
