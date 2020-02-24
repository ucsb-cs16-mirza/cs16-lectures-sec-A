#include <iostream>
using namespace std;

struct Node{
   int data;
   Node *next; //address of the next node
};

// create a two node linked list and return the head
// of the linked list
 Node* createSmallLinkedList(int x, int y){
    Node n1 = {x, 0}; // Node* n1 = new Node{x, 0}
    Node n2 = {y, 0};
    n1.next = &n2;
    return &n1;

 }
void printSmallList(Node *head, int len){
   cout<<head->data<<endl;
   cout<<head->next->data<<endl;
}

int main(){
   Node* head = createSmallLinkedList(10, 20);
   printSmallList(head, 2);
   return 0;
}
