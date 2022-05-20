#include <iostream>
#include <cstring>
#include "Employee.h"
#include "Feedback.h"
#include "MaintenanceTeam.h"
#include "Offer.h"
#include "Order.h"
#include "OrderDetail.h"
#include "Payment.h"
#include "Product.h"
#include "RegisteredUser.h"
#include "Supplier.h"
#include "SupplyOrder.h" 

using namespace std;

int main() {

  //_____________-----------------Objects Creation-----------------_____________

  RegisteredUser *emp1 = new Employee("USR-001", "kamal", "kamal123", "Kamal Perera", "0716598321","12 road Kandy", "kamalperera@gmail.com","EMP-001", 50000);

  MaintenanceTeam *mbr1 = new MaintenanceTeam("USR-002", "kusal", "kusal4562", "Kusal Walpola", "0713265491","658 Malabe", "kusalw@gmail.com","MT-001", 60000);

  Supplier *sup1 = new Supplier("SUP-001", "ABC Company", "Masks and Sanitization", "25/8 Samagi road,Malabe", "0716598345");


  Product *pdt1 = new Product("PDT-0001", "Facemask", 100, 500, 50);

  Offer *off1 = new Offer("OFF-001", 50);

  RegisteredUser *usr1 = new RegisteredUser("USR-001", "malith2022", "malith@123", "Malith K.", "754 Nuwara-Eliya", "malithk22@gmail.com", "0716598412");

  Order *odr1 = new Order("ODR-001", 5510, usr1);

  OrderDetail *odt1 = new OrderDetail("ODT-001", 1, 2500); 
  OrderDetail *odt2 = new OrderDetail("ODT-002", 10, 3010); 

  Payment *pay1 = new Payment("PAY-001", 5510, 5000);
  Payment *pay2 = new Payment("PAY-002", 50000, 50000);

  Feedback *feed1 = new Feedback("FEED-001", "Quality products!");

  SupplyOrder *so1 = new SupplyOrder("SO-001", 50000, pdt1, sup1, pay2);


 //_____________-----------------method call-----------------_____________

  emp1 -> displayDetails();
  mbr1 -> displayDetails();
  usr1 -> displayDetails();

  
 //_____________-----------------Deallocate memory-----------------_____________
 
  delete emp1;
  delete mbr1;
  delete sup1;
  delete pdt1;
  delete off1;
  delete usr1;
  delete odr1;
  delete odt1;
  delete odt2;
  delete pay1;
  delete pay2;
  delete feed1;
  delete so1;
 
  cout << "Sdsa";
  return 0;
}