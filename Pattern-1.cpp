#include<iostream>
using namespace std;

int main(){
	for(int i = 1 ; i < 10 ; i ++){
		for (int j = 10 ; j > i ; j--){
			cout << "*";
		}
	    for(int k=1 ; k < i ; k++)
	    {
	    	cout << " ";
		}
		    for(int z=1 ; z < i ; z++)
	    {
	    	cout << " ";
		}
			for (int j = 10 ; j > i ; j--){
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}
