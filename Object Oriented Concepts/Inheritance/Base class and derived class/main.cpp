# include <iostream>
using namespace std;
class Person{
protected : 
	char name[20]; 
	char address[20];
	int age;
public:
	Person(){};
	void display() {
	cout << "this is person class" << endl;
	}
	void displayDetails();
};

class Student : public Person{
protected : 
	int studentNo;
	double GPA; 
public:
	Student(){};
	void display() {
	cout << "this is student class. derived class from person" << endl;}
	void calGPA();
};
class Employee : public Person{
protected : 
	int empNo;
	double salary;
public:
	Employee(){};
	void display() {
	cout << "this is employee class.Derived class from person"<< endl; }
	void calSalary();
}; 
int main() {
	Employee *EM;
	EM->display(); 															
	return 0;
}
