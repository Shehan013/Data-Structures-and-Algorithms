#include <stdio.h>
#include <stdlib.h>

struct node* head = NULL;

struct node {
    int data;
    struct node* next;
}

void insert_begin(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(head ==NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    free(temp);
    return;
}
void main(){

}