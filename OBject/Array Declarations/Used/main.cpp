#include <iostream>
using namespace std;

class Box
{
	public:
		Box(){
			cout << "Constructe Called" << endl;
		}
		~Box() {
			cout << "Destructor Called" << endl;
		}
	

};
int main() {
	
	Box* myarray = new Box[4];
	delete [] myarray;   //Delete array
	return 0;
}
