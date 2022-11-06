#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedlisttraversal(struct Node * ptr);

struct Node * insertatfirst (struct Node * head , int data);

struct Node * insertatindex (struct Node* head , int data , int index);

struct Node * insertatlast(struct Node * head , int data);

struct Node * insertatnode ( struct Node * head , struct Node * prevnode , int data );

struct Node * deleteatfirst (struct Node * head);

struct Node * deleteatindex (struct Node * head , int index);

struct Node * deleteatend (struct Node * head);

struct Node * deletenode (struct Node * head , struct Node * ptr);

int main (void)
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;

    printf("Before\n");

    linkedlisttraversal(head);

    // head = insertatfirst(head , 56);
    // insertatindex(head , 56 , 3);
    // insertatlast (head , 56);
    // insertatnode(head , second , 56);
    
    // head = deleteatfirst(head);
    // head = deleteatindex(head , 2);
    // head  = deleteatend(head);
    // head = deletenode(head , second);

    int val , no;

    printf("How many no you want to insert \n");
    scanf("%d" , &no);

    for (int i = 0; i < no ; i++)
    {   
        printf("Insert element: ");
        scanf("%d" , &val);
        printf("\n");
        head = insertatfirst(head , val);
    }
    

    printf("\nAfter\n");
    
    linkedlisttraversal(head);
    return 0;
}

void linkedlisttraversal (struct Node * ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n" , ptr -> data);
        ptr = ptr -> next;
    }

}

struct Node * insertatfirst (struct Node * head , int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    
    ptr -> next = head;

    return ptr;
}

struct Node * insertatindex (struct Node* head , int data , int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node * p = head;

    if (index == 0)
    {
        return 0;
    }
    

    int i = 0;
    while (i != index - 1)
    {
        p = p -> next;
        i++;
    }

    ptr -> next = p -> next;

    p -> next = ptr;
    
    return head;
}

struct Node * insertatlast(struct Node * head , int data)
{
    struct Node * ptr = (struct Node *) malloc (sizeof (struct Node));
    ptr -> data = data;

    struct Node * p = head;
    while (p -> next != 0)
    {
        p = p -> next;
    }

    p -> next = ptr;
    ptr -> next = NULL;
    
    return head;
}

struct Node * insertatnode ( struct Node * head , struct Node * prevnode , int data )
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;

    ptr -> next = prevnode -> next;

    prevnode -> next = ptr;

    return head;

}

struct Node * deleteatfirst (struct Node * head)
{
    struct Node * ptr = head;

    head = head -> next;
    free(ptr);

    return head;
}

struct Node * deleteatindex (struct Node * head , int index)
{
    struct Node * p = head;
    // struct Node * q = head -> next;

    int i = 0;
    while (i != index - 1)
    {
        p = p -> next;
        // q = q -> next;
        i++;
    }

    struct Node * q = p -> next;
    p -> next = q -> next;

    free(q);

    return head;
    
}

struct Node * deleteatend (struct Node * head)
{
    struct Node * p = head;
    struct Node * q = head -> next;

    while (q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }

    p -> next = NULL;

    free(q);

    return head;
    
}

struct Node * deletenode (struct Node * head , struct Node * ptr)
{
    struct Node * p = head;

    while (p -> next != ptr)
    {
        p = p -> next;
    }

    p -> next = ptr -> next;

    free(ptr);

    return head;
    
}