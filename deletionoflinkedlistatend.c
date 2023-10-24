#include<stdio.h> 
#include<stdlib.h>
struct node {
    int data;
    struct node* link; 
};

void linkedlisttraversal(struct node*ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n", ptr -> data);
        ptr = ptr -> link;
    }

}

struct node*deletionoflinkedlistatend(struct node* head){
    struct node*p = head ;
    struct node*ptr = head -> link;
    while(ptr-> link != NULL){
        p = p-> link;
        ptr = ptr -> link;
    }
    p-> link = NULL;
    free (ptr);
    return head ;
}


int main(){

struct node*head ;
struct node*second ;
struct node*third ;
struct node*fourth ;
struct node*fifth ;

head = malloc (sizeof(struct node));
second = malloc (sizeof(struct node));
third  = malloc (sizeof(struct node));
fourth = malloc (sizeof(struct node));
fifth = malloc (sizeof(struct node));


head -> data = 34;
head -> link = second ;

second  -> data = 34;
second -> link = third ;

third-> data = 34;
third -> link = fourth ;

fourth -> data = 34;
fourth -> link = fifth ;

fifth -> data = 34;
fifth -> link = NULL ;

head = deletionoflinkedlistatend(head);
linkedlisttraversal(head);
return 0;

}




