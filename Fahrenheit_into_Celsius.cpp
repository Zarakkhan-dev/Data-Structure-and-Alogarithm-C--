#include<iostream>

using namespace std;

int main(){
	
	float temperature;
	
	cout << "Enter The Temperature in Fahrenheit  : ";
	cin >>temperature;
	
	double celsius;
	celsius = (temperature - 32) / (9.0 / 5.0) ;
	
	cout << "Temperature in Celsius " << celsius ;
	
	return  0 ;
}
