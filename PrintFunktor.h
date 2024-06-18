#include <vector>
#include <iostream>

using namespace std;

void simple_print(int elem);

class PrintFunktor { 
    public:
        int cnt;
        int summe;

        PrintFunktor() : summe(0) ,cnt(0){};//4 prinzipien OOP: encapsulation, inheritance, polymorphism, abstraction

        ~PrintFunktor(){};

        void operator() (int elem) {
            cout << "v["<<cnt<<"]=" << elem << " ";
            summe += elem; 
            cnt++;
        }

        double mean() {
            return (double)summe / cnt;
        }

        int anzahl(){
            return cnt;
        }

        operator int() { 
            return cnt;
        } 
};
