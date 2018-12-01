#include<iostream>
#include"kalkulator.h"

using namespace std;

int inputData(string v="a");

int main(int argc, char const *argv[])
{
    int a, b;
    a = inputData();
    b = inputData("b");

    cout << "\nHasil perkalian axb adalah: " << kali(a,b);
    cout << "\nHasil pembagian a/b adalah: " << bagi(a,b);
    cout << "\nHasil penambahan a+b adalah: " << tambah(a,b);
    cout << "\nHasil pengurangan a-b adalah: " << kurang(a,b);

    return 0;
}

int inputData(string v) {
    cout << "masukan bilangan " << v << ": ";
    int bil;
    cin >> bil;
    return bil;

}
