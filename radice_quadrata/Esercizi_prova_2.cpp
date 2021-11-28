#include <iostream>
#include <math.h>

using namespace std;
#define MAX 100
double radice_q(double num){
    double Q, QPrec;
    QPrec = num/2;
    for(int i = 0; i < 2; i++){
        Q = (QPrec + num/QPrec)/2;
        QPrec = Q;
    }
    return Q;
}

double successione_babilonese(double num){
    double Q, QPrec;
    QPrec = 1/radice_q(num); // 1/x2, dove radice_q(num) = x2
    Q = (3*QPrec - num * QPrec * QPrec * QPrec)/2;
    QPrec = Q;
    return Q;
}

int main(){
    int n;
    cin >> n;
    double radice_inv = successione_babilonese(n);
    double radice = 1/radice_inv;
    cout << "1/radice = " << radice_inv << endl;
    cout << "radice quadrata = " << radice << endl;
    return 0;
}
