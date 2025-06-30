#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printLl(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node();
    Node* first = new Node();

    head->data = 10;
    head->next = first;

    first->data = 12;
    first->next = nullptr;

    printLl(head);

    return 0;
}

