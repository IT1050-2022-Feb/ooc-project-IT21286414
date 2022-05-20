#include <iostream>
#include <cstring>
#include "Product.h"


Product::Product()
{
    strcpy(productID, "");
    strcpy(productName, "");
    retailPrice = 0;
    quantity = 0;
    reorderPoint = 0;

}


Product::Product(const char id[10], const char Name[100], float price, int qty, int preorderPoint)
{
    strcpy(productID, id);
    strcpy(productName, Name);
    retailPrice = price;
    quantity = qty;
    reorderPoint = preorderPoint;
  
}


void Product::updateDetails(const char id[10], const char Name[100], float price, int qty, int preorderPoint)
{
    strcpy(productID, id);
    strcpy(productName, Name);
    retailPrice = price;
    quantity = qty;
    reorderPoint = preorderPoint;

}

void Product::displayPrice()
{

}

void Product::displayProducts()
{

}

void Product::notifyAdmin()
{

}

void Product::getProductId(char *a)
{
  strcpy(a, productID);
}

Product::~Product()
{
    std::cout << "Destructor runs" << std::endl;
}