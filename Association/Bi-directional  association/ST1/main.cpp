#include <iostream>
#include <cstring>

using namespace std;
// Bi-directional Association

 #define SIZE 10


 class Order;

 class Customer
 {
 private:
 	string name;
 
 	Order *order[SIZE];   ///#
 	int noOfOrders;

 public:
 	Customer();
 	Customer(string pname){
	      name = pname;
	      noOfOrders = 0;	
	 	  
	 }
 	
 	
 	void addOrder(Order *O)
	 {
      if (noOfOrders < SIZE) {
     	order[noOfOrders] = O;
 		}
     noOfOrders++;		
     cout<<noOfOrders<<endl;
	 }
	 void display(){
	 	cout<<noOfOrders<<endl;
	 	cout<<name<<endl;
	 }
 
 };



//#############################################################
 class Order
 {
 private:
    	string orderID;
    	Customer *Cus;        ///#
   
 public:  
    	Order(string	porderID,  Customer *pCus){
	      orderID = porderID;
	      Cus = pCus;
   	      Cus->addOrder(this)   ;		
		}
    	
 };




 int main()
 {
 	Customer *C1 = new Customer("Thushara");
 	Customer *C2 = new Customer("Ashen" );

 	Order *O1 = new Order("001", C1);
 	Order *O2 = new Order("002",  C2);
 	Order *O3 = new Order("002",  C2);
 	
 	C2->display();
 


 	return 0;
 }
