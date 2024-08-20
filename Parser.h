#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <vector>
#include "istream"


using namespace std;

class Parser{
protected:
    int n;//число ребер
    int v;//число вершин
    vector<vector<int>> graph;
public:
    Parser (ifstream &fin);
};
#endif 