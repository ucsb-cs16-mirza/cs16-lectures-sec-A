#include <iostream>
using namespace std;
/*
- C++ datatypes and variables
*/
int main(){
    int x; //Declare the variable
    x = 10;
    char c = 'a'; //Declare and initialize
    bool var;
    double z;
    string name = "Seinfeld";
    //Always initialize your variables!
    cout << z;
    int year = 2020;
    z = 1.0/10;
    bool w = true;
    w = x!=10;
    /* !=, <, >, <=, >= */
    w = x;
    A. true
  
    w = 0;
    //In C++, 0 is false, every other int value
    //evaluates to true
    w = x<-1;
    /* Logical operators */
    /* && (AND), || (OR), ! (NOT)*/
    w = false;
    w = !w;
    w =  x && x < -1;
    if(x < 0){
        cout<<x<<" is a negative"<<endl;
    }else{
        cout<<x<<" is positive"<<endl;
    }
    x = 9;
    x = x % 3; // x is 0
   return 0; 
}
