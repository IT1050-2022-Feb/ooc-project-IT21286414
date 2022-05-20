#pragma once
#include "Product.h"

class Offer
{
private:
    char offerID[10];
    float offerAmount;

public:
    Offer();
    Offer(const char id[10], float amount);
    void updateOffer(const char id[10], float amount);
    void addOffer(const char id[10], float amount, Product *p);
    void displayDetails();
    ~Offer();
};

