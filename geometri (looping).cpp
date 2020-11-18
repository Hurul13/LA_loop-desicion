#include <iostream>

using namespace std;

int main()
{
    int i, v, r, n, s = 0, h = 0;
    int counter = 0;
    char u = 'y';

do {
    cout << "Menentukan Deret Bilangan Geometri" <<endl;
    cout << "----------------------------------" <<endl;
    cout << "Input Suku Pertama : ";
    cin >>v;
    cout << "Input Rasio : ";
    cin >>r;
    cout << "Iput Banyaknya Suku : ";
    cin >>n;
    cout << "----------------------------------" <<endl;

    for(i=0; i<n; i++)
    {
        cout <<v<< " ";
        h = h+v;
        v = v*r;
    }cout <<endl;

    cout <<endl;
    cout << "Total Semua Suku Adalah : " <<h<<endl;
    cout << "----------------------------------" <<endl;
    cout << "Apakah kamu ingin mengulanginya?" <<endl;
    cout << "Jawab (y/t) : ";
    cin >>u;
    cout << "----------------------------------" <<endl;
    // increment counter
    counter++;
}
while(u == 'y');

    cout << "Perulangan telah selesai" <<endl;
    cout << "Kamu mengulangi sebanyak " << counter << " kali" <<endl;
    cout <<endl;

    return 0;
}
