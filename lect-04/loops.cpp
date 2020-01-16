#include <iostream>
using namespace std;

int sumSeries_1(int n); //declaration
double sumSeries_2(int n); 

int main(){
    cout<<"Sum of the series: 1 + 2 + 3: "<<
        sumSeries_1(3)<<endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    cout<<"Sum of the series: 1 + 1/2 +...1/7: "<<
        sumSeries_2(7)<<endl;
    return 0;
}
// 1 + 2 + 3 + .... n
int sumSeries_1(int n){
    int result = 0;
    for(int i = 1; i <= n ; i++){
         // i is the loop variable
         result = result + i;
    }
    return result;

}
// 1 + 1/2 + 1/3 +  1/4 .... 1/n
double sumSeries_2(int n){
    double result = 0;
    for(int i = 1; i <= n ; i++){
         // i is the loop variable
         result = result + 1/static_cast<double>(i);
    }
    return result;

}

void while_loop(){
    char response = 'y';
    while(response == 'y'){
        //code
        cout<<"Continue?: ";
        cin>>response;
    }

}