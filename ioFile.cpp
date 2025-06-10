#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string baris;
    //membuaka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file

    while (true)
    {
        cout<< "-"
        //mendapatkan karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari baris ke dalam file
        outfile << baris << endl;
        
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= Membuka dan membaca file"<<endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(inline, baris))
        {
            /* code */
        }
        
    }
    
    

}