# praktikum6

## latihan1 **menggunakan header untuk menggabungkan fungsi void**

**Alur Algoritma**

1. mulai program fungsi dengan menggunakan void
2. deklarasiakan terlebihdahulu fungsi yang ingin kita masukan ke header di satu file
3. masukan file tadi ke header yang ingin kita buat
4. kemudian panggil semua data tadi yang sudah di buat di foder yang berbeda kedalam pusat project yang,
yang ingin kita buat jalan kan project itu dengan menggunakan fungsi juga 
5. run project jika tidak ada kendala atau eror

**pict program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan1/pict1.png

**flowchart program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan1/flowchart1.png

**Kode Program**

#**Header** 
```
#ifndef KALKULATOR_H_INCLUDED
#define KALKULATOR_H_INCLUDED
int kali(int, int);
double bagi(int, int);
int tambah(int, int);
int kurang(int, int);


#endif // KALKULATOR_H_INCLUDED
```
#**isi**
```
#include<iostream>
using namespace std;

int kali(int a, int b){
return a*b;
}

double bagi(int a, int b){
return a/b;
}

int tambah(int a, int b){
return a+b;
}

int kurang(int a, int b){
return a-b;
}
```
#**utama**
```
#include<iostream>
#include"kalkulator.h"

using namespace std;

int inputData(string v="A");

int main(int argc, char const *argv[])
{
    int a, b;
    a = inputData();
    b = inputData("B");

    cout << "\nHasil Perkalian AxB adalah: " << kali(a, b) << endl;
    cout << "\nHasil Pembagian A/B adalah: " << bagi(a, b) << endl;
    cout << "\nHasil Penambahan A+B adalah: " << tambah(a, b)<< endl;
    cout << "\nHasi Pengurangan A-B adalah: " << kurang(a, b) << endl;


    return 0;
}
int inputData(string v)
{
    cout << "masukan Bilagan " << v << ": ";
    int bil;
    cin >> bil;
    return bil;
}
```

**latihan2.1**

**Alur Algoritma**
1. Mulai program untuk menukar nilai
2. Gunakan cara pasing parameter untuk mengalamatkan yang nanti akan diubah dalam fungsi
3. Untuk menukar gunakan pointer pada variable penukar untuk menandakan
4. Build and run jika tidak ada kendala (eror) jalankan

**pict program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan2/pict2.1.png

**flowchart program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan2/flowchart%202.1.png

**kode Program**
```
#include<iostream>
using namespace std;

void tukar(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}
main(){
int a = 5, b = 8;
cout<< "\nSebelum di tukar\n";
cout << "Nilai 1 : " << a << endl;
cout << "Nilai 2 : " << b << endl;
tukar(&a, &b);
cout << "\nSesudah ditukar\n";
cout << "Nilai 1 : " << a << endl;
cout << "Nilai 2 : " << b << endl;
return 0;
}
```

**latihan2.2**

**Alur Algoritma**

1. mulai program menghitung dua bilangan dengan oprator penjumlah
2. deskripsikan interger a dan b
3. gunakan fungsi pengulangan for.
4. gunakann kembali rumus fungsi untuk menjalankan program
5. build and run

**pict program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan2/pict2.2.png

**Flowchart program**
https://github.com/ayuanjani1234/praktikum6/blob/master/latihan2/flowchart%202.2.png


**Code Program**
```
#include<iostream>
#include<math.h>

using namespace std;

int kali(int m, int n)
{
    int i, hasil=0;
    for (i=1; i<=(n);i++)
        hasil +=m;
    if (n<0) return(-hasil); else return(hasil);
}
main(){
    int a,b;
    cout<<"\nMasukan Bilangan : ";
    cin >>a;
    cout<<"\nDikali Dengan : ";
    cin >>b;
    cout<< "Nilai " << a << " X " << b <<"=" << kali(a,b);
    return 0;
}
```
