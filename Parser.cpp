#include "Parser.h"
#include <vector>
using namespace std;

Parser::Parser(ifstream &fin) {
    setlocale(LC_ALL, "eng");
    string s;
    fin >> s;
    v=stod(s);//число вершин
    fin >> s;
    n=stod(s);//число ребер
    int i;
    for (i=0; i<v; i++)//инициализация 
        graph.push_back(vector<int>(v, 0));
    int m1, m2;
    i=0;
    while (!fin.eof() && (i<n)) {
            fin >> s;
            m1=stod(s);
            fin >> s;
            m2=stod(s);
            graph[m1][m2]=1;
            graph[m2][m1]=1;
            i++;
    }
    cout<<"-----"<<endl;
    for (const auto& innerVec : graph) {
        for (const auto& element : innerVec) {
            cout << element << " ";
        }
        cout << endl; // Печатаем перевод строки для каждого вектора
    }
}
  