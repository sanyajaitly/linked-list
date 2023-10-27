# linked-list

AIM

Linked-List

THEORY

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
There are three types of linked lists −

   -Singly Linked List − The nodes only point to the address of the next node in the list.

   -Doubly Linked List − The nodes point to the addresses of both previous and next nodes.

   -Circular Linked List − The last node in the list will point to the first node in the list. It can either be singly linked or doubly linked.

   -Linked List Representation Linked list can be visualized as a chain of nodes, where every node points to the next node.

Types of Linked List Following are the various types of linked list.

Singly Linked Lists Singly linked lists contain two “buckets” in one node; one bucket holds the data and the other bucket holds the address of the next node of the list. Traversals can be done in one direction only as there is only a single link between two nodes of the same list.

Doubly Linked Lists Doubly Linked Lists contain three “buckets” in one node; one bucket holds the data and the other buckets hold the addresses of the previous and next nodes in the list. The list is traversed twice as the nodes in the list are connected to each other from both sides.


Circular Linked Lists Circular linked lists can exist in both singly linked list and doubly linked list.
Since the last node and the first node of the circular linked list are connected, the traversal in this linked list will go on forever until it is broken.




ALGORITHM


Algorithm for Singly Linked List Implementation:
1.Start.

2.Create a class Node with two public members:

val: to store the value of the node.

next: a pointer to the next node, initialized to NULL in the constructor.

3.In the main function:

4.Create a new instance of the Node class, denoted as n, and pass the value 1 to the constructor.

5.This creates a node with a value of 1 and a next pointer initially set to NULL.

6.Print the value of the node n using n->val.

7.Print the value of the next pointer, which should be NULL in this case, using n->next.

8.End.

Algorithm for Singly Linked List Implementation (Insertion at Head):
1.Start.

2.Create a class Node with two public members:

val: to store the value of the node.

next: a pointer to the next node, initially set to NULL in the constructor.

3.Define a function insertAtHead that takes a reference to the head of the linked list and an integer value to insert at the head:

4.Create a new node, denoted as new_node, with the given value.

5.Set the next pointer of the new_node to point to the current head.

6.Update the head to point to the new_node.

7.Define a function display that takes the head of the linked list:

8.Initialize a temporary pointer temp to the head.

9.While temp is not NULL:

10.Print the value of the node temp.

11.Update temp to point to the next node.

12.Print "NULL" to indicate the end of the list.

13.In the main function:

14.Initialize the head of the linked list to NULL.

15.Insert a node with a value of 2 at the head of the list using insertAtHead.

16.Display the linked list using the display function.

17.Insert a node with a value of 1 at the head of the list using insertAtHead.

18.Display the updated linked list.

19.End.

Algorithm for Singly Linked List Operations Program:
1.Start.

2.Create a class Node with two public members:

val: to store the value of the node.

next: a pointer to the next node, initially set to NULL in the constructor.

Define functions for the following operations:

3.insertAtHead:

a. Create a new node (new_node) with the given value.

b. Set the next pointer of the new node to point to the current head.

c. Update the head to point to the new node.

4.display:

a. Initialize a temporary pointer (temp) to the head.

b. While temp is not NULL:

i. Print the value of the node pointed to by temp.

ii. Update temp to point to the next node.

c. Print "NULL" to indicate the end of the list.

5.delAtHead:

a. Check if the list is empty (head is NULL).

b. If empty, print an error message and return.

c. Otherwise, create a temporary pointer (temp) and set it to the current head.

d. Update the head to point to the next node.

e. Delete the node pointed to by temp.

6.insertAtEnd:

a. Create a new node (new_node) with the given value and set its next pointer to NULL.

b. Check if the list is empty (head is NULL).

c. If empty, set the head to the new node and return.

d. Otherwise, create a temporary pointer (temp) and set it to the head.

e. Traverse the list using temp until the last node (where temp->next is NULL) is reached.

f. Update the next pointer of the last node to point to the new node.

7.deleteAtEnd:

a. Check if the list is empty (head is NULL).

b. If empty, print an error message and return.

c. If the list has only one node (head's next is NULL):

i. Delete the head node.

ii. Set the head to NULL.

iii. Return.

d. Otherwise, create a temporary pointer (temp) and set it to the head.

e. Traverse the list using temp until the second-to-last node is reached (where temp->next->next is NULL).

f. Create another temporary pointer (temp1) and set it to temp->next (the last node).

g. Update temp's next pointer to NULL, effectively removing the last node.

h. Delete the node pointed to by temp1.

8.In the main function:

a. Initialize a choice variable, a data variable, and the head of the linked list to NULL.

b. Enter a loop that allows the user to choose various linked list operations:

i. Adding a node at the beginning.

ii. Deleting a node from the beginning.

iii. Adding a node at the end.

iv. Deleting a node from the end.

v. Displaying the linked list.

vi. Exiting the program.

c. Depending on the user's choice, call the corresponding function from step 3.

d. Continue the loop until the user chooses to exit.

9.End.

This program provides a menu-driven interface for manipulating a singly linked list. The user can choose to insert or delete nodes from the head or the end of the list, display the list, or exit the program.
