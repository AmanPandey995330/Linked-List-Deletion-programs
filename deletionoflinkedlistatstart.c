#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node*link;
};

void linkedListTraversal (struct node*ptr )
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr->link;
    }
}
struct node*deletionoflinkedlistatstart(struct node* head){
    struct node*ptr = head;
    head = head -> link;
    free (ptr);
    return head ;

}

int main(){
    struct node*head;
    struct node*second ;
    struct node*third;
    struct node*fourth;

    head = malloc (sizeof (struct node));
    second = malloc (sizeof(struct node));
    third = malloc (sizeof(struct node));
    fourth = malloc (sizeof(struct node));
   


head->data = 78;
head -> link = second ;

second -> data =79;
second ->link= third ;

third -> data = 54;
third ->link = fourth;

fourth -> data = 23;
fourth -> link = NULL;

head = deletionoflinkedlistatstart(head);
linkedListTraversal(head);
return 0;

}

