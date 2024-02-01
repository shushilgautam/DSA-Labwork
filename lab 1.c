// Write a program along with a proper algorithm to perform array based implementation of stack in C program
#include <stdio.h>
#define max 5
struct stack
{
    int items[max];
    int top;
};
void peek(struct stack *st)
    {
        if (st->top == -1)
            printf("Stack is Empty \n") ;
        else
            printf("Top of the stack is:%d \n",st->items[st->top]);
    }

void push(struct stack *st, int value)
{
    if ( st->top== max - 1)
        printf("Stack is full\n");
    else
    {
        st->top++;
        st->items[st->top]=value;
        printf("Item Pushed is %d\n",st->items[st->top]);
    }
}
void pop(struct stack *st){
    if(st->top==-1)
        printf("Stack is empty\n");
    else{
        printf("Item popped is %d\n",st->items[st->top]);
        st->top--;
    }
}
void display(struct stack *st){
    if(st->top==-1)
        printf("Stack is empty\n");
    else{
        for(int i=st->top;i>=0;i--){
            printf("%d\t",st->items[i]);
        }
        printf("\n");
    }
}
int main()
{
    struct stack st;
    st.top=-1;
    display(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    peek(&st);
    push(&st,40);
    display(&st);
    pop(&st);
    push(&st,50);
    push(&st,60);
    display(&st);
    push(&st,70);
}