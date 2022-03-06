#include <iostream>

using namespace std;

class Student {
	private:
		string name;
	public:
		void setName(string n);
		void printName();
		string  getName(){
			return name;
		}
		void print(){
			cout<< this->getName() <<endl;
		}
};

void Student::setName(string n) {
	name = n;
}



int main() {
	
	// Static
	Student s1;
	s1.setName("Thushara");
	s1.print();


	// Dynamic
	Student *s2 = new Student();
	s2->setName("Thiwanka");
	s2->print();
	delete s2;

	return 0;
}
