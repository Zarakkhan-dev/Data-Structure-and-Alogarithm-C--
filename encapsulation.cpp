#include<iostream>

using namespace std;

class Student {
	private:
		int id;
		string name ;
	public:	
		Student () : id(0) , name ("no student"){};
		public:
		void set_Data(int Id , string Name){
			id = Id;
			name = Name;
		}
		public:
		void Get_Data(){
			cout << "\nStudent id : " << id << "\nStudent Name :  " << name;
		}
	
};
int main(){
	Student obj;
	obj.Get_Data();
	obj.set_Data(1,"Zarak");
	obj.Get_Data();
}
