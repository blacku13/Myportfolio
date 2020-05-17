#include<stdio.h>
#include<stdlib.h>

struct linkedlist
{
    int data ;
    struct linkedlist *next ;
};

typedef struct linkedlist *node ;

node createnode()
{
    node n ;
    n = (node)malloc(sizeof(struct linkedlist));
    n->next = NULL ;
    return n ;
}

void newnode(node head, int value)
{
    node p,temp ;
    temp=createnode();
    temp->data= value ;

    if (head == NULL)
    {
        head = temp ;
    }
    else{
        p= head ;
        while(p->next != NULL)
            p=p->next ;
    }
    p->next = temp ;
}
void display(struct linkedlist *t)
{
    while(t!= NULL)
    {
        printf("%d ", t->data);
        t=t->next ;
    }
}

int main ()
{
    struct linkedlist *head = NULL;
    newnode(head,5);
    newnode(head,10);
    newnode(head,15);
    newnode(head,20);

    display(head) ;
    return 0 ;

}
