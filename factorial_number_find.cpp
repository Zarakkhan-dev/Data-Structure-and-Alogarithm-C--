#include<iostream>
#include<conio.h>
using namespace std;


int factorial(int n ){
	if(n == 1){
		return n;
	}
	else{
		return n* factorial(n-1);
	}
}

void Menu_Selection_Display(){
	cout <<" =====================================================================\n";
	cout <<"|                                                                     |\n";
	cout <<"|                  Welcome to The Zarak Khan Program                  |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                     Find the Factorial Number                       |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      1 : Enter The Number                           |\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      2 : Exit                                       |\n";
	cout <<"|                                                                     |\n";
	cout <<" =====================================================================\n";
}
int main(){
	
	int selection ;
	
	while(selection!=2){
		Menu_Selection_Display();
		cout<< "Enter The number for Selection ....  :" ;
		cin>>selection;
         system("cls");
		if(selection == 1){
			int number;
			cout << "Enter The number to find the Factorial of Number : ";
			cin >> number;
			cout << "Factorial of Number is : " << factorial(number);
		     getch(); 
		     system("cls");
	    }
	    else{
	    	cout << "Invalid Number ";
	    	getch();
		}
		
	}

	
}
