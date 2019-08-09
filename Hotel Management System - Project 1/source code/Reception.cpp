#include "Guest.h"
#include "custom_main.h"
#include "Reception.h"
#include <fstream>
#include <iostream>
using namespace std;

Reception::Reception(){};

/*The following function(keyword) is used to search for a users input. The user 
 *can decide to search for a name, surname, age, room type, amount  or date, and
 *this function will search for information related to that specific input and 
 * display as much information as it can find.
 */
void Reception::keyword(std::ifstream & stream, std::string token){
    std::cout <<"\n";
    std::cout << "Search results:::" << std::endl;
    while(getline(stream,line)){
        if(line.find(token)!=std::string::npos){
            std::cout << line << std::endl;
        }
    }
    cout << "--------------------------- END ----------------------------------" << endl;
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

void Reception::reception(){//this is a search function    
    std::ifstream inFile;
    inFile.open("Clients/Bill.txt");
    std::cout << "Enter name/surname: ";
    std::cin  >> token;
    keyword(inFile, token);
}

/*The following function's purpose is to simply count the number of lines in the
 * text files and display the number of lines for the number of occupied rooms,
 * and that number is subtracted from the number of rooms that the hotel has. 
 * For example, if the function counts the number of lines in the text file 
 * called single.txt with only 3 lines in it, the function will take that 
 * number and subtract it from the number of single rooms that the hotel has, 
 * which is 10. The function will then display the number of rooms available,
 * which is 7.
 */
void Reception::check(){
    int one = 0;
    int two = 0;
    int three = 0;
    int four  = 0;
    int five  = 0;
    int six   = 0;
    int total = 47;
    int tot   = 0;
    
    cout << "\n";
    cout << "Room availability-----------------------------------------|" << endl;
    
    ifstream fone("Clients/single.txt");
    ifstream ftwo("Clients/double.txt");
    ifstream fthree("Clients/queen.txt");
    ifstream ffour("Clients/king.txt");
    ifstream ffive("Clients/conference.txt");
    ifstream fsix("Clients/luxury.txt");
    
    while(getline(fone, line))
        one++;
    one-=1;
    cout << "| Single rooms occupied    : (" << one << ")" << "   Available: (" << 10 - one << ")"<< endl;
    fone.close();
    
    while(getline(ftwo, line))
        two++;
    two-=1;
    cout << "| Double rooms occupied    : (" << two << ")" << "   Available: (" << 10 - two << ")"<< endl;
    ftwo.close();
            
    while(getline(fthree, line))
        three++;
    three-=1;
    cout << "| Queen rooms occupied     : (" << three<<")" << "   Available: (" << 10 - three << ")"<< endl;
    fthree.close();  
    
    while(getline(ffour, line))
        four++;
    four-=1;
    cout << "| King rooms occupied      : (" << four <<")" << "   Available: (" << 10 - four << ")"<< endl;
    ffour.close();

    while(getline(ffive, line))
        five++;
    five-=1;
    cout << "| Conference rooms occupied: (" << five <<")" << "   Available: (" << 2 - five << ")"<< endl;
    ffive.close();    

    while(getline(fsix, line))
        six++;
    six-=1;
    cout << "| Luxury rooms occupied    : (" << six << ")" << "   Available: (" << 5 - six << ")"<< endl;
    fsix.close();  
    
    cout << "|\n";
    
    tot = one + two + three + four + five + six;
    cout << "| Vacant rooms             : " << total - tot << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "| 1. Main menu " << endl;
    cout << "| 2. Exit      " << endl;
    cout << "| Choose: ";
    cin  >> x;
    switch(x){
        case 1: custom_main(); break;
        case 2:                break;   
        default: cout << "invalid entry" << endl; 
                 check();
        break;
    }
}