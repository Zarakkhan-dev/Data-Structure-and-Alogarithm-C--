#include<iostream>

using namespace std ;

int main (){
	// 1234   4321   
	int number;
	int reverse_Number  = 0; 
	cout << "Enter your Number : ";
	cin >> number;
	
	cout << "Number is  " << number << endl;
	while(number > 0){
		int remainder =  number % 10 ;
	    reverse_Number = (reverse_Number * 10) + remainder;
		number /= 10;
	}
	cout <<  "Reverse of Number : " << reverse_Number  << endl;
}


// First Iteration 
		    //number 1234
// remainder   1234 % 10   = 4

// reverse = reverse * 10 + 4						 reverse = 0*10 + 4
// number 1234 / 10 =  123                        

//Second Iteration 
		    //number 123
// remainder   123 % 10   = 3

// reverse = reverse * 10 + 3					 reverse = 4*10 + 3 = 40 +3 = 43
// number 123 / 10 =  12                        

//Third Iteration 
		    //number 12
// remainder   12 % 10   = 2

// reverse = reverse * 10 + 2						 reverse = 43*10 + 2 = 430 +2 = 432
// number 12 / 10 =  1     

//Third Iteration 
		    //number 1
// remainder   1 % 10   = 1

// reverse = reverse * 10 + 2						 reverse = 432*10 + 1 = 4320 +1 = 4321
// number 1 / 10 =  0   0.1   

// number 1234
//reverse 4321 number =0.1   
