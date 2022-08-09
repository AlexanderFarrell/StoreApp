#include <iostream>
#include <string>
#include <fstream>
#include "product.h"
// #include <dirent.h>

void view_product() {
    std::cout << "Please enter a filename\n";
    std::string s;
    std::getline(std::cin, s);

    Product p(s);
    p.display();
}

void create_product() {
    Product p = Product::prompt();
    p.save("todo");
}

void list_products() {

} 

int main(int argc, char const *argv[])
{
    std::cout << "Welcome\n";
    
    bool running = true;
    while (running)
    {
        std::cout << "Please enter an option\n";
        std::cout << " 1. List Products\n";
        std::cout << " 2. Create Product\n";
        std::cout << " 3. View Product\n";
        std::cout << " 4. Quit\n";
        std::cout << " > ";

        int selection;
        std::cin >> selection;

        switch (selection) {
            case 1: 
                list_products();
                break;
            case 2: 
                create_product();
                break;
            case 3: 
                view_product();
                break;
            case 4: 
                running = false;
                std::cout << "Quitting... Thank you.";
                break;
            default:
                std::cout << "Invalid entry.";
                std::cout << "Please enter a number between 1 and 4";
        }
    }
    





    return 0;
}
