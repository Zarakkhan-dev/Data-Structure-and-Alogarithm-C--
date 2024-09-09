#include<iostream>

using namespace std ;
class Student {
	public: 
		string Name ;
		string Reg ;
    	string Dept;
		float CGPA;
	
	public: 
		Student(){
			Name = "Zarak Khan";
			Reg  = "BSSE-FA20-044";
			Dept = "Software Engineering";
			CGPA = 3.54;
	}
	public: 
		Student(string name, string reg){
			Name = name ;
			Reg  = reg;
			Dept = "Software Engineering";
			CGPA = 3.54;
	}
	public: 
		Student(string name,string reg ,string dept,float cgpa){
			Name = name ;
			Reg  = reg;
			Dept = dept ; 
			CGPA = cgpa;
	}
	
	public: 
		void Set_Data(string name,string reg ,string dept,float cgpa){
			Name = name ;
			Reg  = reg;
			Dept = dept ; 
			CGPA = cgpa;
	}
	public: 
		void Get_Data(){
			cout << "Name is " << Name << endl;
			cout << "Registeration is " << Reg <<endl ;
			cout << "Department is " << Dept << endl ;
			cout << "CGPA is " << CGPA << endl;
	}
};
int main(){
	Student Student_1 ;
	Student Student_2("Farhan Khan" ,"BSSE-FA20-040") ; 
	Student Student_3("Sohail Khan","BSSE-FA20-030","BSCS",3.98) ;
	Student Student_4 ;
	Student_4.Set_Data("ALi Khan","BSSE-FA20-009","BSCS",3.88);
	Student_1.Get_Data();
	cout << "==========================================================\n";
	Student_2.Get_Data();
	cout << "==========================================================\n";
	Student_3.Get_Data();
	cout << "==========================================================\n";
	Student_4.Get_Data();
	return 0;
}
