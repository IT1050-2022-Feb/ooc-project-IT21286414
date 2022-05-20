#pragma once
#include "Product.h"

class OrderDetail
{
private:
	char itemID[10];
	int quantity;
	float amount;
  Product *product;
    
public:
	OrderDetail();
	OrderDetail(const char id[10], int qty, float pamount);
  void additem(Product *p);
	void calcutateAmount();
	~OrderDetail();
};