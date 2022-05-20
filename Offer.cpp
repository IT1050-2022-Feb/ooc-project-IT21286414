#include <iostream>
#include <cstring>
#include "Offer.h"

Offer::Offer()
{
    strcpy(offerID, "");
    offerAmount = 0;
}


Offer::Offer(const char id[10], float amount)
{
    strcpy(offerID, id);
    offerAmount = amount;
}

void Offer::updateOffer(const char id[10], float amount)
{
    strcpy(offerID, id);
    offerAmount = amount;
}

void Offer::addOffer(const char id[10], float amount,Product *p)
{
    
}

void Offer::displayDetails()
{

}

Offer::~Offer()
{
    std::cout << "Destructor runs" << std::endl;
}
