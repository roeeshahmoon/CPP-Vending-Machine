/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/
#ifndef EXCPP1_VENDINGMACHINE_H
#define EXCPP1_VENDINGMACHINE_H

#include <iostream>
#include "DispenserType.h"
#include "CashRegister.h"

using namespace std;

class VendingMachine {
    DispenserType orange;           //Composition!!
    DispenserType carrot;
    DispenserType pomegranate;
    CashRegister counter;

public:
    VendingMachine();

    void sellProduct(char letter); // Receive the first character of the wanted product (e.g. ‘o’ for orange).
    CashRegister getCashRegister() const;  //get CashRegister (wiil use only if we check moneybox)

    ~VendingMachine(); //deconstractor

};


#endif //EXCPP1_VENDINGMACHINE_H
