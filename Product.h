#pragma once
class Product
{
private:
    char productID[10];
    char productName[100];
    float retailPrice;
    int quantity;
    int reorderPoint;

public:
    Product();
    Product(const char id[10], const char Name[100], float price, int qty, int preorderPoint);
    void updateDetails(const char id[10], const char Name[100], float price, int qty, int preorderPoint);
    void displayPrice();
    void displayProducts();
    void notifyAdmin();
    void getProductId(char *a);
    ~Product();
};

