/*Name-SANYA JAITLY
PRN-22070123100
Exp-17(Part-A)
Program to implement Singly Linked List in C++ using Class
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;

    Node(int data){
        val = data;
        next = NULL;
    }

};
int main(){
    Node*n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}
/*Output
1 0
*/

/*

Exp-17(Par-B)
*/
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;  // Use '=' instead of '*'
        next = NULL;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;  // Update the new node's next pointer
    head = new_node;  // Update the head to point to the new node
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    return 0;
}
/*Output
2 -> NULL
1 -> 2 -> NULL
*/
/*Name-Purvansha Gehlod
PRN-22070123088
Exp-17(Part-C)*/
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int data);
void delAtHead(Node* &head);
void display(Node* head);
void insertAtEnd(Node* &head, int val);
void deleteAtEnd(Node* &head);

int main() {
    int choice, data;
    Node* head = NULL;

    while (1) {
        cout << "1. Add node at start" << endl;
        cout << "2. Del node at start" << endl;
        cout << "3. Add node at end" << endl;
        cout << "4. Del node at end" << endl;
        cout << "5. Display Linked List" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Enter Your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data for new node: ";
                cin >> data;
                insertAtHead(head, data);
                break;
            case 2:
                delAtHead(head);
                break;
            case 3:
                cout << "Enter data for new node: ";
                cin >> data;
                insertAtEnd(head, data);
                break;
            case 4:
                deleteAtEnd(head);
                break;
            case 5:
                display(head);
                break;
        }
    }
}

void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void delAtHead(Node* &head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void insertAtEnd(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void deleteAtEnd(Node* &head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
}
/*Output
1. Add node at start
2. Del node at start
3. Add node at end
4. Del node at end
5. Display Linked List
6. Exit

Enter Your choice : 1
Enter data for new node: 123
1. Add node at start
2. Del node at start
3. Add node at end
4. Del node at end
5. Display Linked List
6. Exit

Enter Your choice : 3
Enter data for new node: 1234
1. Add node at start
2. Del node at start
3. Add node at end
4. Del node at end
5. Display Linked List
6. Exit

Enter Your choice : 5
123->1234->NULL
*/