// Ways of organizing data (sequences) in programs:
// Data structures 
// (1) Arrays
// (2) Linked Lists (each data maybe stored at a different
//     memory location)
// General operations for any data structure
/*
- insert a value, at the head of the list, at the end of list
  insert at any spot in between
- find a value
- count of the number of values
- min or max
- print all the elements
- delete all the values
- delete a specific value
- sort
*/


#include <iostream>
using namespace std;

struct Node{
   int data;
   Node *next; //address of the next node
};

// create a two node linked list and return the head
// of the linked list
 Node* createSmallLinkedList(int x, int y){
    // Node n1 = {x, 0}; // Node* n1 = new Node{x, 0}
    // Node n2 = {y, 0};
    // n1.next = &n2;
    Node *n1 =  new Node{x, 0};
    Node *n2 =  new Node{y, 0};
    n1->next = n2;
    return n1;

 }
void printSmallList(Node *head, int len){
   cout<<head->data<<endl;
   cout<<head->next->data<<endl;
}
// insert a new node with value "value"
// at the head of the list
Node* insert(Node *h, int value){
   Node* n = new Node{value, h};
   /*if(!h){
      return n;
   }else{
      n->next = h;
      return n;
   }*/
   return n;
}

// checks if a given values exists in the list
bool find(Node *h, int value){
   return false;
}

int min(Node* h){
   return 42;
}

void print(Node *h){
   Node *p = h;
   while(p){
      cout<< p->data <<" ";
      p = p->next;
   }
   cout<<endl;
}

void clear(Node *&h){
   Node *p = h;
   while(p){
      Node *q = p->next;
      delete p; 
      p = q;
   }
   h = 0;
   return;
}

int main(){
   Node *head = 0;  // create an empty linked list
   head = insert(head, 10);
   head = insert(head, 20);
   cout<<"Insert 10, then 20"<<endl;
   cout<<"print"<<endl;
   print(head); // 20, 10
   clear(head);

   return 0;
}
