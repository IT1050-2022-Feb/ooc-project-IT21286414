#include <iostream>
#include <cstring>
#include "MaintenanceTeam.h"

MaintenanceTeam::MaintenanceTeam()
{
    strcpy(memberID, "");
    salary = 0;
}


void MaintenanceTeam::updateDetails(const char uid[10], const char pusername[100], const char pwd[100], const char pname[100], const char paddress[100], const char pemail[100], const char pcontactNo[10], const char id[10], float psalary)
{
    RegisteredUser::updateDetails(id,  pusername,  pwd,  pname,  paddress,  pemail,  pcontactNo);
    strcpy(memberID, id);
    salary = psalary;
}

void MaintenanceTeam::RequestSalary()
{

}

void MaintenanceTeam::makeSystemUpdates()
{

}

void MaintenanceTeam::displayDetails()
{
    RegisteredUser::displayDetails();
    std::cout << "memberID : " << memberID << std::endl;
    std::cout << "salary : " << salary << std::endl;
}

MaintenanceTeam::~MaintenanceTeam()
{
    std::cout << "Destructor runs" << std::endl;
}