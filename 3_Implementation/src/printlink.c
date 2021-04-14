#include "header.h"

void PrintLink(book*h)// output
{
	book*p;
	printf("Book Title \ tISBN \ tPrice \ n");
	for (p = h->next; p != NULL; p = p->next)
	{
		printf("%s\t",p->date.name);
		printf("%s\t", p->date.ISBN);
		printf("%s\t", p->date.price);
		printf("\n");
	}

}