/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/
#ifndef EXCPP1_CASHREGISTER_H
#define EXCPP1_CASHREGISTER_H

#include <iostream>

using namespace std;

class CashRegister {//constractor
    int cashOnHands; //amount of cash in the register

public:
    CashRegister(int cash = 0); //constractor sets the cash in the register to a specific amount.
    void acceptAmount(int price); //receive the amount deposited by the customer and update the amount in
    int getCurrentBalance() const; //returns value of cashOnHand.

    ~CashRegister();

};

#endif //EXCPP1_CASHREGISTER_H
