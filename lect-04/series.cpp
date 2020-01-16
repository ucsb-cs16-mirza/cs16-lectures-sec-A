#include <iostream>
#include <cstdlib>
using namespace std;

double sumSeries_2(int n); 

int main(int numparams, char* listOfParams[]){
   //listOfParams is a list of strings
   //containing the actual paramaters
   //passed to main
   // Think of char* as a string
    cout<<"No. of params to main(): "
        <<numparams<<endl;
    cout<<"Parameter values: "<<endl;
    for(int i = 0; i< numparams; i++){
        cout<<listOfParams[i]<<endl;
    }
    int n = atoi(listOfParams[1]);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout<<"Sum of the series("<< n <<"): "<<
        sumSeries_2(n)<<endl;

    return 0;
}
// 1 + 2 + 3 + .... n

// 1 + 1/2 + 1/3 +  1/4 .... 1/n
double sumSeries_2(int n){
    double result = 0;
    for(int i = 1; i <= n ; i++){
         // i is the loop variable
         result = result + 1/static_cast<double>(i);
    }
    return result;

}

