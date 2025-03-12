#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100

int top = -1;

int stack[N];

void push();
int pop();
int peek();
bool isEmpty();
bool isFull();

void push(){
    if( top == N-1)
    {
        printf("Stack is full.\n");
    }
    else
    {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}

int pop(){
    if ( top == -1)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    else
    {
        int data = stack[top];
        top--;
        return data;
    }
}

int peek(){
    if ( top == -1)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

bool isEmpty(){
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if (top == N-1)
    {
    return true;
    }
    else
    {
        return false;
    }
}

void main(){

}