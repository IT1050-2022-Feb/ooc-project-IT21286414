#include <iostream>
#include <cstring>
#include "Supplier.h"

Supplier::Supplier()
{
    strcpy(supplierID, "");
    strcpy(name, "");
    strcpy(goodsType, "");
    strcpy(address, "");
    strcpy(contactNumber, "");
}

Supplier::Supplier(const char id[10], const char pname[100], const char type[100], const char paddress[100], const char contactNo[10])
{
    strcpy(supplierID, id);
    strcpy(name, pname);
    strcpy(goodsType, type);
    strcpy(address, paddress);
    strcpy(contactNumber, contactNo);
}

void Supplier::updateDetails(const char id[10], const char pname[100], const char type[100], const char paddress[100], const char contactNo[10])
{
    strcpy(supplierID, id);
    strcpy(name, pname);
    strcpy(goodsType, type);
    strcpy(address, paddress);
    strcpy(contactNumber, contactNo);
}

void Supplier::displayDetails()
{

}

void Supplier::getSupplierID(char *a)
{
  strcpy(a, supplierID);
}

Supplier::~Supplier()
{
    std::cout << "Destructor runs" << std::endl;
}