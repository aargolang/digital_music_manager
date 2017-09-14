/********************************
Name:			Arthur Lang
Assignment:		PA2 - Digital Music Manager
Date Started:	9/11/17

Description:	create and implement a imitation digital music manager
				to showcase the functionality of a doubly linked list
				and properties of a queue

Files:			- main.c
				- LinkedList.h
				- LinkedList.c
*********************************/

#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	Node *list = NULL;
	int exit = 0;
	char userInput[51] = { '0' };
	char message[51] = { '\0' };

	while (exit != 1)
	{
		printf("MSG: %s\n", message);
		printMenu();
		scanf_s("%s", userInput, 50);
		switch (atoi(userInput)) {
		case 1:
			clrscr();
			load(&list);
			strncpy(message, "loaded from file",17);
			clrscr();
			break;
		case 2:
			printf("(2) store\n");
			break;
		case 3:
			clrscr();
			printList(&list);
			strncpy(message, "\0", 2); 
			break;
		case 4:
			printf("(4) insert\n");
			break;
		case 5:
			printf("(5) delete\n");
			break;
		case 6:
			clrscr();
			edit(&list);
			clrscr();
			break;
		case 7:
			printf("(7) sort\n");
			break;
		case 8:
			printf("(8) rate\n");
			break;
		case 9:
			printf("(9) play\n");
			break;
		case 10:
			printf("(10) shuffle\n");
			break;
		case 11:
			printf("(11) exit\n");
			exit = 1;
			break;
		default:
			printf("input not recognized :(\ntry again\n");
			strncpy(message, "\0", 2);
		}
	}
	
	printf("thats all folks!\n");
	getchar();

	return 0;
}