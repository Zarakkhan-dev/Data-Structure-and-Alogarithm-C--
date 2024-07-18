#include<iostream>
using namespace std;
int main(){
	int number;
	
	cout << "Enter to Find the Prime Number  : ";
	cin >> number ;
	
	for(int i = 2 ; i < number ; i ++){
		if (number % i ==0 ) {
			cout<< number << " is a Non-Prime Number  ";
			break;
		}
		else if (number == i+1){
			cout << number << " a Prime number ";
		}
	}
}
