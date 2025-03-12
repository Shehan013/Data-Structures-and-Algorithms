#include <stdio.h>
#include <stdlib.h>

struct node* head = NULL;

struct node {
    int data;
    struct node* next;
};

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

void insert_end(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node* ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    free(temp);
    return;
}

void insert_pos(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if( head == NULL)
    {
        head = temp;
        printf("List is empty. Inserted at the beginning.\n");
    }
    else
    {
        struct node* prev_ptr;
        struct node* ptr = head;
        for(int i=0; i<pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
            if(ptr == NULL)
            {
                printf("Position not found.\n");
                return;
            }
            else
            {
                prev_ptr->next = temp;
                temp->next = ptr; 
            }
        }
    }
}

void main(){

}