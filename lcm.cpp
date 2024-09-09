#include<iostream>

using namespace std ;

int main(){
	int number ;
	
	cout << "Enter The Number for L.C.M : "; 
	cin >> number ;
	int result = number;
	while(result > 0  ) {
		if(number % result == 0  ){
			cout << " Lcm " << result << endl;
		}
		result--;
	}
	
	return 0;
}
