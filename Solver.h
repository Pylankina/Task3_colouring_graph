#include "DB.h"

class Solver:public DB{
public:
    Solver(ifstream &fin);
    void sortting();
};