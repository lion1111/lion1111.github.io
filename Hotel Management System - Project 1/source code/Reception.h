#ifndef RECEPTION_H
#define RECEPTION_H
#include <string>
#include <iostream>
#include <fstream>

class Reception:public Guest{
    std::string line;
    std::string token;
    int x;
public:
    Reception();
    void reception();
    void keyword(std::ifstream & stream, std::string token);
    void check();
};
#endif /* RECEPTION_H */