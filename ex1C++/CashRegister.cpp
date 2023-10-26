/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/

#include "CashRegister.h"
#include <iostream>

using namespace std;

CashRegister::CashRegister(int CashBefore){//constructor sets the cash in the register to a specific amount.
    cashOnHands = CashBefore;
}

int CashRegister::getCurrentBalance() const {return cashOnHands;}
//returns value of cashOnHand.

void CashRegister::acceptAmount(int price){cashOnHands += price;}
//receive the amount deposited by the customer and update the amount in

CashRegister::~CashRegister(){}
