#include<iostream>
#include<conio.h>
using namespace std;

struct employee {
 int id;
 string name ;
 employee*address;
};

employee*Head = NULL;

void inseration(){
	employee *node  = new employee();
	
	cout << "Enter your Employee Id  : ";
	cin >> node->id;
	
	cin.ignore();
	cout << "Enter Your name : ";
	getline(cin,node->name);
	
	node->address = NULL;
	
	if(Head == NULL){
		Head = node;
	}
	else if(Head->address == NULL){
		Head->address = node;
	}
	else{
		employee*temp = Head ;
		
		while(temp){
			
			if(temp->address == NULL){
				temp->address = node;
			}
			
			temp = temp->address ;
		}
		
		
	}
}

void display_Record(){
	employee*temp = Head ;
	
	while(temp){
		
		cout << "Id of Employee : " << temp->id << endl << "Employee Name : " << temp->name << endl;
		
		temp = temp->address;
	}	
}
int main(){
	string option;
	while(option != "e"){
	    cout << " ===========================================================================" <<endl ;
	    cout << "|                                                                           |\n";
	    cout << "|                        Welcome to The Zarak Khan Program                  |\n";
	    cout << "|                                                                           |\n";
		cout << " ===========================================================================" <<endl ;
		cout << "|                                                                           | "<<endl;
		cout << "|                        Attendence of Employee                             |" <<endl ;
		cout << "|                                                                           | "<<endl;
		cout << "|                                                                           | "<<endl;
		cout << " ===========================================================================" <<endl ;
		cout << "|                                                                           | "<<endl;
		cout << "|                        1: Mark Attendence                                 | "<<endl;
		cout << "|                        2: Attendence Record                               | "<<endl;
		cout << "|                        e: exist                                           | "<<endl;
		cout << "|                                                                           | "<<endl;
		cout << " ===========================================================================" <<endl ;
		cout << "Select the option  :  ";
		getline(cin,option);
		if(option == "1"){
		  inseration();
		   getch(); 
		    system("cls");
		}
		else if(option == "2"){
			display_Record();
			 getch(); 
		    system("cls");
		}
		else if(option == "e"){
			cout << "Thank you using our System Zk Online Employee Attendence";
			 getch(); 
		    system("cls");
		}
	
		else{
			cout << "Invalid Selection,Try again and select the right option";
			 getch(); 
		    system("cls");
		}
		
	}
}
