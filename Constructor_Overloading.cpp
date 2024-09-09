#include<iostream>

using namespace std;

class Student{
	public:
		int id;
		string name ;
	public:
		Student (): id(0) , name("no Student"){}
		Student(int Id , string Name) : id(Id) , name(Name){}
	
	void Display(){
		cout << "Student id is " << id << "\nStudent Name is " << name;
	}
};
int main(){
	Student obj;
	Student obj1(1,"Zarak");
	obj.Display();
	cout << endl ;
	obj1.Display();
}
