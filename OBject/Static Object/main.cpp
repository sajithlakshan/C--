#include <iostream>  
using namespace std;  
class Base {
   public :
   int func() {
      int a = 20;
      cout << "The value of a : " << a;
   }
};
int main()  
{  
   static Base b;
   b.func();
 
return 0;  
}  
