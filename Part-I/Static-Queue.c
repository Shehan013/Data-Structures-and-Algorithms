#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0;
int rear = -1;
int size = 0;

bool isEmpty();
bool isFull();
void enqueue();
int dequeue();
int peek();

bool isEmpty(){
    return size == 0;
}

bool isFull(){
    return size == MAX_SIZE;
}

void enqueue(){
    if(isFull()){
        printf("Queue is full.\n");
    }
    else{
        int data;
        printf("Enter the data:");
        scanf("%d", &data);
        rear = (rear+1) % MAX_SIZE;
        queue[rear] = data;
        size++;
    }
}
