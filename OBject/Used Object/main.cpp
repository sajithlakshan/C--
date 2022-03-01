#include <iostream>
#include <string>
using namespace std;

class Student {
	int rno;
	char name[10];
	public:
		void read()
		{
			cout << "Enter Rool Number" << endl;
			cin >> rno;
			cout << "Enter Name" << endl;
			cin >> name;
			
		}
		void print()
		{
			cout << "Roll No=" << rno << endl;
			cout << "Name ="  << name << endl;
		}
};

int main()
{

	cout << "*********Dianamick*********"<< endl;
	Student *p;
	p= new Student;
	cout << "-----Enter Student Details------" <<endl;
	p-> read();
	delete p;
	

  return 0;
}
