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
For the scanf, it needs memory address and that's why we use "&temp->data" to give the memory address of the data field.
temp->data accesses the data field inside the node.

Complexity Analysis

We use Big O notation for that. 

Big O notation describes how the run time(or memory usage) of an algorithm grows as the input size increases.

Common Big O notations

O(1) - Constant time   - does not depend on input size(fastest)
O(n) - Linear time     - grows proportionally with input size.
O(n^2) - Quadratic time
O(log n) - Logarithmic time


Stacks

A fundamental data structure that follows, Last In First Out(LIFO) principle.
We can only access the top most element in a stack.

There are two types:
     1. Static  (bounded stack)
                If a static stack is full, it is called to be in an Overflow State.
                Implement using an Array in C language.
     2. Dynamic 
                Implement using a Linked List.

Why stacks?

1. LIFO Property
2. Expression Evaluation
3. Function call management
4. Undo mechanisms
5. Backtracking algorithms
6. Memory management
7. Parsing and syntax checking

Stack Operations:

Push         : This operation adds an element to the top of the stack
Pop          : This element removes the top element from the stack
Peek(or Top) : This operation retrieves the top element of the stack without removing it.
IsEmpty      : This operation checks if the stack is empty.
IsFull       : This operation checks if the stack is full.


Linked List based implementation of Stacks

The top of the stack corresponds to the first node of the linked list.
Pushing an element involves creating a new node and making it the first node of the linked list.
Popping an element involves removing the first node of the linked list.







