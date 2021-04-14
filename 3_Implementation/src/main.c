#include "header.h"

void choose(book*h)
{
	int i;
	int a = 1;

	while (a>0)
	{
		menu();
		printf("please choose:");
		scanf("%d",&i);
		switch (i)
		{
		case 1:
			h=GreatLink();
			break;
		case 2:
			Insert(h);
			break;
		case 3:
			Search1(h);
			break;
		case 4:
				Search2(h);
				break;
		case 5:
				delete(h);
				break;
		case 6:
				PrintLink(h);
				break;
		default:
			printf("Invalid command! \ N");
				a = -1;// jump out of the loop condition 
				break;
			}
		}
}

int main()
{
	book*head = NULL;
	choose(head);
	return 0;
}