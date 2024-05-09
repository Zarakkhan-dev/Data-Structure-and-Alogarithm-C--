#include<iostream>
#include<conio.h>
using namespace std;


struct nodetype{
	int number;
	string name;
	
	nodetype*address;
};

nodetype*Head = NULL;

void insertion(){
	nodetype*node = new nodetype();
	
	cout << "Enter The node number : ";
	cin >>node->number;
	
	cin.ignore();
	cout << "Enter The node name : ";
	getline(cin,node->name);
	
	node->address =NULL;
	
	if(Head== NULL){
		Head = node;
	}
	else if(Head->address == NULL){
		Head->address = node;
	}
	else{
		nodetype*temp = Head;
		
		while(temp){
			if(temp->address == NULL){
				temp->address =node;
				break;
			}
			temp = temp->address;
		}
	}
} 

void display(){
	nodetype*temp = Head;
	
	while(temp){
	cout << "Node Number is  ... " << temp->number <<endl << "Node Name is ..." << temp->name  << endl <<endl ;
		temp = temp->address;
	}
}
void Menu_Selection_Display(){
	cout <<" =====================================================================\n";
	cout <<"|                                                                     |\n";
	cout <<"|                  Welcome to The Zarak Khan Program                  |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                       Creating Linked List                          |\n";
	cout <<"|_____________________________________________________________________|\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      1 : Add nodes                                  |\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      2 : Display Nodes                              |\n";
	cout <<"|                                                                     |\n";
	cout <<"|                      3 : Exit                                       |\n";
	cout <<"|                                                                     |\n";
	cout <<" =====================================================================\n";
}
int main(){	
	int selection ;
	
	while(selection!=3){
		Menu_Selection_Display();
		cout<< "Enter The number for Selection ....  :" ;
		cin>>selection;
         system("cls");
		if(selection == 1){
			int number;
			cout << "How many nodes Do you want to Add : ";
			cin >> number;
			for(int i = 0 ; i < number ; i++ ){	
                insertion();
               }
		    getch(); 
		    system("cls");
	    }
	    else if(selection ==2){
	    	display();
			getch(); 
		    system("cls"); 
		}
	    else{
	    	cout << "Invalid Number ";
	    	getch();
		}
		
	}
}
