#include <iostream>
#include <math.h>


using namespace std;
#define MAX 10
double radice_q(double a){
    int n = 0;
    double x = 1.0;
    for (n = 0; n < MAX; n++){
        x = (x/2) + (a/(2*x));
    }
    return x;
}