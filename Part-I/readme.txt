Linked List

Unlike arrays, linked lists do not store elements in contiguous memory locations; instead each element(node) in a linked list contains a data value and a reference to the next node in the sequence.

Basic Components of a linked list

1. Node: consists of data and a reference
2. Head
3. Tail

Forms of Linked Lists

1. Singly Linked List : Each node points to the next node in the sequence.
2. Doubly Linked List : Each node has references to both next and previous nodes.
3. Circular Linked List : The last node's reference points back to the first node, forming a loop.

Why Linked List:

1. Dynamic Size
2. Ease of Insertion and Deletion
3. No pre allocation of memory.
4. No wasted memory
5. Dynamic Data Structures
6. Efficient for certain operations

Linked lists also have limitations, such as slower random access time compared to arrays. The choice between arrays and linked lists depends on the specific requirements and characteristics of the data and operations performed in a given application.


Singly Linked List

To better understanding, it is so important to have idea about pointers.

int* p = &a  

int *p;
p = &a;

&p - memory address of p
p  - memory address of int a
*p - value of a

struct node* head = NULL;

struct node is user defined data type.
head is a pointer that can store memory address of struct node.

clarification for scanf("%d", &temp->data)


&temp means the address of temp itself, and it is not what we need.
temp stores an address, but temp->data is an actual integer inside the node.
For the scanf, it needs memory address and that's why we use "&temp->data".



