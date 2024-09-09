#include<iostream>

using namespace std; 
int main(){
	
	int natural_Number[10] = {1,2,3,4,5,6,7,8,9,10};
	int stop;
	int size =  sizeof(natural_Number) /sizeof(natural_Number[0]) ;
	cout << "How many natural number sum do you want : ";
	cin >> stop;
	
	int sum = 0;
	for (int i = 0 ; i < size ;i++){
		if ( i == stop){
			break;
		}
		sum += natural_Number[i];	
	}
	
	cout << "Sum of "  << stop << " are " << sum;
	
	return 0;
}
