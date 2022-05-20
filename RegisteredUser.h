#pragma once

class Order;

class RegisteredUser
{
protected:
	char userID[10];
	char username[100];
	char password[100];
	char name[100];
	char address[100];
	char email[100];
	char contactNumber[10];
	Order *orders[100];		//Bi-directional Association
	
public:
	RegisteredUser();
	RegisteredUser(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10]);
	void login();
	void logout();
	void placeOrders(Order *o);
	void makePayment();
	void leaveFeedback();
	void searchProduct();
	void checkPrice();
	void updateDetails(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10]);
  virtual void displayDetails();
	void viewPreviousOrders();
	void getUserId(char *a);
	~RegisteredUser();
};
