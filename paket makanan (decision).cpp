#include <iostream>

using namespace  std;

int main()
{
    int a,b,c,d,jumlah,total;
    char m;

    cout << "Menentukan banyak makanan yang didapat" <<endl;
    cout << "--------------------------------------" <<endl;
    cout << "Paket Makanan" <<endl;
    cout << " a jika membeli lebih dari 10 makanan yang berbeda anda mendapatkan bonus" <<endl;
    cout << " b jika membeli lebih dari 20 makanan yang berbeda anda mendapatkan bonus" <<endl;
    cout << " c jika membeli lebih dari 30 makanan yang berbeda anda mendapatkan bonus" <<endl;
    cout << " d jika membeli lebih dari 35 makanan yang berbead anda mendapatkan bonus" <<endl;
    cout <<endl;
    cout << "Pilih variabel paket makanannya : ";
    cin >>m;
    cout << "Berapa makanan yang ingin anda beli : ";
    cin >>jumlah;
    cout << "--------------------------------------" <<endl;

    if(jumlah >= 35)
    {
        cout << "Alhamdulillah anda mendapatkan bonus 4 paket makanan gratis" <<endl;
        total = jumlah+4;
        cout << "Total banyak makanan anda : " <<total<<endl;
    }
    else if(jumlah >= 30)
    {
        cout << "Alhamdulillah anda mendapatkan bonus 3 paket makanan gratis" <<endl;
        total = jumlah+3;
        cout << "Total banyak makanan anda : " <<total<<endl;
    }
    else if(jumlah >= 20)
    {
        cout << "Alhamdulillah anda mendapatkan bonus 2 paket makanan gratis" <<endl;
        total = jumlah+2;
        cout << "Total banyak makanan anda : " <<total<<endl;
    }
    else if(jumlah >= 10)
    {
        cout << "Alhamdulillah anda mendapatkan bonus 1 paket makanan gratis" <<endl;
        total = jumlah+1;
        cout << "Total banyak makanan anda : " <<total<<endl;
    }cout <<endl;

    cout << "--------------------------------------" <<endl;
    cout << "Terima Kasih Sudah Berbelanja Disini:)" <<endl;
    cout << "--------------------------------------" <<endl;

    return 0;
}
