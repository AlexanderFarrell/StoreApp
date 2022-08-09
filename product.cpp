#include "product.h"

Product::Product(std::string name, double price, double size, int quantity) {
    this->name = name;
    this->price = price;
    this->size = size;
    this->quantity = quantity;
}

Product::~Product() {

}

void Product::save(std::string file_name) {
    std::ofstream of(file_name);
    of << this->name << "\n";
    of << this->price << "\n";
    of << this->size << "\n";
    of << this->quantity << "\n";
    of.close();
    std::cout << "Saved new product " << this->name;
    std::cout << " as " << file_name;
}

Product::Product(std::string filename) {
    std::ifstream i(filename);
    i >> this->name;
    i >> this->price;
    i >> this->size;
    i >> this->quantity;
    i.close();
}

void Product::display() {

}

Product Product::prompt() {
    std::string name;
    double price;
    double size;
    int quantity;

    std::cout << "Enter a name for the new product: ";
    std::cin >> name;
    
    std::cout << "Enter a price: $";
    std::cin >> price;

    std::cout << "Enter a size: ";
    std::cin >> size;

    std::cout << "Enter a quantity: ";
    std::cin >> quantity;

    Product retVal(name, price, size, quantity);
    return retVal;
}

std::string Product::get_name() {
    return this->name;
}
