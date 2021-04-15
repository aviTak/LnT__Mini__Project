#include "header.h"

error_t insert(book*h)// insert (head insertion method)
{
	book*p;
		p = (book*)malloc(sizeof(book));
		printf("Book Title:");
		scanf("%s", &p->date.name);
		printf("IBSN:");
		scanf("%s", &p->date.ISBN);
		printf("price:");
		scanf("%s", &p->date.price);
		p->next = h->next;
		h->next = p;

		return SUCCESS;
	
}