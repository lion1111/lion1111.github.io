#ifndef GUEST_H
#define GUEST_H
#include <string>
#include <iostream>

class Guest{
    std::string name;
    std::string address;
    std::string email;
    std::string random;
    int age;
public:
    Guest();
    Guest(std::string n,std::string add,std::string e,int a);
    
    void SetName(std::string n);
    std::string GetName();
    
    void SetAddress(std::string add);
    std::string GetAddress();
    
    void SetEmail(std::string e);
    std::string GetEmail();
    
    void SetAge(int a);
    int GetAge();
    
    void guest(std::string *name,std::string *address,std::string *email,int *age);
    
    void G();
};
#endif /* GUEST_H */