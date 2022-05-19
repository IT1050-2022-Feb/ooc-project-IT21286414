#include <iostream>
#include "Payment.h"
#include <cstring>

Payment::Payment()
{
    strcpy(paymentID, "");
    assertGainedAmount = 0;
    assertLostAmount = 0;
}

Payment::Payment(const char id[10], float gained, float lost)
{
    strcpy(paymentID, id);
    assertGainedAmount = gained;
    assertLostAmount = lost;
}

void Payment::paySalary()
{

}



void Payment::acceptPayment(const char id[10], float gained, float lost, Order *o)
{
  strcpy(paymentID, id);
  assertGainedAmount = gained;
  assertLostAmount = lost;
  order = o;
  
}

void Payment::buyStock(const char id[10], float gained, float lost, SupplyOrder *so)
{
  strcpy(paymentID, id);
  assertGainedAmount = gained;
  assertLostAmount = lost;
  supplyorder = so;
  
}

void Payment::payEmployeeSalary(const char id[10], float gained, float lost, Employee *e)
{
  strcpy(paymentID, id);
  assertGainedAmount = gained;
  assertLostAmount = lost;
  emp = e;
}

void Payment::payMaintenanceTeamSalary(const char id[10], float gained, float lost, MaintenanceTeam *m)
{
  strcpy(paymentID, id);
  assertGainedAmount = gained;
  assertLostAmount = lost;
  member = m;
}

Payment::~Payment()
{

  std::cout << "Destructor runs" << std::endl; 
}