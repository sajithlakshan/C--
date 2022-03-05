#include <iostream>
#include<string.h>
using namespace std;

class Animal {

public:
	Animal() {
    cout << "HARAKA" << endl;
  }

	virtual void speak() {}

};

class Cat : public Animal {
public:

	Cat(char tname[]) : Animal(){ 
    cout << "Meow... Meow..."<< tname << endl;}

};

class Dog : public Animal {
public:

	Dog(char tname[]): Animal(){ 
    cout << "Bow... Bow..."<< tname << endl;
    }

};
class Cow: public Animal {
public:

	Cow(char tname[]): Animal()  {
    cout << "Moo... Moo..."<< tname << endl;}

};
int main()
{
	Animal *ani[4];
	ani[0] = new Cat("Micky the Cat");
	ani[1] = new Dog("Rover the Dog");
	ani[2] = new Cow("roo the Cow");
	


return 0;
}
