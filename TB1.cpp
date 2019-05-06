#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct puskes{
char nama,poli;
string alamat,keluhan;
int umur,nomor,edit,hapus;
}data[100];

int a,c,d,e,f,i,k,l;
    void datapasien(puskes)
{
    int pilih=0,p=1;
    do{
        cout<<"=======================DATA PASIEN====================="<<endl;
        cout<<"\n1.Input Data"<<endl;
        cout<<"\n2.Lihat Data"<<endl;
        cout<<"\n3.Edit Data"<<endl;
        cout<<"\n4.Hapus Data"<<endl;
        cout<<"\n0.Keluar"<<endl;
        cout<<"Pilih Menu : ";cin>>pilih;
        cout<<"======================================================="<<endl;

    switch(pilih)
    {
        case 1:{if(p==10){cout<<"Data Kosong"<<endl;}else
        {
            cout<<"Nomor Pasien\t : ";cin>>data[a].nomor;
            cout<<"Nama Pasien\t : ";cin>>data[a].nama;
            cout<<"Alamat Pasien\t : ";cin>>data[a].alamat;
            cout<<"Keluhan Pasien\t : ";cin>>data[a].keluhan;
            cout<<endl;


        };};break;

        case 2:{if(p==10){cout<<"Data Salah"<<endl;}else{{
        {
            cout<<"================================TAMPILKAN DATA======================================"<<endl;
            cout<<"-------------------------------------------------"<<endl;
            cout<<"Nomor\t||Nama Pasien\t||Alamat\t||Keluhan\t||"<<endl;
            cout<<"-------------------------------------------------"<<endl;

            cout<<""<<data[c].nomor;
            cout<<"\t"<<data[c].nama;
            cout<<"\t\t"<<data[c].alamat;
            cout<<"\t\t"<<data[c].keluhan;
            cout<<endl;

        };};break;}}

        case 3:{if(p==10){cout<<"Data Salah"<<endl;}else
        {
            cout<<"===================EDIT DATA================="<<endl;
            cout<<"Masukkan data yang akan diedit : ";cin>>k;
            l=k-1;
            cout<<"Nama : ";cin>>data[l].nama;
            cout<<"Alamat : ";cin>>data[l].alamat;
        };}break;

        case 4:{if(p==10){cout<<"DATA SALAH"<<endl;}else
        {
            cout<<"==========================HAPUS DATA======================"<<endl;
            cout<<"Pilih Nomor Data Yang akan dihapus : ";cin>>data[100].hapus;
            if(data[100].hapus==data[i].nomor){cout<<"Data Telah dihapus"<<endl;}
            else if(data[100].nomor!=data[i].nomor){cout<<"Data Tidak Ditemukan"<<endl;}

        ;}break;}

        case 0:cout<<"================Keluar=================";break;
        default:cout<<"Input Salah"<<endl;

}}
while(pilih!=0)
;}



    void poli(puskes)
    {
        cout<<"========================DATA POLI======================"<<endl;
        int pilih=4,w=1;
        do{
            cout<<"\n1.Daftar Data Poli"<<endl;
            cout<<"\n2.Lihat Data Poli Pasien"<<endl;
            cout<<"\n3.Edit Data Poli"<<endl;
            cout<<"\n4.Hapus Data Poli"<<endl;
            cout<<"\n0.Keluar"<<endl;
            cout<<"Pilih Menu";cin>>pilih;

            switch(pilih)
            {
                case 1:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"===========Daftar Poli=========="<<endl;
                    cout<<"\n1.Poliklinik Anak"<<endl;
                    cout<<"\n2.Poliklinik Umum"<<endl;
                    cout<<"\n3.Poliklinik Gigi"<<endl;
                    cout<<"\n4.Poliklinik Penyakit Dalam"<<endl;
                    cout<<"\n5.Poliklinik T.H.T"<<endl;
                    cout<<"\n6.Poliklinik Gizi"<<endl;
                    cout<<"================================"<<endl;
                };}break;

                case 2:{if(w==10){cout<<"Data Salah"<<endl;}else
                {
                 cout<<"\t\tTAMPILKAN DATA POLI\t\t"<<endl;
                 cout<<"============================================"<<endl;
                 cout<<"NAMA PASIEN\t||"<<endl;
                 cout<<"============================================"<<endl;
                 cout<<" "<<data[d].nama<<endl;
                 cout<<"--------------------------------------------"<<endl;
                 cout<<endl;
                 ;};}break;

                case 3:{if(w==10){cout<<"Data Salah"<<endl;}else
                {
                cout<<"===================EDIT DATA================="<<endl;
                cout<<"Masukkan data yang akan diedit : ";cin>>e;
                f=e-1;
                cout<<"Nama : "<<data[f].nama;
                cout<<"Poli : "<<data[f].poli;
                };}break;


                case 4:{if(w==10){cout<<"DATA SALAH"<<endl;}else
                {
                cout<<"==========================HAPUS DATA======================";
                cout<<"Pilih Data Yang akan dihapus : ";cin>>data[100].hapus;
                if(data[100].hapus==data[i].poli){cout<<"Data Telah dihapus"<<endl;}
                else if(data[100].nomor!=data[i].poli){cout<<"Data Tidak Ditemukan"<<endl;}

                ;}break;}

                    case 0:cout<<"================Keluar=================";break;
                default:cout<<"Input Salah"<<endl;

            }}

            while(pilih!=0)
        ;}








        int main()
        {
                int pilih,p=1;
                do{
                    cout<<"++++++++++++++++++APLIKASI PENDAFTARAN PASIEN PUSKESMAS++++++++++++++++++++"<<endl;
                    cout<<"\n1.Data Pasien"<<endl;
                    cout<<"\n2.Data Poli"<<endl;
                    cout<<"\n3.Keluar"<<endl;
                    cout<<"Pilih Menu : ";cin>>pilih;
                    switch(pilih)
                    {
                        case 1:{if(p==10){cout<<"DATA KOSONG"<<endl;}else{datapasien(data[c]);};}break;
                        case 2:{if(p==10){cout<<"Salah"<<endl;}else{poli(data[100]);};}break;
                        case 0:cout<<"*********PROGRAM SELESAI***********"<<endl;break;
                        default :cout<<"INVALID"<<endl;

                    }}
                    while(pilih!=0);

getch();
        }
