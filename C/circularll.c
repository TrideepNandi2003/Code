#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

void LLtraversal (struct Node * head);

struct Node * insertatfirst ( struct Node * head , int data);

struct Node * insertatindex (struct Node * head , int data , int index);

struct Node * insertatlast (struct Node * head , int data);

struct Node * insertatnode (struct Node * head ,struct Node * prevnode , int data);

struct Node * deleteatfirst ( struct Node * head);

struct Node * deleteatlast (struct Node * head);

struct Node * deleteatindex (struct Node * head , int index);

int main (void)
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    
    head = (struct Node *)malloc (sizeof(struct Node));
    second = (struct Node *)malloc (sizeof(struct Node));
    third = (struct Node *)malloc (sizeof(struct Node));
    fourth = (struct Node *)malloc (sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = head;

    printf("Before\n");
    LLtraversal(head);

    // head = insertatfirst(head , 56);
    // head = insertatindex(head , 56 , 3);
    // head = insertatlast (head , 56);
    // head = insertatnode(head , third , 56);
    // head = deleteatfirst(head);
    // head = deleteatlast(head);
    head = deleteatindex(head , 0);

    printf("\nAfter\n");
    LLtraversal(head);

    return 0;
}

void LLtraversal (struct Node * head)
{
    struct Node * ptr = head;

    do
    {
        printf("Element : %d\n" , ptr -> data);
        ptr = ptr -> next;
    } while (ptr != head);
    
}

struct Node * insertatfirst ( struct Node * head , int data)
{
    struct Node * ptr = (struct Node *)malloc (sizeof(struct Node));
    ptr -> data = data;
    struct Node * p = head;
   do
   {
    p = p-> next;
   } while (p -> next != head);
   
    p -> next = ptr;
    ptr -> next = head;

    return ptr;
    
}

struct Node * insertatindex (struct Node * head , int data , int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;

    struct Node* p = head;

    int i = 0;
    do
    {
        p = p -> next;
        i++;
    } while (i != index - 1);
    
    

    ptr -> next = p -> next;
    p -> next = ptr;

    return head;
    
}

struct Node * insertatlast (struct Node * head , int data)
{
    struct Node * ptr = (struct Node *)malloc (sizeof(struct Node));
    ptr -> data = data;

    struct Node * p = head;

    do
    {
        p = p -> next;
    } while (p -> next != head);
    
    p -> next = ptr;

    ptr -> next = head;

    return head;

}

struct Node * insertatnode (struct Node * head , struct Node * prevnode , int data)
{
    struct Node * ptr = (struct Node *)malloc (sizeof(struct Node));
    ptr -> data = data;

    struct Node * p = head;
    do
    {
        p = p -> next;
    } while (p != prevnode);
    
    ptr -> next = p -> next;
    p -> next = ptr;

    return head;

}

struct Node * deleteatfirst ( struct Node * head)
{
    struct Node * p = head;
    struct Node * q = head;
    do
    {
        p = p -> next;
    } while (p -> next != head);
    
    p -> next = head -> next;

    head = p -> next;

    free(q);
    return head;
}

struct Node * deleteatlast (struct Node * head)
{
    struct Node * p = head;
    
    struct Node * q = head -> next;

    do
    {
        p = p -> next;
        q = q -> next;
    } while (q -> next != head);
    
    p -> next = head;

    free(q);

    return head;
}

struct Node * deleteatindex (struct Node * head , int index)
{
    struct Node * p = head;
    struct Node * q = head -> next;
    
    int i = 0;
    do
    {
        p = p -> next ;
        q = q -> next;
        i++;
    } while (i != index - 1);
    
    p -> next = q -> next;

    free (q);

    return head;
}