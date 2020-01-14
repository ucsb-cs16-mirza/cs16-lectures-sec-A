#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    bool fizzbuzz = false;
    if(num%3 == 0){
        
        cout<<"fizz";
    }else if(!(num%5)){
        cout<<"buzz";
    }else{
        cout<<num<<endl;
    }
    return 0;
}