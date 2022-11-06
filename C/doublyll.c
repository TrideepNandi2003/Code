#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node * prev;
    int data;
    struct Node * next;
};

void doublylltravversal (struct Node * head);
struct Node * insertatfirst (struct Node * head , int data);
struct Node * insertatindex (struct Node * head , int data , int index);
struct Node * insertatlast ( struct Node * head , int data);
struct Node * deleteatfirst (struct Node * head );
struct Node * deleteatend (struct Node * head );
struct Node * deleteNode (struct Node * head , struct Node * node);
struct Node * insertatindex1 (struct Node * head , int data , int val);

int main (void) 
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third  = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> prev = NULL;
    head -> data = 7;
    head -> next = second;

    second -> prev = head;
    second -> data = 11;
    second -> next = third;

    third -> prev = second;
    third -> data = 41;
    third -> next = fourth;

    fourth -> prev = third;
    fourth -> data = 66;
    fourth -> next = NULL;

    printf("\nBefore\n");
    doublylltravversal(head);

    // printf("%d\n" , second -> next -> data);
    // head = insertatfirst(head , 56);
    head = insertatindex1(head , 56 , second -> data);
    // head = insertatlast(head , 56);
    
    // head = deleteatfirst(head);
    // head = deleteatend(head);
    // head = deleteNode(head , second);

    printf("After\n");
    doublylltravversal(head);
    return 0;
}

void doublylltravversal (struct Node * head)
{
    struct Node * ptr = head;

    while (ptr != NULL)
    {   
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
    
}

struct Node * insertatfirst (struct Node * head , int data)
{
    struct Node * new = (struct Node *) malloc (sizeof (struct Node ));
    new -> data = data ;

    new -> prev = NULL;

    // struct Node * ptr = head;

    new -> next = head;

    head -> prev = new;
    

    head = new;
    return head;

}

struct Node * insertatindex (struct Node * head , int data , int index)
{
    struct Node * new = (struct Node *) malloc (sizeof (struct Node ));
    new -> data = data ;

    struct Node * p = head;
    struct Node * q = head -> next;

    int i = 0;
    while (i != index - 1)
    {
        p = p -> next;
        q = q -> next;
        i++;
    }
    
    new -> next = q;
    q -> prev = new;

    new -> prev = p;
    p -> next = new;

    return head;

}

struct Node * insertatlast ( struct Node * head , int data)
{
    struct Node * new = (struct Node * )malloc (sizeof(struct Node));
    new -> data = data;
    new -> next = NULL;

    struct Node * ptr = head;
    do
    {
        ptr = ptr -> next;
    } while (ptr -> next != NULL);

    new -> prev = ptr;
    ptr -> next = new;
    
    return head;
}

struct Node * deleteatfirst (struct Node * head )
{
    struct Node * ptr = head;

    head = head -> next;
    head -> prev = NULL;

    free(ptr);

    return head;
}

struct Node * deleteatend (struct Node * head)
{
    struct Node * ptr = head;
    struct Node * q = head -> next;

    do
    {
        ptr = ptr -> next;
        q = q -> next;
    } while (q -> next != NULL);

    ptr -> next = NULL;

    free (q);
    
    return head;
}

struct Node * deleteNode (struct Node * head , struct Node * node)
{
    struct Node * ptr = head;
    struct Node * q = head -> next;
    struct Node * r = q -> next;
    while (ptr -> next != node)
    {
        ptr = ptr -> next;
        q = q -> next;
        r = r -> next;
    }

    ptr -> next  = r;
    r -> prev = ptr;

    free(q);

    return head;
    
}

struct Node * insertatindex1 (struct Node * head , int data , int val)
{
    struct Node * new = (struct Node *) malloc (sizeof (struct Node ));
    new -> data = data ;

    struct Node * p = head;

    while (p -> data != val)
    {
        p = p -> next;
    }
    
    new -> next = p -> next;
    new -> prev = p;

    p-> next -> prev = new;
    p -> next = new;

    return head;

}