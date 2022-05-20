#pragma once
#include <cstring>
#include "RegisteredUser.h"

class Employee : public RegisteredUser
{
    private:
        char employeeID[10];
        float salary;

    public:
        Employee();
        Employee(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char uid[10], float psalary) : RegisteredUser( id,  pusername,  pwd,  pname,  paddress,  pemail,  pcontactNo)
        {
            strcpy(employeeID, uid);
            salary = psalary;
        }
       void updateDetails(const char id[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char uid[10], float psalary);

        void displayDetails();
        ~Employee();
};