#include <iostream>
#include <cstring>
#include "Order.h"


Order::Order()
{
	strcpy(orderID, "");
	totalAmount = 0;
	user = 0;
}

Order::Order(const char id[10], float amount, RegisteredUser *puser)
{ 
	strcpy(orderID, id);
	totalAmount = amount;
	user = puser;
}

void Order::calculateAmount()
{

}

void Order::getOrderId(char *a)
{
	strcpy(a, orderID);
}

void Order::displayOrder()
{
  
}
void Order::addOrderDetails(OrderDetail *od1, OrderDetail * od2)
{
  OD[0] = od1;
  OD[1] = od2;
}

void Order::pay(Payment *p)
{
  payment = p;
}
Order::~Order()
{
	std::cout << "Destructor runs" << std::endl;
}
