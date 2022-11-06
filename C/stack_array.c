#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;

};

int isEmpty (struct stack *ptr)
{
    if (ptr -> top == -1)
    {
        return -1;
    }

    return 0;
}

int isFull (struct stack *ptr)
{
    if (ptr -> top == ptr -> size - 1)
    {
        return -1;
    }

    return 0;
    
}

void Push (struct stack * ptr , int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow");
    }

    else
    {
        ptr -> top++;
        ptr -> arr[ptr -> top] = val;
        
    }
    
}

int Pop ( struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow");
        return -1;
    }

    else
    {
        int val = ptr -> arr [ptr -> top];
        ptr -> top--;
        return val;
    }
    
}
int main (void)
{
    struct stack *s = (struct stack * ) malloc (sizeof(struct stack));
    s -> size = 10;
    s -> top = -1;
    s -> arr = (int *)malloc((s -> size) * sizeof(int));
    
    int val;
    for (int i = 0; i < s -> size; i++)
    {
        printf("Elment to push at %d\n" , i);
        scanf("%d" , &val);
        Push(s, val);
    }

    for (int i = 0; i < s -> size; i++)
    {
        printf("Element %d :  %d\n" , i , Pop(s));
    }
    
    
    
    printf("%d\n" ,isFull(s));


}