#include <iostream>
#include <math.h>

using namespace std;

#define MAX 100

double radice(double num, double EPS){
    double Q, QPrec, errore;
    bool esci = false;
    int n;
    QPrec = num/2;
    for (n = 0; n < MAX && esci == false; n++){
        Q = (QPrec  + num/QPrec)/2;
        errore = fabs((Q-QPrec)/Q);
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
    double num, EPS;
    cout << "Calcolo della radice quadrata:\n";
    cout << "Inserisci il numero: \n";
    cin >> num;
    if (num < 0){
        cout << "Il numero deve essere positivo.\n";
    }
    else{
        cout << "inserisci l'EPS:\n";
        cin >> EPS;
        if (EPS < 0.1 && EPS > 0.000001){
            cout << radice(num,EPS) << endl;
        }
        else{
            cout << "EPS deve essere compreso tra 0,1 e 0,000001\n";
        }
    }
    return 0;
}