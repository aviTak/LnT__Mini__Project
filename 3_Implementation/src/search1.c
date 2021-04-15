#include "header.h"

void Search1(book*h)// Book title search
{
	char name[20];
	book*p = h->next;
	printf("Enter the title you want to find:");
	scanf("%s",&name);
	while (p!=NULL)
	{
		if (strcmp(p->date.name,name)!=0)
		{
			p = p->next;
		}
		else 
		{
			printf("Book Title tISBN tPrice \n");
			printf("%s\t%s\t%s\n",p->date.name,p->date.ISBN,p->date.price);
			return;
		}
	}
	if (p == NULL)
	{
		printf("Not found! \n");
	}
}