#include <iostream>
using namespace std;
/* Definition of a function */
void printHello(); // forward declaration
string returnHello();

/* Write a function that returns the sum of the series
1+ 1/2 + 1/3 + 1/4 + ....1/N
For a parameter (int) N
*/
double sumSeries(int N);

void printFiveHellos(){
    int count = 0;
    while(count < 5){
        cout<<"Hello\n";
        count = count + 1; //count++;
    }
} 

void printNHellos(int N){
    int count = 0;
    while(count < N){
        cout<<"Hello\n";
        count = count + 1; //count++;
    }
} 
int main(){
    printHello(); // calling the function
    printNHellos(6);
    /*cout<<returnHello();
    
    A. Hello 
       Hello

    B. Hello //right answer
    C. Something else
    */
    return 0;
}

void printHello(){
    cout<<"Hello\n";
}

string returnHello(){
    string res = "Hello";
    return res;
}