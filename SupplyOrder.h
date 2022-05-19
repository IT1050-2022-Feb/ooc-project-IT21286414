#pragma once
#include "Product.h"
#include "Supplier.h"

class Payment;

class SupplyOrder {
	private:
		char supplyOrderID[10];
		float totalAmount;
    Product *product;
    Supplier *supplier;
    Payment *payment;

	public:
		SupplyOrder();
		SupplyOrder(const char id[10], float amount, Product *p, Supplier *s, Payment *pay);
		void calculateAmount();
		void getSupplyOrderId(char *a);
		~SupplyOrder();
};
