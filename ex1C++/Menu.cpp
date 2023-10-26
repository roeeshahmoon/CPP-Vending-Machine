/* Assignment C++: 1
   Author: Roee Shahmoon, ID: 206564759
   Author: Noam Klainer, ID: 316015411
*/
#include "Menu.h"
#include "VendingMachine.h"
#include "Stack.h"

#include <iostream>
using namespace std;

Menu::Menu() {} // Constructor

void Menu::shopMenu() {
    static int choose;
    char letter;
    VendingMachine VENDINGMACHINE;
    

    do {
//        cout<< "money in boxcash: " <<VENDINGMACHINE.getCashRegister().getCurrentBalance() << endl; //only for dev check money get recived
        cout << "*** Welcome to juice Shop ***" << endl;
        cout << "To select an item, enter" << endl;
        cout << "1 For Orange juice" << endl;
        cout << "2 For Carrot juice" << endl;
        cout << "3 For Pomegranate" << endl;
        cout << "4 To exit" << endl;

        cin >> choose;
        if (choose == 1){        //the user choose Orange Juice
            letter = 'o';
            VENDINGMACHINE.sellProduct(letter);
        }
        if (choose == 2){           //the user choose Carrot Juice
            letter = 'c';
            VENDINGMACHINE.sellProduct(letter);
        }
        if (choose == 3){            //the user choose Pomegranate Juice
            letter = 'p';
            VENDINGMACHINE.sellProduct(letter);
        }
        if (choose == 4){            //the user choose to exit
            cout<<"Thank you!" << endl;
        }
        if (choose != 1 && choose != 2 && choose != 3 && choose != 4){//the user insert Invalid selection
            cout<<"Invalid selection."<< endl;
        }

    } while (choose != 4);

}
void Menu::stackMenu(){
    static int choose;
    Stack StackSegment;
    do{
        
        cout << "*** Manage your integer stack ***" << endl;
        cout << "1 Push new element" << endl;
        cout << "2 Pop element" << endl;
        cout << "3 Show the first element" << endl;
        cout << "4 Check if empty" << endl;
        cout << "5 to exit" << endl;

        cin >> choose;
      
        if (choose == 1) {        //the user choose Orange Juice
            int newelement;
            cout << "Please insert the new element: ";
            cin >> newelement;
            cout << endl;
            StackSegment.push(newelement);


        }
        if (choose == 2) {           //the user choose Carrot Juice
            
            StackSegment.pop();
        }
        if (choose == 3) {
            if (StackSegment.isEmpty()) {
                cout << "The first element is: " << -2147483648 << endl;
            }
            if (!StackSegment.isEmpty()) {
                cout << "The first element is: " << StackSegment.peek() << endl;
            }
        }
        if (choose == 4) {            //the user choose Pomegranate Juice
            if(StackSegment.isEmpty()){
                         
                    cout << "The stack is empty" <<  endl;
                }
            if (!StackSegment.isEmpty()) {
                cout << "The stack is not empty" << endl;
            }
        }
        if (choose == 5){            //the user choose to exit
            cout<<"Thank you!" << endl;
        }
        if (choose != 1 && choose != 2 && choose != 3 && choose != 4 && choose != 5){//the user insert Invalid selection
            cout<<"Invalid selection."<< endl;
        }
    }
    while (choose != 5);

}

 void Menu::mainMenu() {
     static int option; //
     do {
         cout << "(1) Fresh juice Shop" << endl;
         cout << "(2) Integer Stack" << endl;
         cout << "(3) Exit" << endl;

         cin >> option; //input from the user
         if (option == 1) {
             this->shopMenu(); // get into shop Menu
         }
         if (option == 2) {
             this->stackMenu(); // get Into stck Menu
         }
         if (option != 1 && option != 2 && option != 3){//the user insert Invalid selection
             cout<<"Invalid selection."<< endl;
         }


     } while (option != 3); //while input is 1 or 2
     cout << "Goodbye!" << endl;

 }

     
Menu::~Menu(){ //destructor
    //cout<<"Deleting a Menu Type...\n";
     }


