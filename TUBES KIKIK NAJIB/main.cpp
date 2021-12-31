#include <iostream>
#include "parent.h"
#include "child.h"
#include "relasi.h"

using namespace std;

List_parent LP;
List_child LC;

int main()
{
    address_parent P;
    address_child C;
    matkul x;
    mahasiswa y;
    int pilihan;

    createList(LP);
    createList(LC);

    pilihan = selectMenu();
    while (pilihan != 0) {
        int i = 0;
        char jawab;
        int jmlMK;
        switch(pilihan) {
        case 1: ///(DONE!!)
            cout << "Masukkan Jumlah Matkul: ";
            cin >> jmlMK;
            while (i < jmlMK) {
                cout << "Masukkan Mata Kuliah: ";
                cin >> x.namaMK;
                cout << "Masukkan Nama Kelas: ";
                cin >> x.namaKls;
                cout << "Masukkan Kuota Maksimal: ";
                cin >> x.kuotaMaks;
                cout << "Masukkan Jenis Mahasiswa: ";
                cin >> x.jenisMhs;
                cout << endl;
                P = alokasi(x);
                insertFirst(LP, P);
                i++;
            }
            break;

        case 2: ///(DONE!!)
            printInfo(LP);
            break;

        case 3: ///(DONE!!)
            cout << "Masukkan Nama Mahasiswa: ";
            cin >> y.namaMhs;
            cout << "Masukkan NIM Mahasiswa: ";
            cin >> y.nimMhs;
            cout << "Masukkan Asal Kelas: ";
            cin >> y.asalKls;
            cout << "Masukkan Jenis Mahasiswa: ";
            cin >> y.jenisMhs;
            cout << endl;
            C = alokasi(y);
            insertFirst(LC, C);

            break;

        case 4: ///(DONE!!)
            printInfo(LC);
            break;

        case 5: ///(DONE!!)
            cout<<"Masukkan Nama Matkul : ";
            cin>>x.namaMK;
            P = findElm(LP, x);
            cout<<endl;

            cout<<"Masukkan Nama Mahasiswa : ";
            cin>>y.namaMhs;
            C = findElm(LC, y);
            cout<<endl;
            insertFirst(child(P), alokasi(y));
            printInfo(LP);
            break;

        case 6: ///(Masii eror xixixi)
            printAjah(LP, LC);
            break;
        }

        cout << "Kembali ke menu utama ? (Y/N)" << endl;
        cin >> jawab;
        if(jawab = "Y" or "y"){
            pilihan = selectMenu();
        } else {
            cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
        }
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
