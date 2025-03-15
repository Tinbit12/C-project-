#include <iostream>
#include <string>

// Define a tax rate constant using a preprocessor directive
#define TAX_RATE_PREPROCESSOR 0.15  

int main() {
    // Display an introductory message
    std::cout << "Welcome to the Product Sales and Inventory Management System!\n";
    std::cout << "This program analyzes product sales and inventory for a store.\n";
    std::cout << "Note that: C++ is a compiled language.\n\n";

    // Declare variables for product details
    std::string productName;  //assume a single word
    int productCategory;     //an integer from 1 to 5
    int initialInventory;     //initial inventory quantity
    float productPrice;       //product per unit price
    int itemsSold;            //number of items sold

    // Declare variables for computed values
    int newInventory; //calculated as initial inventory minus items sold 
    float totalSales;  //calculated as the number of items sold multiplied by the product price      
    std::string inventoryStatus;  //set to "Low Inventory" if the new inventory is less than 10; otherwise, "Sufficient Inventory"

    // Demonstrate different initialization methods
    int sampleDirectInit = 100;  
    float sampleAssignment;  
    sampleAssignment = 50.5; 
    int sampleListInit{25};  

    // Define a tax rate constant using the const keyword
    const float TAX_RATE_CONST = 0.15;  

    // Input from the user
    std::cout << "Enter product name (one word): ";
    std::cin >> productName;
    std::cout << "Enter product category (1-5): ";
    std::cin >> productCategory;
    std::cout << "Enter initial inventory quantity: ";
    std::cin >> initialInventory;
    std::cout << "Enter product price per unit: ";
    std::cin >> productPrice;
    std::cout << "Enter the number of items sold: ";
    std::cin >> itemsSold;

    // Perform calculations
    newInventory = initialInventory;
    newInventory -= itemsSold;  // Compound assignment
    totalSales = itemsSold * productPrice;

    // Use a ternary operator for inventory status
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    // Use type deduction
    auto totalSalesCopy = totalSales;  // Helper variable using auto
    decltype(initialInventory) extraInventory = 50;  // Helper variable using decltype

    // Implement flow control: check valid category range
    if (productCategory < 1 || productCategory > 5) {
        std::cout << "Invalid product category! Please enter a number between 1 and 5.\n";
        return 1;  // Exit the program
    }

    // Use a switch statement for product category
    switch (productCategory) {
        case 1: std::cout << "Category 1: Electronics\n"; break;
        case 2: std::cout << "Category 2: Groceries\n"; break;
        case 3: std::cout << "Category 3: Clothing\n"; break;
        case 4: std::cout << "Category 4: Stationery\n"; break;
        case 5: std::cout << "Category 5: Miscellaneous\n"; break;
    }

    // Use a for loop to simulate receipt printing
    std::cout << "\n--- Printing Receipt ---\n";
    for (int i = 1; i <= itemsSold; i++) {
        std::cout << "Item " << i << ": $" << productPrice << "\n";
    }

    // Output all information
    std::cout << "\n--- Sales Summary ---\n";
    std::cout << "Product Name: " << productName << "\n";
    std::cout << "Product Category: " << productCategory << "\n";
    std::cout << "Initial Inventory: " << initialInventory << "\n";
    std::cout << "Price per Unit: $" << productPrice << "\n";
    std::cout << "Items Sold: " << itemsSold << "\n";
    std::cout << "New Inventory: " << newInventory << "\n";
    std::cout << "Total Sales: $" << totalSales << "\n";
    std::cout << "Inventory Status: " << inventoryStatus << "\n";
    std::cout << "Tax Rate (Preprocessor Directive): " << TAX_RATE_PREPROCESSOR * 100 << "%\n";
    std::cout << "Tax Rate (Const Keyword): " << TAX_RATE_CONST * 100 << "%\n";
    std::cout << "Helper Variable (total sales copy using auto): $" << totalSalesCopy << "\n";
    std::cout << "Helper Variable (extra inventory using decltype): " << extraInventory << "\n";

    return 0;
}
