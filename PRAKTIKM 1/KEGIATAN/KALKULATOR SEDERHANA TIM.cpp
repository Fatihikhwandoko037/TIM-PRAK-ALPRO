#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;
int main (int argc, char**argv)
{
                float x,y,hasil,pilih;
               
                system("cls");
                cout<<"\t\t\t\t=============================================\n"<<endl;
                cout<<"\t\t\t\t  --------- KALKULATOR SEDERHANA -----------"<<endl<<endl;
                cout<<"\t\t\t\t============================================="<<endl;
               
                kalkulator :
                                cout<<"Operator Perhitungan : "<<endl;
                                string Penjumlahan ="(1) Penjumlahan (+)";
                                cout<<Penjumlahan<<endl;
                                string Pengurangan ="(2) Pengurangan (-)";
                                cout<<Pengurangan<<endl;
                                string Perkalian ="(3) Perkalian (*)";
                                cout<<Perkalian<<endl;
                                string Pembagian ="(4) Pembagian (/)";
                                cout<<Pembagian<<endl<<endl;
                               
                                cout<<"Masukan Angka Pertama      = ";
                                cin>>x;
                                cout<<"Masukan Angka Kedua        = ";
                                cin>>y;
                               
                                int z;
                                cout<<"Pilih Operator Perhitungan = ";
                                cin>>z;
                               
                                if (z==1)
                                {
                                                hasil=x+y;
                                                cout<<"Hasil Penjumlahan = "<<hasil<<endl;
                                }
                                else if (z==2)
                                {
                                                hasil=x-y;
                                                cout<<"Hasil Pengurangan = "<<hasil<<endl;
                                }
                                else if (z==3)
                                {
                                                hasil=x*y;
                                                cout<<"Hasil Perkalian = "<<hasil<<endl;
                                }
                                else if (z==4)
                                {
                                                hasil=x/y;
                                                cout<<"Hasil Pembagian = "<<hasil<<endl;
                                }
                                cout<<"========================================================"<<endl;
                                cout<<"Coba Lagi [1]"<<endl;
                                cout<<"Keluar    [2]"<<endl;
                                cout<<"========================================================"<<endl;
                                cout<<"Pilih : "; cin>>pilih;
                                if (pilih==1)
                                {
                                                goto kalkulator;
                                }
                                if (pilih==2)
                                {
                                    system("cls");
                                    cout<<"\t\t\t\t========================================================"<<endl;
                                    cout<<"\t\t\t\t     Terima Kasih Telah Menggunakan Kalkulator Ini"<<endl;
                                    cout<<"\t\t\t\t========================================================"<<endl;
                                    system("pause");
                                }
                                return 0;
}

