#include "header.h"

error_t Delete(book*h)
{
	char ISBN[20];// Delete by ISBN because ISBN is unique
	book*p = h->next;
	book*tail = h;
	printf("Enter the ISBN of the book to be deleted:");
	scanf("%s", &ISBN);
	while (p != NULL)
	{
		if (strcmp(p->date.ISBN, ISBN)!=0)
		{
			p = p->next;
			tail = tail->next;
		}
		else
		{
			tail->next = p->next;
			free(p);
			return SUCCESS;
		}
	}
	return SUCCESS;
}