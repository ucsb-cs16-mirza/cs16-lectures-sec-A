#include <iostream>
using namespace std;
//Practice loops: nested loops
//Test Driven Development: Think about testing first!
//In life outside CS16, there is no gradescope
/*

   width = 1
   *

   width = 2
   **
   **

   width = 3
   ***
   ***
   ***
 */
//stub function
string drawSquare(int width){
	//Generate a single row
	/*string result = "";
	for(int i = 0; i < width; i++){
		result+="*";
	}
	result+= "\n";
	string finalResult = "";
	for(int i = 0; i < width; i++){
		finalResult+= result;
	}

	return finalResult;
	*/
	string result = "";
	for(int row = 0; row < width; row++){
		for(int col = 0; col < width; col++){
			result+="*";
		}
		result+="\n";
	}
	return result;

}
/* 
 A.
(0, 0) 
 0 1 
 1 0 
 1 1
 B.
 0 0 
 1 0
 0 1 
 1 1
 C. Something else
 */

string drawRTriangle(int width){
	string result = "";
	for(int row = 0; row < width; row++){
		for(int col = 0; col < width; col++){
			if(row >= col){
			    result+="*";
			}else{
				result+="-";
			}
		}
		result+="\n";
	}
	return result;

}
/* Precondition: width >=3
 *
 * */
string drawTriangle(int width){
	string result = "";
	if(width%2 == 0){
		return result ;
	}
	int height = (width+1)/2;
	int numSpace = width/2;
	int numStar = 1;
	for(int row = 0; row < height; row++){
       for(int space = 0; space < numSpace; space++){
		   result+="-";
	   }
       for(int star = 0; star < numStar; star++){
		   result+="*";
	   }
       for(int space = 0; space < numSpace; space++){
		   result+="-";
	   }
	   numSpace--;
	   numStar+=2;
	}
		result+="\n";
	}
	
	return result;
}



void test_RTriangle(){
	cout<<"drawRTriangle(3):\n"<<drawRTriangle(3)<<endl;
}

void test_square(){
	cout<<"drawSquare(1):\n"<<drawSquare(1)<<endl;
	cout<<"drawSquare(2):\n"<<drawSquare(2)<<endl;
	cout<<"drawSquare(3):\n"<<drawSquare(3)<<endl;
	cout<<"drawSquare(4):\n"<<drawSquare(4)<<endl;
	cout<<"drawSquare(5):\n"<<drawSquare(5)<<endl;
	cout<<"drawSquare(6):\n"<<drawSquare(6)<<endl;
}

int main(){
	//Testing
	//
	//test_square();
	test_RTriangle();
	return 0;
}

