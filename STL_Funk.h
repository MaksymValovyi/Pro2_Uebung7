#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

#include "PrintFunktor.h"

using namespace std;

vector<int> generateRandomVector()
{
    unsigned int limit = 0;
    unsigned int sum_counter = 0;
    vector<int> rVector;

    cout << "Bitte geben Sie eine Zahl als Limit ein: " << endl;
    cin >> limit;

    do{
        int x = rand() % 100 + 1; // 1-100
        rVector.push_back(x);
        sum_counter += x;
    }while( sum_counter < limit);

    return rVector;
}


void simple_print(int elem)
{
    if (elem >= 1)
    cout << elem << ' ';
}

void alg_foreach_print(std::vector<int> v)
{
    /* alle Elemente ausgeben*/
    for_each(v.begin(), v.end(), simple_print);
    cout << endl;
}

void alg_foreach_print2(std::vector<int> v) {
    /* alle Elemente ausgeben*/
    int cnt = for_each(v.begin(), v.end(), PrintFunktor());
    cout << " v hat " << cnt << " Elemente!" << endl; 
}