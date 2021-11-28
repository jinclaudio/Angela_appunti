#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int conta, dentro, tanti;
    float n, x, y, pi;
    double percent1=0;
    cout.precision(15);
    tanti = 10000000;
    dentro = 0;
    srand(time(NULL));
    for(conta = 0; conta < tanti; conta++){
        n = rand();
        x = ((double)n)/ RAND_MAX; // 0 -- 1
        n = rand();
        y = ((double)n)/RAND_MAX; // punto di coordinata (x; y)
        if (x*x + y*y == 1){
            dentro++;
            percent1++;
        }
        else if (x*x + y*y < 1){ //(x^2 + y^2 < 1)
            dentro = dentro + 1;
            
        }
    }
    pi = (4*dentro)/(double)tanti;
    cout << "Calcolo pigreco col Metodo Montecarlo\n";
    cout << "PIgreco: " << pi << endl;
    cout << "Sono stati generati " << tanti << " numeri.\n";
    cout << "Percentuale di errore: " << percent1/(double)dentro << "%"; // caso fvorevore / casi possibile * 100%
    return 0;
}
