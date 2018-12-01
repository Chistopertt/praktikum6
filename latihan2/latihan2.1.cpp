#include<iostream>
using namespace std;

void tukar (int *a, int *b){

    int c;
    c = *a;
    *a = *b;
    *b = c;

}

main (){

    int a = 5, b = 8;
    cout << "\nSebelum di tukar\n";
    cout << "Nilai 1 : " << a << endl;
    cout << "Nilai 2 : " << b << endl;
    tukar(&a, &b);
    cout << "\nSesudah di tukar\n";
    cout << "Nilai 1 : " << a << endl;
    cout << "Nilai 2 : " << b << endl;

    return 0;

}
