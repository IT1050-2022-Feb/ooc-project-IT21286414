#pragma once
#include "SupplyOrder.h"
#include "MaintenanceTeam.h"
#include "Employee.h"
#include "Order.h"

class Payment {
    private:
        char paymentID[10];
        float assertGainedAmount;
        float assertLostAmount;

        SupplyOrder *supplyorder;

        Employee *emp;

        MaintenanceTeam *member;

        Order *order;

    public:
        Payment();
        Payment(const char id[10], float gained, float lost);
        void paySalary();
        void acceptPayment(const char id[10], float gained, float lost, Order *o);
        void payEmployeeSalary(const char id[10], float gained, float lost, Employee *e);
        void payMaintenanceTeamSalary(const char id[10], float gained, float lost, MaintenanceTeam *m);
        void buyStock(const char id[10], float gained, float lost, SupplyOrder *so);
        ~Payment();
};