#include "Guest.h"
#include "Bill.h"
#include "Rooms.h"
#include <fstream>
#include <ctime>
#include <fstream>
using namespace std;

Bill::Bill() {}
Bill::Bill(double v,double t,double a){
    VAT=v;
    Total=t;
    Amount=a;
};

/* The following function has the primary purpose of displaying the information 
 * that it receives from other functions, because it receives by value. The data
 * that it receives is client information, such as name, room type and 
 * so on, this kind of information is displayed on the bill. 
 * This function also checks what room type was chose, and display the 
 * information on the bill.
 */
void Bill::bill(){
    ofstream outFile;
    
    time_t now = time(0);
    char* dt   = ctime(&now);
    
    guest(&name,&address,&email,&age);
    roomType(&room, &type);
    roomService(&service,&days);
    totalRent=days*room;
    servicePerDay=service*days;
    total=servicePerDay+totalRent;
    VAT=total*15/100;
    
    std::cout << "\n********************Hotel Elizabeth bill*******************";
    std::cout << "\n|           Full name     : " << name ;
    std::cout << "\n|           No. of nights : " << days ;
    std::cout << "\n|           Room rent/day : $"<< room ;
    std::cout << "\n|           Room type     : " << type;
    std::cout << "\n|           Total rent    : $"<< totalRent ;
    std::cout << "\n|           Room service  : $"<< servicePerDay ;
    std::cout << "\n|           VAT (15%)     : $"<< VAT ;
    std::cout << "\n|           Date(check-in): " << dt; 
    std::cout << "\n|---------------------------------------------------------|";
    std::cout << "\n|           Total        : $"<< total;
    std::cout << "\n|                                                         |";
    std::cout << "\n| Thank you for visiting Hotel Elizabeth,please come again|";
    std::cout << "\n|-----------------------------End-------------------------|";
    
    
    if( room <= 10 ){
        ofstream myf;
        myf.open("Clients/single.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myf <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myf.flush();
        outFile.flush();
        
     }else if( room <= 15){
        ofstream myfi;
        myfi.open("Clients/double.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myfi <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myfi.flush();
        outFile.flush();
        
     }else if( room <= 25){
        ofstream myfil;
        myfil.open("Clients/queen.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myfil <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myfil.flush();
        outFile.flush();
        
     }else if( room <= 35){
        ofstream myfile;
        myfile.open("Clients/king.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myfile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myfile.flush();
        outFile.flush();
        
     }else if( room <= 50){
        ofstream myfilee;
        myfilee.open("Clients/conference.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myfilee <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myfilee.flush();
        outFile.flush();
        
     }else if( room <= 150){
        ofstream myfilel;
        myfilel.open("Clients/luxury.txt", ios::app);
        outFile.open("Clients/Bill.txt",std::ios::app);        
        myfilel <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        outFile <<"F.name: "<<name<<"  Age: "<<age<<"  E.add: "<<email<<"  NOD: "<<days<<"  Rent: $"<<room<<"  R.service: $"<<service<<"  VAT: $"<<VAT<<"  Total: $"<<total<<"  Room type:"<<type<< "  Date: "<<dt;
        myfilel.flush();
        outFile.flush();
        
     }else{
        cout << "--------INFORMATION NOT SAVED CORRECTLY--------------" << endl;    
        bill();
     }
    
    std::cout << "\n";
    std::cout << "1. Main menu" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cin  >> x;
    std::cout << "\n----------------------------------------------------------|";
    switch(x){
        case  1: custom_main();   break;
        case  2: exit();          break;
        default: std::cout << "Invalid input" << std::endl;  break;
    }
}

int Bill::exit(){
    return 0;
}