#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;

    srand(time(0));

    nBilA = rand () % 10;
    nBilB = rand () % 10;

    cout << "Bilangan A adalah = " << nBilA << endl;
    cout << "Bilangan B adalah = " << nBilB << endl;

    if (nBilA == nBilB){
        status = "nilai A dan nilai B sama besar";
    }
    else if(nBilA > nBilB){
        status = "nilai A lebih besar daripada B";
    }
    else {
        status = "nilai B lebih Besar daripada A";
    }

    cout << "Statusnya adalah = " << status << endl;
    
    return 0;
}

    

    