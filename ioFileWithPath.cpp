#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string baris;
    string namaFile;

    cout<< "Masukkan Nama File : ";
    cin >> namaFile;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(namaFile + ".txt", ios :: out);
 


}