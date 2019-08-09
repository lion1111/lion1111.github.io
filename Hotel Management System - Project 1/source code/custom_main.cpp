#include <cstdlib>
#include <sstream>
#include "Guest.h"
#include "Reception.h"
#include "Bill.h"
#include "Rooms.h"
#include "Management.h"
#include <iostream>
#include <string>
using namespace std;

/*The following function(custom_main) was created to replace the main function
 * (int main). The reason for this was to create easy access to the main menu 
 * from any class that the program is in. Using the int main function it was not 
 * possible for users to return to the main menu from classes, reason being is 
 * that classes did not have access to the int main's header file information. 
 * Whereas custom_main has a header file, which gives classes access to it's 
 * cpp file.
 */
int custom_main(){
    int number;
    string line;
    
    Bill object2;
    Management object3;
    Reception object4;
    Reception object5;
    
    cout << "\n";
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|                 Hotel Management System                 |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|****Main menu--------------------------------------------|" << endl;
    cout << "| 1. Add new guest                                        |" << endl;
    cout << "| 2. View all guest records                               |" << endl;
    cout << "| 3. Search for guest                                     |" << endl;
    cout << "| 4. Check vacant rooms                                   |" << endl;
    cout << "| 5. Exit                                                 |" << endl;
    cout << "| *Choose ";
    cin >> number;
    cout << "|---------------------------------------------------------|" << endl;
    
    switch(number){
        case 1: 
            object2.bill();       
            break;
        case 2: 
            object3.management(); 
            break;
        case 3: 
            object4.reception();  
            break;
        case 4: 
            object5.check();      
            break;
        case 5: 
            break;
        default: 
            cout << "Invalid entry. Please try again." << endl; 
            custom_main(); 
        break;
    }
}