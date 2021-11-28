#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define MAX 3
#define EPS 0.00001
double radice_q(double num, int it){
    double Q, QPrec;
    QPrec = num/2;
    for(int i = 0; i < it; i++){
        Q = (QPrec + num/QPrec)/2;
        QPrec = Q;
    }
    return Q;
}

double radice_q_con_EPS(double num){
    double Q, QPrec, errore;
    bool esci = false;
    int n;
    QPrec = num/2;
    for (n = 0; n < MAX && esci == false; n++){
        Q = (QPrec  + num/QPrec)/2;
        errore = fabs((Q-QPrec)/Q); //abs = absolute(valore assoluto), fabs -> abs in float
        if (errore < EPS){
            esci = true;
        }
        else{
            QPrec = Q;
        }
    }
    if (n >= MAX){
        cout << "Numero iterazioni eccessivo\n";
    }
    return Q;
}
int main(){
    int n, it;
    cout.precision(15);
    cout << "Inserisci il numerico:" << endl;
    cin >> n;
    //cout << "Inserisci il numero di iterazioni:" << endl;
    //cin >> it;
    cout << radice_q_con_EPS(n);
    return 0;
}


//31.2117429380529
//30.3150127824482
//30.3150127824482
//
//30.3150127824482353844359749928
//1 int
//1.0