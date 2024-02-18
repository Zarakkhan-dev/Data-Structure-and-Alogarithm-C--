#include<iostream>
#include <stdlib.h>
#include<conio.h> 
using namespace std;


void Scholarship_Checker(float cgpa){

	
	 if(cgpa >= 3.5 && cgpa <=4){
	 	cout << "Full-funded Scholarship Applied \n";
	 }
	 else if(cgpa >= 3.0 && cgpa < 3.5 )
	 {
	 	cout << "20% scholarship Applied \n";
	 }
	 else if(cgpa <= 3.5 && cgpa >=2.5 ){
	 	cout << "Only Eligible for admission,Scholarship not applicable \n";
	 }
	 else if(cgpa < 2.5 && cgpa > 1){
	 	cout << "Not Elgible for Admission \n";
	 }
	 else{
	 	cout << "Enter the Invalid cgpa Correct the cgpa  from 1 to 4 \n";
	 }
	
}

void Menu_Selection_Display(){
	cout <<" =====================================================================\n";
	cout <<"|                                                                     |\n";
	cout <<"|                 Welcome to The University of XYZ                    |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                    Eligibility of Scholarship                       |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      1 : Check Eligibility                          |\n";
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
			float number;
			cout << "Enter your CGPA : " ;
			cin >> number;
			Scholarship_Checker(number);
		     getch(); 
		     system("cls");
	    }
	    else{
	    	cout << "Invalid Number ";
	    	getch();
		}
		
	}

}
