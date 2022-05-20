#pragma once
#include <cstring>
#include "RegisteredUser.h"
class MaintenanceTeam : public RegisteredUser {
    private:
        char memberID[10];
        float salary;

    public:
        MaintenanceTeam();
        MaintenanceTeam(const char uid[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char id[10], float psalary) : RegisteredUser(id,  pusername,  pwd,  pname,  paddress,  pemail,  pcontactNo)
        {
            strcpy(memberID, id);
            salary = psalary;
        }


        void updateDetails(const char uid[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char id[10], float psalary);


        void displayDetails();
        void RequestSalary();
        void makeSystemUpdates();
        ~MaintenanceTeam();
};