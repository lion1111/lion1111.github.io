#ifndef ROOMS_H
#define ROOMS_H
#include <string>
using namespace std;

class Rooms {
    int Single;
    int Dub;
    int Queen;
    int King; 
    int Conference;
    string line;
public:
    Rooms();
    Rooms(int s,int d,int q,int k,int c); 
    void roomType(int *c, string* type);
    void roomService(int *rs,int *days);
};
#endif /* ROOMS_H */