#include <iostream>
#include "Item.h"
using namespace std;

// DO NOT CHANGE THIS CODE

int main() {
    Item myItem;
    myItem.display();//default constructor
    Item myItem2(100, 1000);//overloaded constructor
    myItem2.setDiscount(20);
    myItem2.display();
    
    return 0;
}

// DO NOT CHANGE ABOVE CODE

