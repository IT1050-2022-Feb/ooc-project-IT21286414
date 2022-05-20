#include <iostream>
#include <cstring>
#include "RegisteredUser.h"


RegisteredUser::RegisteredUser()
{
  strcpy(userID, "");
	strcpy(username, "");
	strcpy(password, "");
	strcpy(name, "");
	strcpy(address, "");
	strcpy(email, "");
	strcpy(contactNumber, "");
}

RegisteredUser::RegisteredUser(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10])
{
	strcpy(userID, id);
	strcpy(username, pusername);
	strcpy(password, pwd);
	strcpy(name, pname);
	strcpy(address, paddress);
	strcpy(email, pemail);
	strcpy(contactNumber, pcontactNo);
	 
}

void RegisteredUser::login()
{

}

void RegisteredUser::logout()
{

}

void RegisteredUser::placeOrders(Order *o)
{

}

void RegisteredUser::makePayment()
{

}

void RegisteredUser::leaveFeedback()
{

}

void RegisteredUser::searchProduct()
{

}

void RegisteredUser::checkPrice()
{

}

void RegisteredUser::updateDetails(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10])
{
	strcpy(userID, id);
	strcpy(username, pusername);
	strcpy(password, pwd);
	strcpy(name, pname);
	strcpy(address, paddress);
	strcpy(email, pemail);
	strcpy(contactNumber, pcontactNo);
}

void RegisteredUser::displayDetails()
{
  std::cout << "userID : " << userID << std::endl;
  std::cout << "username : " << username << std::endl;
  std::cout << "password : " << password << std::endl;
  std::cout << "name : " << name << std::endl;
  std::cout << "address : " << address << std::endl;
  std::cout << "email : " << email << std::endl;
  std::cout << "contactNumber : " << contactNumber << std::endl;
}
void RegisteredUser::viewPreviousOrders()
{
    
}

void RegisteredUser::getUserId(char *a)
{
	strcpy(a, userID);
}

RegisteredUser::~RegisteredUser()
{
    std::cout << "Destructor runs" << std::endl;
}
