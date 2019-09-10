#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

void printlist(struct node* nod)
{
	while(nod!=NULL)
	{
		printf("%d",nod->data);
		nod=nod->next;
		printf("\n");
	}
}
void first(struct node* tmp)
{
	while(tmp!=NULL)
	{
		printf("%d",tmp->data);
		tmp=tmp->next;
	}
}

void last(struct node* last)
{
	while(last!=NULL)
	{
		printf("%d",last->data);
		last=last->next;

	}
}

void delete(struct node* del)
{ struct node* tmp;
	if(tmp==NULL)
	{
		printf("the list is empty");
	}
	else
	{
		tmp=del;
		del=del->next;
		
		printf("AFTER DATA del%d \n",del->data);
		free(tmp);
		
	}
}
int main()
{
	struct node* tmp=NULL;
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	struct node* last=NULL;


	tmp = (struct node*)malloc(sizeof(struct node)); 
	head= (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	

	tmp->data =0;
	tmp->next= head;

	head->data = 1;
	head->next = second;

	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=last;
	
	last-> data=4;
	last->next=NULL;

	printlist(tmp);
	delete(tmp);
	printlist(head);
	return 0;
}


/*
void *rrr;
int main(void)
{
rrr=malloc(sizeof(void **));
rrr=strdup("bbb");
free(rrr);

return 0;}
*/






























