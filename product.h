#ifndef STOREAPP_PRODUCT
#define STOREAPP_PRODUCT

#include <string>
#include <iostream>
#include <fstream>

class Product {
    private:
        std::string name;
        double price;
        double size;
        int quantity;

    public:
        Product();
        ~Product();
        void save(std::string file_name);
};

#endif