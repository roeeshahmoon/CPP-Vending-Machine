/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/

#include "DispenserType.h"
#include <iostream>

using namespace std;
DispenserType::DispenserType(int NumItems, int Cost){//constractor
    numberOfItems= NumItems;
    cost = Cost;
}

void DispenserType::setNumItems(int NumItems){numberOfItems = NumItems;} //set the amount of juice
void DispenserType::setCost(int Cost){cost = Cost;} //ser the cost of juice

int DispenserType::getNoOfItems() const {return numberOfItems;} //return the amount of juice
int DispenserType::getCost() const {return cost;}  //return the cost

void DispenserType::makeSale() {numberOfItems--;}  //reduce the amount of juice by 1


DispenserType::~DispenserType(){ //destructor
//    cout<<"Deleting a DispenserType...\n";
}


