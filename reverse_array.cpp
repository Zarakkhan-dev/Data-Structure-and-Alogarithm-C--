#include<iostream>

using namespace std ;

int main(){
	int arr[5] = {1,2,3,4,5};
	
	int size  =  sizeof(arr) / sizeof(arr[0]);
	int reverse_array[size];
	for(int i = 0 ; i < size ; i ++){
		reverse_array[i] = arr [size-i-1];
	}
		cout << " Simple Array is :" ;
		for(int i = 0 ; i < size ; i++){
		cout << arr[i];
	}
		cout <<endl <<  " Reverse of Array is :";
	for(int i = 0 ; i < size ; i++){
		cout << reverse_array[i];
	}
}
