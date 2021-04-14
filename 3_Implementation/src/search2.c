#include "header.h"

void Search2(book*h)// ISBN search
{
	char ISBN[20];
	book*p = h->next;
	printf("Enter the ISBN to find:");
	scanf("%s", &ISBN);
	while (p != NULL)
	{
		if (strcmp(p->date.ISBN, ISBN)!=0)
		{
			p = p->next;
		}
		else
		{
			printf("Book Title \ tISBN \ tPrice \ n");
			printf("%s\t%s\t%s\n", p->date.name, p->date.ISBN, p->date.price);
			return;
		}
	}
	if (p == NULL)
	{
		printf("Not found! \ N");
	}
}