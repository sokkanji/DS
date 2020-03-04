#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct node {
		char data;
		struct node *link;
		struct node *del;
	};
	
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	p->data = 'A';
	p->link = (struct node *)malloc(sizeof(struct node));
	p->link->data = 'B';
	p->link->link = (struct node*)malloc(sizeof(struct node));
	p->link->link->data = 'C';
	p->link->link->link = NULL;

	del = p;
	while (p != NULL) {
		p == p->link;
		free(del);
		del = 0;
	}
	
	free(p);

	return 0;
}