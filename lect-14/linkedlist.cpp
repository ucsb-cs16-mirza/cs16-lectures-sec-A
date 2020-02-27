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

struct LinkedList{
   Node *head; // pointer to the first node
   Node *tail; //pointer to the last node
};

 Node* createSmallLinkedList(int x, int y);
 void printSmallList(Node *head, int len);
 Node* insert(Node *h, int value);
 bool find(Node *h, int value);
 int min(Node* h);
 void print(Node *h);
 void clear(Node *&h);

//void insert(LinkedList ll, int value); 
void insert(LinkedList& ll, int value); 
// insert(list, 40);
bool find(const LinkedList& ll, int value);

/*A. bool find(LinkedList ll, int value);
B. bool find(LinkedList& ll, int value);
C. bool find(const LinkedList& ll, int value);
D. Any of the above
E. None of the above*/
// A or C

void print(const LinkedList& ll);
void clear(LinkedList& ll); //modify the head and tail pointers


void insert(LinkedList& ll, int value){
   if(!ll.head){
      //empty linked list
      ll.head = insert(ll.head, value);
      ll.tail = ll.head;

   }else{
      ll.head = insert(ll.head, value);
   }
}
//bool find(Node *h, int value)
bool find(const LinkedList& ll, int value){
   return find(ll.head, value);
}
int min(const LinkedList& ll){
   return 42;
}
void print(const LinkedList& ll){
   print(ll.head);
}
void clear(LinkedList& ll){
   clear(ll.head);
   ll.head = 0;
   ll.tail = 0;
} //modify the head and tail pointers


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
   return n;
}

// checks if a given values exists in the list
bool find(Node *h, int value){
   Node *p = h;
   while(p){
      if(p->data == value){
         return true;
      } 
      p = p->next;
   }
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
   // create a new linked list
   LinkedList list;
   insert(list, 10);
   insert(list, 20);
   cout<<"Insert 10, then 20"<<endl;
   cout<<"print"<<endl;
   print(list); // 20, 10
   clear(list);
   cout<<"Print empty list"<<endl;
   print(list);
   return 0;
}
