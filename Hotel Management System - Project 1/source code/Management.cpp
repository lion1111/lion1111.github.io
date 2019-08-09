#include "Guest.h"
#include "Management.h"
#include <iostream>
#include <fstream>
#include <iostream>
#include "custom_main.h"
using namespace std;
Management::Management() {}

/*The following function is used to display all of the lines in a text file 
 * called Bill. This text file has all the client information since the system
 * began recording. 
 */
void Management::management(){
    std::ifstream inFile;
    
    inFile.open("Clients/Bill.txt",std::ios::in);
    while(getline(inFile,line)){
        std::cout<<line<<std::endl;
    }
    inFile.close();
   
    cout << "|---------------------------------------------------------|" << endl;
    cout << "| 1. Main menu " << endl;
    cout << "| 2. Exit      " << endl;
    cout << "| Choose: ";
    cin  >> x;
    switch(x){
        case 1: custom_main(); break;
        case 2:                break;   
        default: cout << "invalid entry" << endl; break;
    }
}