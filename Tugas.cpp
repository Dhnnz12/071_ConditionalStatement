#include <iostream>
using namespace std;

int main(){
    // siswa mempunyai 2 niali yaitu matematika dan fisika
    // kemudian dihitung reratanya, jika rerata lebih dari 60
    // maka dinyatakan lulus, atau setidaknya nilai matematika
    //lebih dari 70 dan jika tidak keduanya maka
    //dinyatakan tidak lulus

    int nNilaiMatematika, nNilaiFisika, nRerata;
    string Cstatus;

    cout << "Masukkan nilai Matematika = " << endl;
    cin >> nNilaiMatematika;
    cout << "Masukkan nilai Fisika = " << endl;
    cin >> nNilaiFisika;

    nRerata = (nNilaiMatematika + nNilaiFisika) / 2;

    if (nRerata > 60 || nNilaiMatematika > 70){
        Cstatus = "Lulus";
    }
    else{
        Cstatus = "Tidak Lulus";
    }
    cout << "Anda dinyatakan : " << Cstatus;
    return 0;
}