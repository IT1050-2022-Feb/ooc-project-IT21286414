#pragma once
#include "OrderDetail.h"

class Payment;

class RegisteredUser;

#define SIZE 2

class Order {
	private:
		char orderID[10];
		float totalAmount;
		RegisteredUser *user; 

    OrderDetail *OD[SIZE];

    Payment *payment;

	public:
		Order();
		Order(const char id[10], float amount, RegisteredUser *puser);
		void calculateAmount();
    void addOrderDetails(OrderDetail *od1, OrderDetail * od2);
		void getOrderId(char *a);
    void displayOrder();
    void pay(Payment *p);
		~Order();
};