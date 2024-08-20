#include "Solver.h"
#include <algorithm>


 Solver::Solver(ifstream &fin) : DB(fin){
    int i;
    sortting();//отсортировали вершины, сохранили в aft_sort
    for (auto t : aft_sort) { // Проход по всем вершинам по убыванию степени
        fill(colour.begin(), colour.end(), 0); // Сбрасываем цвета

        for (int l : graph[t]) { // Проходим по всем соседям вершины t
            if (answer[l].second != -1) { // Если сосед раскрашен
                colour[answer[l].second] = 1; // Отмечаем цвет как занятый
            }
        }

        // Находим первый свободный цвет
        int c;
        for (c = 0; c < v; c++) {
            if (colour[c] == 0) {
                break;
            }
        }
        answer[t].second = c; // Присваиваем цвет вершине t
    }
}

void Solver::sortting(){
    int i, j, tt;
    vector<pair<int, int>> m;
    for (i=0; i<v; i++){
        tt=0;
        for (j=0; j<v; j++){
            if(graph[i][j]==1)
                tt++;
        }
        m.push_back(make_pair(i, tt));
    }
    sort(m.begin(), m.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;});//отсортировали вектор пар
    auto t=m.begin();
    for (i=0; i<v; i++) {
        aft_sort[i]=t->first; // добавляем только вершину
        ++t;
    }
}
