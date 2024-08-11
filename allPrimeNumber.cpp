#include<iostream>

using namespace std;

int main(){
	 int number  ; 
	 
	cout  << "Enter The The range to to get the prime number  : " ;
	cin >> number ;;
	
	for(int i = 2 ; i <= number ; i ++){
		for ( int j = 2 ; j <= i ; j ++){
			if( i ==2){
				cout <<  i << " is a prime Number" <<endl ;
				break;
			}
			else if ( i  == j){
				cout << i << " is a prime number" << endl;	
				break;
			}
			else if ( i % j == 0  ){
				cout << i <<" is non- Prime number" << endl ;
				break;
			}
		}

	}
}
