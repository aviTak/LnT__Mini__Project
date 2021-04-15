#include "header.h"

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