#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS 1

/**
 * @file header.h
 * @author Avi (ar329@srmist.edu.in)
 * @brief  mini_project
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HEADER_H_
#define _HEADER_H_


typedef struct Node{
	char name[20];
	char ISBN[20];
	char price[10];
}Node;
typedef struct Book{
	Node date;
	struct Book*next;
}book;

book*GreatLink()
{
	book*h, *tail, *p;
	h=tail=(book*)malloc(sizeof(book));
	h->next = NULL;
	int n = 0;
	printf("Enter the number of books to be entered:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		p = (book*)malloc(sizeof(book));
		printf("Book Title:");
		scanf("%s",&p->date.name);
		printf("IBSN:");
		scanf("%s",&p->date.ISBN);
		printf("price:");
		scanf("%s",&p->date.price);
		p->next = NULL;
		tail->next = p; 
		tail = p;
	}

	return h;
}

#endif