#include <iostream>
#include "SupplyOrder.h"
#include <cstring>

SupplyOrder::SupplyOrder()
{
  strcpy(supplyOrderID, "");
  totalAmount = 0;
  product = 0;
  supplier = 0;
  payment = 0;
}
  
SupplyOrder::SupplyOrder(const char id[10], float amount, Product *p, Supplier *s, Payment *pay)
{
  strcpy(supplyOrderID, id);
  totalAmount = amount;
  product = p;
  supplier = s;
  payment = pay;
}

void SupplyOrder::calculateAmount()
{
  
}
      
void SupplyOrder::getSupplyOrderId(char *a)
{
  strcpy(a, supplyOrderID);
}
      
SupplyOrder::~SupplyOrder()
{
  std::cout << "Destructor runs" << std::endl;
}