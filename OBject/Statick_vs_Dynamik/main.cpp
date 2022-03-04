#include <iostream>

using namespace std;

class Student {
	private:
		string name;
	public:
		void setName(string n)
		{ 
			name = n;	
		}
		void printName();
};



void Student::printName() {
	cout << "Name : " << name << endl;
}

int main() {
	
	// Static
	Student s1;
	s1.setName("Thushara");
	s1.printName();

	// Dynamic
	Student *s2 = new Student();
	s2->setName("Thiwanka");
	s2->printName();
	delete s2;

	return 0;
}
