/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/
#ifndef EXCPP1_DISPENSERTYPE_H
#define EXCPP1_DISPENSERTYPE_H

#include <iostream>
using namespace std;

class DispenserType {
    int numberOfItems;
    int cost;
public:
    //Default constructor().
    DispenserType(int numberOfItems = 0, int cost = 0);

    void setNumItems(int NumItems);
    void setCost(int Cost);

    int getNoOfItems() const; //- Return the value of numberOfItems
    int getCost() const; // - Return the value of cost.
    void makeSale() ;  //Reduce the number of items by 1.
    ~DispenserType();
};

#endif //EXCPP1_DISPENSERTYPE_H
