#include <iostream>
#include<string.h>
using namespace std;

class Animal {
protected:
	char tname[];
public:
	Animal() {}

};

class Cat : public Animal {
public:
	Cat() {}
	Cat(char tname[]) {
  		cout << "Meyaw...Meyaw.." << tname << endl;
	}

};
class Dog : public Animal {
public:
	Dog() {}
	Dog(char tname[]) {
  		cout << "Bow... Bow..." << tname << endl;
	}

};
class Mous : public Animal {
public:
	 Mous() {}
	 Mous(char tname[]) {
  		cout << "Choos...Choos" << tname << endl;
	}

};


int main()
{
	Animal *ani[4];
	ani[0] = new Cat("Micky the Cat");
	ani[1] = new Dog("Nakutu Balla");
	ani[2] = new Cat("Sakkili Miya");

return 0;
}
