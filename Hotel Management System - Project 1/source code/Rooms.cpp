#include "Rooms.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Rooms::Rooms() {}

Rooms::Rooms(int s, int d, int q, int k, int c) {
    Single=s;
    Dub=d;
    Queen=q;
    King=k;
    Conference=c;
}

/* When a user is selecting a room type, this is the function that is used. If 
 * a certain room type is occupied, the system will inform the user that the 
 * room type is occupied and that they should select another room type.
 */
void Rooms::roomType(int* c, string* type){
    int one = 0;
    int two = 0;
    int three = 0;
    int four  = 0;
    int five  = 0;
    int six   = 0;
    
    ifstream fone  ("Clients/single.txt");
    ifstream ftwo  ("Clients/double.txt");
    ifstream fthree("Clients/queen.txt");
    ifstream ffour ("Clients/king.txt");
    ifstream ffive ("Clients/conference.txt");
    ifstream fsix  ("Clients/luxury.txt");
    
    std::cout << "\n|---------------------------------------------------------|";
    std::cout << "\n***Room types";
    while(getline(fone, line))
        ++one;
    if(one>10){
        cout << "\n *Single beds occupied, select another room";
    }else{
        one-=1;
        std::cout << "\n 1. Single bed       $10  "<< "   Available: " << 10 - one;
    }
    fone.close();
    /*-------------------------------------------------------------------------*/
    while(getline(ftwo, line))
        ++two;
    if(two>10){
        cout << "\n *Double beds occupied, select another room";
    }else{
        two-=1;
        std::cout << "\n 2. Double bed       $15  "<< "   Available: " << 10 - two;
    }
    ftwo.close();
    /*-------------------------------------------------------------------------*/
    while(getline(fthree, line))
        ++three;
    if(three>10){
        cout << "\n *Family rooms occupied, select another room";
    }else{
        three-=1;
        std::cout << "\n 3. Queen size       $25  "<< "   Available: " << 10 - three;
    }
    fthree.close();
    /*-------------------------------------------------------------------------*/
    while(getline(ffour, line))
        ++four;
    if(four>10){
        cout << "*King size bedrooms occupied, select another room";
    }else{
        four-=1;
        std::cout << "\n 4. King size        $35  "<< "   Available: " << 10 - four;
    }
    ffour.close();
    /*-------------------------------------------------------------------------*/
    while(getline(ffive, line))
        ++five;
    if(five>2){
        cout << "\n * Conference rooms, occupied";
    }else{
        five-=1;
        cout << "\n 5. Conference room  $50  "<< "   Available: " << 2 - five;
    }
    ffive.close();
    /*-------------------------------------------------------------------------*/
    while(getline(fsix, line))
        ++six;
    if(six>5){
        cout << "\n *Luxury rooms occupied, select another room";
    }else{
        six-=1;
        cout << "\n 6. Luxury suit      $150 "<<"   Available: " << 5 - six;   
    }
    fsix.close();
    /*-------------------------------------------------------------------------*/
    
    
    
    
    std::cout << "\n    Choose : ";
    std::cin  >> *c;
    switch(*c){
        case 1:
            *c = 10;
            *type = "single bedroom";
            break;
        case 2:
            *c = 15;
            *type = "double bedroom";
            break;
        case 3:
            *c = 25;
            *type = "queen size bed";
            break;
        case 4:
            *c = 35;
            *type = "king size bed";
            break;
        case 5:
            *c = 50;
            *type = "conference room";
            break;
        case 6:
            *c = 150;
            *type = "luxury suite" ;
            break;
        default:
            std::cout << "Invalid input\n";
            roomType(c, type);
            break;
    }
    std::cout << "\n|---------------------------------------------------------|";
}

/* This function is used for the user to select what kind of meals they want 
 * throughout the duration of they stay.
 */
void Rooms::roomService(int *rs,int *days){
    std::cout << "\n***Room Service";
    std::cout << "\n Number of nights: ";
    std::cin  >> *days;
    
    std::cout << "\n 1. Breakfast  $7";
    std::cout << "\n 2. Lunch      $9";
    std::cout << "\n 3. Dinner     $12";
    std::cout << "\n 4. Combo      $28";
    std::cout << "\n    Choose : ";
    std::cin  >> *rs;
    switch(*rs){
        case 1:
            *rs = 7;
            break;
        case 2:
            *rs = 9;
        case 3:
            *rs = 12;
            break;
        case 4:
            *rs = 28;
            break;
        default:
            std::cout << "\nInvalid entry, try again";
            roomService(rs,days);
            break;
    }
    std::cout << "\n|---------------------------------------------------------|";
}