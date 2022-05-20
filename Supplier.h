#pragma once
class Supplier {
    private:
        char supplierID[10];
        char name[100];
        char goodsType[100];
        char address[100];
        char contactNumber[10];

    public:
        Supplier();
        Supplier(const char id[10], const char pname[100], const char type[100], const char paddress[100], const char contactNo[10]);
        void updateDetails(const char id[10], const char pname[100], const char type[100], const char paddress[100], const char contactNo[10]);
        void displayDetails();
        void getSupplierID(char *a);  
        ~Supplier();
};