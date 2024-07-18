#include<iostream>

using namespace std;

int main(){
	 int number  ; 
	 
	cout  << "Enter The The range to to get the prime number  : " ;
	cin >> number ;
	int temp = 2 ;
	
	for(int i = 0 ; i < number ; i ++){
		for (int j = i ;  j <= i ; j ++){
			if ( i % temp == 0){
				break;
			}
			cout << "prime Number is " << i  << endl;
		}

	}
}
