#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(int argc, char* argv[])

{
    setlocale(LC_ALL, "RUSSIAN");

    //Перший приклад
    cout << "Перший приклад" << endl;
    int* k = new int;
    *k = 9;
        cout << "змынна х = " << *k << endl;
    delete k;
    cout << endl;
  
    //Другий приклад
    cout << "Другий приклад" << endl;
    srand(time(NULL)); 
    float *mas = new float[10];
    for (int d = 0; d < 10; d++) {
        mas[d] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }
        cout << "mas = " << endl;
        for (int d = 0; d < 10; d++) {
            cout << setprecision(2) << mas[d] << endl;
        }
    delete[] mas; 
    cout << endl;

    //Трітый приклад
    cout << "Третій приклад" << endl;
    float **mass = new float* [2]; 
    for (int count = 0; count < 2; count++) {
        mass[count] = new float[5];
    }
    for (int d = 0; d < 2; d++) {
        for (int f = 0; f < 5; f++) {
            mass[d][f] = (rand() % 10 + 1) / float((rand() % 10 + 1));
        }
    }
    for (int d = 0; d < 2; d++) {
        for (int f = 0; f < 5; f++) {
            cout << '\t' << setprecision(2) << mass[d][f] << '\t';
            cout << endl;
        }
    }
    
    for (int count = 0; count < 2; count++) {
        delete[] mass [count];
    }
    return 0;
}
