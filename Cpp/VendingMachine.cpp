/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/
#include <iostream>
#include "VendingMachine.h"

#include "CashRegister.h"
#include "DispenserType.h"

using namespace std;

VendingMachine::VendingMachine() : orange(10 ,45), carrot(5,50), pomegranate(4, 75), counter(0){
    ////Defulat constractor
}

CashRegister VendingMachine::getCashRegister() const {return counter;} //get CashRegister (wiil use only if we check moneybox)

void VendingMachine::sellProduct(char letter) {//this function get letter and sell the juice to user
    DispenserType *juice = nullptr;;      //pointer to the right DispenserTyper
    CashRegister *cashbox = &counter;      //pointer to CashRegister
    if (letter == 'o') {
        juice = &orange;
    }
    if (letter == 'c') {
        juice = &carrot;
    }
    if (letter == 'p') {
        juice = &pomegranate;
    }
    if (juice != nullptr) {
        if (juice->getNoOfItems() > 0) {      //check if there enough juice product
            static int deposit1, deposit2;     //value deposit for first and second tries transaction
            int residue = 0, price;
            price = (*juice).getCost();      //set the price of juice   //(*). equal to ->
            cout << "Please deposit " << price << " cents" << endl;
            cin >> deposit1;

            if (deposit1 >= price) {
                cout << "Collect your item at the bottom and enjoy." << endl;
                cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
                cout << '\n';
                (*cashbox).acceptAmount(deposit1);
                (*juice).makeSale();          //reduce the amount of juice by 1
            } else {
                residue = (price) - deposit1;
                cout << "Please deposit another " << residue << " cents" << endl;
                cin >> deposit2;
                if (deposit2 >= residue) {
                    cout << "Collect your item at the bottom and enjoy." << endl;
                    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
                    cout << '\n';
                    (*juice).makeSale();
                    (*cashbox).acceptAmount(deposit2);
                } else {
                    cout << "The amount is not enough. Collect what you deposited." << endl;
                    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
                    cout << '\n';

                }
            }
        } else { cout << "Sorry, this item is sold out." << endl; }
    }
}
VendingMachine::~VendingMachine(){}//destructor
