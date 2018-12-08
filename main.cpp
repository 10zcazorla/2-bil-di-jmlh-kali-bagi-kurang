#include <iostream>
#include <conio.h>

using namespace std;

int Penjumlah()
{
    float a,b;
    char aritmatika;
    cout << "(1)Operasi Penjumlahan" << endl;
    cout << "Masukkan Bilangan pertama = ";
    cin >> a;
    cout << "Masukkan Bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a+b << endl;
    cout << endl;
}
int Pengurangan()
{
    float a,b;
    char aritmatika;
    cout << "(2)Operasi Pengurangan" << endl;
    cout << "Masukkan Bilangan pertama = ";
    cin >> a;
    cout << "Masukkan Bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a-b << endl;
    cout << endl;
}
int Perkalian()
{
    float a,b;
    char aritmatika;
    cout << "(3)Operasi Perkalian" << endl;
    cout << "Masukkan Bilangan pertama = ";
    cin >> a;
    cout << "Masukkan Bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a*b << endl;
    cout << endl;
}
int Pembagian()
{
    float a,b;
    char aritmatika;
    cout << "(4)Operasi Pembagian" << endl;
    cout << "Masukkan Bilangan pertama = ";
    cin >> a;
    cout << "Masukkan Bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a/b << endl;
    cout << endl;
}
int main ()
{
    cout << endl;
    Penjumlah();
    Pengurangan();
    Perkalian();
    Pembagian();
    cout << endl;
    getch();
    return 0;
}
