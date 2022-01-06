#include<stdio.h>
#include<stdlib.h>
void createnode();
void insertbeg();
void insertend();
void display();
void insertposition();
void deleteatbeginning();
void deleteatend();
void deleteatpos();
struct node
{
  int data;
  struct node *next;
}*head=NULL,*tail=NULL, *temp=NULL;

int main()
{
    int choice;
     int count=0;
   do
   {
   	printf("1.insertion\n2.deletion");
   	scanf("%d",&choice);
   	if(choice==1)
   	{
    createnode();
    printf("1.Insertion at Beginning\n2.Insertion at End\n3.Insertion at a position");
    scanf("%d",&choice);
    if(choice==1)
    insertbeg();
    else if(choice==2)
    insertend();
    else
    insertposition();
    count++;
    }
    else
    {
    	printf("1.deletion at Beginning\n2.Insertion at End\n3.Insertion at a position");
    	scanf("%d",&choice);
    	if(choice==1)
    	deleteatbeginning();
    	else if(choice==2)
    	deleteatend();
    	else
        deleteatpos();
    	
	}

}while(count<5);
}

void createnode()
{
    int value;
    printf("\nEnter data");
    scanf("%d",&value);
     temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
}

void insertbeg()
{
  
  if(head==NULL)
  {
    head=tail=temp;
   temp=NULL;
  }
  else 
  {
    temp->next=head;
    head=temp;
    temp=NULL;
  }
   display();
}

void insertend()
{
     if(head==NULL)
  {
    head=tail=temp;
   temp=NULL;
  }
  else 
  {
      tail->next=temp;
      tail=temp;
      temp=NULL;
  }
   display();
}

void insertposition()
{
	struct node *iterate=NULL;
	int pos;
	iterate=head;
	printf("\nEnter position and value");
	scanf("%d",&pos);
	for(int i=1;i<pos-1;i++)
	{
		if(iterate!=NULL)
		{
			iterate=iterate->next;
		}
		else
		{
		printf("Couldn't insert at the position");
		break;
     	}
		
	}
	if(iterate!=NULL)
	{
	temp->next=iterate->next;
	iterate->next=temp;
//	iterate=NULL;
    }
     display();
}

void deleteatbeginning()
{
	temp=head;
	head=head->next;
	free(temp);
	display();
}
void deleteatend()
{
	temp=head;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	free(tail);
    tail=temp;
	display();
}
void deleteatpos()
{
	int pos;
	struct node *iterate=NULL;
	temp=iterate=head;
printf("\n Enter pos");
scanf("%d",&pos);
for(int i=1;i<pos;i++)
{
	iterate=temp;
	temp=temp->next;
	if(temp==NULL)
	{
		printf("Cannot delete");
	break;
    }
}
if(temp!=NULL)
{
iterate->next=temp->next;
temp->next=NULL;
free(temp);
}
display();
//iterate=NULL;
}
void display()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    } 
}