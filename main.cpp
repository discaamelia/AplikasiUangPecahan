#include <cstdlib>
#include <iostream>

using namespace std;
    
    
int main(int argc, char *argv[])
{
    int jumlah, ratusanribu, limaplhribu, duaplhribu, seplhribu, limaribu,duaribu,
    seribu, limaratus, duaratus, seratus, limaplh, sisa;

cout <<"\t\t  Menghitung Pecahan Uang";
cout <<"\n\t\t***************************\n\n";
cout << "\tJumlah uang dalam rupiah : ";
cin >> jumlah;
cout << "\t...................................\n";
ratusanribu = jumlah / 100000;
sisa = jumlah - (ratusanribu * 100000);
limaplhribu = sisa / 50000;
sisa = sisa - (limaplhribu * 50000);
duaplhribu = sisa / 20000;
sisa = sisa - (duaplhribu * 20000);
seplhribu = sisa / 10000;
sisa = sisa - (seplhribu * 10000);
limaribu = sisa / 5000;
sisa = sisa - (limaribu * 5000);
duaribu = sisa / 2000;
sisa = sisa - (duaribu * 2000);
seribu = sisa / 1000;
sisa = sisa - (seribu * 1000);
limaratus = sisa / 500;
sisa = sisa - (limaratus * 500);
duaratus = sisa / 200;
sisa = sisa - (duaratus * 200);
seratus = sisa / 100;
sisa = sisa - (seratus * 100);
if (jumlah >= 100000)
cout << "\tPecahan 100000 ada = "<<ratusanribu<<" Lembar"<<endl;
if (jumlah >= 50000)
cout << "\tPecahan 50000  ada = "<<limaplhribu<<"\tLembar"<<endl;
if (jumlah >= 20000)
cout << "\tPecahan 20000  ada = "<<duaplhribu<<"\tLembar"<<endl;
if (jumlah >= 10000)
cout << "\tPecahan 10000  ada = "<<seplhribu<<"\tLembar"<<endl;
if (jumlah >= 5000)
cout << "\tPecahan 5000   ada = "<<limaribu<<"\tLembar"<<endl;
if (jumlah >= 2000)
cout << "\tPecahan 2000   ada = "<<duaribu<<"\tLembar"<<endl;
if (jumlah >= 1000)
cout << "\tPecahan 1000   ada = "<<seribu<<"\tLembar"<<endl;
if (jumlah >= 500)
cout << "\tPecahan 500    ada = "<<limaratus<<"\tPerak"<<endl;
if (jumlah >= 200)
cout << "\tPecahan 200    ada = "<<duaratus<<"\tPerak"<<endl;
if (jumlah >= 100)
cout << "\tPecahan 100    ada = "<<seratus<<"\tPerak"<<endl;
if (jumlah >= 0)
cout << "\tInfak          ada = "<<sisa<< "\trupiah"<<endl;
cout << "\t..................................."<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
