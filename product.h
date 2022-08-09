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
        Product(std::string name, double price, double size, int quantity);
        ~Product();
        void save(std::string file_name); 
        Product(std::string filename);
        void display();
        static Product prompt();
        };



      
#endif