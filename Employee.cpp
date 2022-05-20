#include <iostream>
#include <cstring>
#include "Employee.h"

Employee::Employee()
{
    strcpy(employeeID, "");
    strcpy(name, "");
    strcpy(address, "");
    strcpy(email, "");
    salary = 0;
}



void Employee::updateDetails(const char uid[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char id[10], float psalary) 
{
    RegisteredUser::updateDetails(id,  pusername,  pwd,  pname,  paddress,  pemail,  pcontactNo);
    strcpy(employeeID, id);
    salary = psalary;
}

void Employee::displayDetails()
{
    RegisteredUser::displayDetails();
    std::cout << "employeeID : " << employeeID << std::endl;
    std::cout << "salary : " << salary << std::endl;
}
Employee::~Employee()
{
    std::cout << "Destructor runs" << std::endl;
}