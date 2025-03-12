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

void delete_begin(){
    if ( head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        struct node* ptr = head;
        head = head->next;
        free(ptr);
    }
    return;
}

void delete_end(){
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else if( head->next == NULL)
    {
        struct node* ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node* ptr= head;
        struct node* prev_ptr = NULL;
        while(ptr->next != NULL)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = NULL;
        free(ptr);
    }
}

void delete_pos(){
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    struct node* ptr = head;

    if( head == NULL)
    {
        printf("List is empty.\n");
    }
    else if( pos == 0)
    {
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node* prev_ptr;
        for(int i=0; i<pos; i++)
        {
            prev_ptr= ptr;
            ptr = ptr->next;
            if( ptr == NULL)
            {
                printf("Position not found.\n");
                return;
            }
            else
            {
                prev_ptr->next = ptr->next;
                free(ptr);
            }
        }
    }
}

void main(){

}