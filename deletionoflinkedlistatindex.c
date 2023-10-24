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

struct node*deletionoflinkedlistatindex(struct node* head, int index){
    struct node*p = head;
    struct node *ptr = head -> link;
    int i =0;
    while (i<(index-1))

    {
        p = p-> link;
        ptr= ptr -> link;
        i++;
    }
    p -> link = ptr-> link;
    free(ptr);
    return head;
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

fourth-> data= 67;
fourth -> link = NULL;

head = deletionoflinkedlistatindex(head, 2);
linkedListTraversal(head);
return 0;

}

