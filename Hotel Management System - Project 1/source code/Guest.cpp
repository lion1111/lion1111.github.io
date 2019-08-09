#include "Guest.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
    Guest::Guest(){};
    
    Guest::Guest(std::string n,std::string add,std::string e,int a){
        name=n;
        address=add;
        email=e;
        age=a;
    }
    
    void Guest::SetName(std::string n){name=n;};
    std::string Guest::GetName(){return name;};
    
    void Guest::SetAddress(std::string add){address=add;};
    std::string Guest::GetAddress(){return address;};
    
    void Guest::SetEmail(std::string e){email=e;};
    std::string Guest::GetEmail(){return email;};
    
    void Guest::SetAge(int a){age=a;};
    int Guest::GetAge(){return age;};

/* This is the function that is responsible for not allowing empty input. For 
 * example, if the user presses 'enter' without inputting a name, address or 
 * email, the function will display an error and prompt the user to enter the 
 * missing field.
 */    
void Guest::guest(string *name,string *address,string *email,int *age){
        cin.ignore();
        //getline(cin, random);
        
        std::cout << "Enter full name: ";
        getline(cin,*name);
        if(name->empty()){
            cout << "Cannot leave it empty, TRY AGAIN" << endl;
            guest(name,address, email, age);
        }else{
            cout << "VALID INPUT" << endl;
        }
        
        std::cout << "Enter address  : ";
        std::getline(std::cin,*address);
        if(address->empty()){
            cout << "Cannot leave it empty, TRY AGAIN" << endl;           
            guest(name, address, email, age);
        }else{
            cout << "VALID INPUT " << endl;
        }
        
        std::cout << "Enter email    : ";
        std::cin >> *email;
        if(email->empty()){
            cout << "Cannot leave it empty,TRY AGAIN" << endl;
            guest(name, address, email, age);
        }else{
            cout << "VALID INPUT" << endl;
        }
       
        cout << "Enter age       : ";
        cin  >> *age;
    }