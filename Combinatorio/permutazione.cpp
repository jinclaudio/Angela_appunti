#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int fattoriale(int n){
    if (n < 1){
        return 1;
    }
    else{
        return n*fattoriale(n-1); //richiama fattoriale con n - 1
    }
}

void scambia (char* stringa, int x, int y){
    int temp; //variable temporale
    temp = stringa[x]; //metto stringa[x] in temp per conservarlo apparte
    stringa[x] =stringa[y]; //metto stringa[y] in stringa[x]
    stringa[y] = temp; // metto temp in stringa[y]
}

void permuta(char *parola, int x, int fine){
    //condizione di termine
    if (x == fine){
        cout << parola << ".";
    }
    else{ //ciclo per fare permutazione
        for (int i = x; i <= fine; i++){
            scambia(parola, x, i); //scambia lettera in posizione x e quella in posizione i 
            permuta(parola, x+1, fine); //richiama se stessa facendo un passo in avanti
            scambia(parola, x, i); //scambia lettera in posizione x e quella in posizione i 
        }
    }
}

int main(){
    char parola[9];
    cout << "Inserisco la parola: \n";
    cin >> parola;
    int lunga = strlen(parola);
    cout << "lunghezza della parola e':\n" << lunga << endl; 
    cout << "Permutazioni:\n";
    cout << fattoriale(lunga) << endl;
    permuta(parola, 0, lunga - 1);
}

