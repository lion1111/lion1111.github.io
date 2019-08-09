#ifndef BILL_H
#define BILL_H
#include "Rooms.h"
#include "custom_main.h"

class Bill:public Guest,public Rooms{
    double VAT;
    double Total;
    double total;
    double Amount;
    double servicePerDay;
    
    std::string name;
    std::string address;
    std::string email;
    std::string type;
    
    int age;
    int room;
    int service,days;
    int totalRent;
    int x;
    
public:
    Bill();
    Bill(double v,double t,double a);
    void bill();
    int exit();
};
#endif /* BILL_H */