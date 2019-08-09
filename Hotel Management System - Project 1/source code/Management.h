#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include <iostream>
#include <fstream>
class Management:public Guest{
    std::string name;
    std::string email;
    std::string address;
    std::string line;
    int age;
    int x;
public:
    Management();
    void management();
};
#endif /* MANAGEMENT_H */