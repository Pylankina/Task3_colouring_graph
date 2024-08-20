#include "Parser.h"
#include "Solver.h"
#include "istream"
#include "string"

using namespace std;

int main(){
    ifstream fin;
    fin.open("gc_4_1");
    cout<<"OK1"<<endl;
    Solver dataf(fin);
    cout<<"OK4"<<endl;
    dataf.writting();
    cout<<"OK5"<<endl;
    fin.close();
    cout<<"OK6"<<endl;
    return 0;
}