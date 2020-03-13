#include <iostream>
using namespace std;
// given an array and a value, return the index of
// the element with that value  (if the value exists
// in the array), otherwise, return -1
// example: 10, 20     v = 5
int binarySearch(int arr[], int v, int lo, int hi){
   // lo = 0, hi = 1
   if(lo > hi){
      return -1;
   }
   if(lo == hi){ // case 1: one-element array
      if(arr[lo]== v){
         return lo;
      } else{
         return -1;
      }
   }
   // case 2//
   int mid = (lo + hi)/2; // mid = 0
   if(arr[mid]==v){
      return mid;
   }
   if(v<arr[mid]){
      //search the array to the left of mid
      return binarySearch(arr, v, lo, mid-1 );  // lo =0, hi = -1    
   } else{
      //search the array to the right of mid
      return binarySearch(arr, v, mid+1, hi); 
   }
 //Do we get -1?
 /*A. Yes
 B. No, has a bug */
}
int main(){
   //create a new linked list
   int arr[]={10, 20, 30, 40, 50, 60, 88, 100};
   cout<< binarySearch(arr, 30, 0, 7 )<<endl;
   return 0;
}