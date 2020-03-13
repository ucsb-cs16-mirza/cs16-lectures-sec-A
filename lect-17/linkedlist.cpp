//linkedlist.cpp

#include <iostream>
using namespace std;
#include "linkedlist.h"
// Final exam - Tuesday 4p - 7p 
// Final review session - Friday
// Today:
// Practice - recursion and linked lists
// Dynamic memory pitfalls
// Evals
// Past exam questions

// Preconditions: linked list has at least one node
// Post condition: returns the min of the list (recursively)
int min(Node *h){
   // Base case
   if(h->next == 0){
      //one node list
      return h->data;
   }

   // 10->5->2->1->100
   // 10 , result (1)
   int result = min(h->next);
   //1->5->2->10->100
   // 1, result(2)
   if(result < h->data){
      return result;
   }else{
      return h->data;
   }

}

// Precondition: h may be null or the head of a valid linked list
// Postcondition: delete all the nodes with data (value)
// and return the new head of the list
// 10->20->30 value 20, 10->30, return the address of 10
// 10->20->30 value 10, 20->30, 
Node* deleteValue{Node *h, int value}{
   if(!h){
                 // h->data -segmatentation fault if h is null
                 // delete 0; is okay
      return 0;
   }   
   // recursive case
   Node *newNext = deleteValue(h->next, value);
   // (1) 10->20->30->10, value 10, return address of node 20
   //  10->20->30 , address of 20
   // (2) 10->10->20->30->10->40, value 10, return address of node 20
   //         20->30->40
   if(h->data == value){
       delete h;
       return newNext;
   }else{
   // (1) 200->20->30->10, value 10, return address of node 20
   //     200->20->30 , address of 20
   //   return h;
   // (2) 200->10->20->30->10->40, value 10, return address of node 20
   //     200->20->30->40
      h->next = newNext;
      return h;

   }

   

   


}

//Preconditiion - h is the head of a valid linked list
//Postcondition - insert a new node with data "value"
// at the head of the list and then return the new head

Node* insert(Node *h, int value){
   Node *n = new Node{value, h}; 
   return n;
}

void print(Node *h){
   Node *p = h;
   while(p){
      cout<<p->data<<" ";// process p
      p = p->next;
   }
   cout<<endl;
}

void clear(Node *&h){
   //delete h; // only deletes the first node
   Node *p = h;
   while(p){
      Node *q = p->next;
      delete p;
      p = q;
   }
   h = 0;
}
// 10->20
void clearRecursive(Node *h){
   if(!h){
      return;
   }
   clearRecursive(h->next);
   delete h; 
}
bool findRecursive(Node *h, int value){
   if(!h){
      return false;
   }
   if(h->data == value){
      return true;
   }
   return findRecursive(h->next, value);
}

bool find(Node *h, int value){
   Node *p = h;
   while(p){
      //Do something
      if(p->data == value){
         return true;
      }
      p = p->next;
   }
   return false;
}
//Node* insert(Node *h, int value);
void insert(LinkedList& ll, int value){
   ll.head = insert(ll.head, value);
   if(!ll.tail){
      //empty linked list   
      ll.tail = ll.head;
   }
   
}
bool find(const LinkedList& ll, int value){
   return find(ll.head, value);
}

void print(LinkedList ll){
   print(ll.head);
}
void clear(LinkedList& ll){
   clear(ll.head);
   ll.head = 0;
   ll.tail = 0;
}




int main(){
   //create a new linked list
   LinkedList list = {0, 0};  
   cout<<"Insert 10, 20"<<endl;
   insert(list, 10);//insert 10 at the head of the list
   insert(list, 20);
   cout<<"Print"<<endl;
   print(list); // 20, 10
   cout<<"Clear nodes"<<endl;
   clear(list);
   cout<<"Print"<<endl;
   print(list); // 20, 10
   return 0;
}
