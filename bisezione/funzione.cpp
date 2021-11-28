#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

double f(double x){
    return pow(3, (x)) + 3* (x) -5;
}

int esisteZero(double a, double b){
    if (f(a) * f(b) >= 0)
        return 0;
    else{
        return 1;
    }
}
double cercaZero(double Xa, double Xb, double intervallMin){
    int fine = 0;
    double Fa, Fb; //f(a) e f(b) -- estremi dell'intervallo
    double Xm, Fm; //coordinate del punto medio
    double intervallo = 0; //larghezza dell'intervallo
    while (fine == 0){
        Fa = f(Xa);
        Fb = f(Xb);
        Xm = (Xa + Xb)/2;
        Fm = f(Xm);
        if (Fm * Fa < 0){
            Xb = Xm;
        }
        else{
            Xa = Xm;
        }
        intervallo = Xb - Xa;
        if ((intervallo < intervallMin) || (Fm == 0))
            fine = 1;
    }
    return Xm;
    
}

int main(){
    int haZero;
    double zero;
    double a, b;
    double intervalloMin = 0.1;
    cout << "Calcolo approssimato della radice \n";
    cout << "  <- metodo di bisezione  ->\n";
    cout << "Inerisci l'intervallo: \n";
    cin >> a >> b;
    haZero = esisteZero(a,b);
    if (haZero == 1){
        zero = cercaZero(a, b, intervalloMin);
        cout << "la radice e': " << zero << endl;
    }
    else{
        cout << "non ha radice in " << a << ", " << b;
    }
    return 0;
}
