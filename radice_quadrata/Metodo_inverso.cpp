#include <iostream>
#include <math.h>

using namespace std;
#define MAX 10
int count = 0;


double inverso_radice_q(double num){
    int n;
    double x = 0.002;
    for(n = 0; n < MAX; n++){
        x = 0.5 * x * (3-num*x*x);
        count++;
    }
    return x;
}

int main(){
    int numero;
    cin >> numero;
    cout << "1/radice_quadrata= "  << inverso_radice_q(numero) << endl;
    //cout << "radice quadrata = " << 1/inverso_radice_q(n) << endl;
    cout << count;
    return 0;
}