#include "STL_Funk.h"

void call_Aufg6_1(const vector<int> &randVector)
{
    //copy(randVector.begin(), randVector.end(), ostream_iterator<int>(cout, "\n"));
    for_each(randVector.begin(), randVector.end(), simple_print);
    cout << endl << endl; 
    //alg_foreach_print2(randVector);
    int cnt = for_each(randVector.begin(), randVector.end(), PrintFunktor());
    
    PrintFunktor myFunkPbject = for_each(randVector.begin(), randVector.end(), PrintFunktor());
    cout << endl << " mean: " << myFunkPbject.mean() << endl;
    cout << " anzahl: " << myFunkPbject.anzahl() << endl;

    //cout << " randVector hat " << cnt << " Elemente!" << endl;

}


int main(int argc, char const *argv[])
{
    char res = ' ';
    
    while (res != 'e'){
        cout << endl << "Ihr Wahl: " << endl;
        cout << "1. Aufgabe 1" << endl;
        cout << "2. Aufgabe 2" << endl;
        cout << "e. Beenden" << endl;
        cin >> res;
        switch (res)
        {
        case '1':
            {
                cout << "Aufgabe 1" << endl;
                srand((unsigned)time(0));
                vector<int> v = generateRandomVector();
                //alg_foreach_print(v);
                call_Aufg6_1(v);
                break;
            }
        case '2':
            {
                cout << "Aufgabe 2" << endl;
                //call_Auf2_2();
                break;
            }

        case 'e':
            {
                cout << "Beenden" << endl;
                break;
                exit(0);
            }

        }
    }
    return 0;
}
