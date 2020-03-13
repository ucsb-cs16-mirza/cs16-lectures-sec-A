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

// Memory errors: dynamic memory (heap)
// 1. Segmentation faults: Access memory location that does not exist
// or the programmer does not have persmission to access

int foo(){
   int *p = 0; // p has junk value
   // it could have a value that's not within the range of
   // valid heap memory, or that memory location may not physically exist
   cout<<p<<endl; //fine
   cout<<&p<<endl; // fine
   cout<<*p<<endl; // may cause a segfault if p is 0 or 
                   // p has a bad value

   Node *h;
   cout<<h<<endl; //fine
   cout<<&h<<endl; // fine
   cout<<h->data<<endl; // not fine, may cause a segfault if h is 0 or 
                        // has a bad value 
                   
   cout<<h->next<<endl;

   h = new Node; // h->data, h->next is fine
   delete h; // is fine
   Node n1;
   h = &n1; 
   delete h; // is not fine, deleting something on the stack
             // memory error, bus error, abort dump
   
}



// Please refer to the lect-17 for section B for a more 
// complete discussion