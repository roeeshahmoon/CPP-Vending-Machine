/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/

#ifndef EXCPP1_MENU_H
#define EXCPP1_MENU_H

#include <iostream>
using namespace std;

class Menu {// Menu has no fields only public methods
public:
    Menu();
    void mainMenu();
    void shopMenu();
    void stackMenu();
    ~Menu();
};


#endif //EXCPP1_MENU_H
