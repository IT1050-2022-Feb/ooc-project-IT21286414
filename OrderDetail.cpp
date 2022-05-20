#include <iostream>
#include <cstring>
#include "OrderDetail.h"

OrderDetail::OrderDetail()
{
	strcpy(itemID, "");
	quantity = 0;
	amount = 0;	
}

OrderDetail::OrderDetail(const char id[10], int qty, float pamount)
{
	strcpy(itemID, id);
	quantity = qty;
	amount = pamount;	
}

void OrderDetail::calcutateAmount()
{
	
}

void OrderDetail::additem(Product *p)
{
  product = p;
}

OrderDetail::~OrderDetail()
{
    std::cout << "Destructor runs" << std::endl;
}
