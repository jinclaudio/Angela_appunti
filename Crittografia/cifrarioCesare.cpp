#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

const string prima = "ABCDEFGHIJKLMNQRSTUVXYWZ";
const string dopo = "DEFGHIJKLMNQRSTUVXYWZABC";

int main(){
    string frase = "", risultato = "";
    int chiave=2;
    cout << "Programma di cifratura di Cesare \n";
    cout << "Inserisci la vhiave di cifratura: \n";
    cout << "Inserisci il testo da cifrare: \n";
    getline(cin, frase);
    for (int i = 0; i < frase.length(); i = i + chiave){
        bool trovato = false;
        int j = 0;
        for (j = 0; j < prima.length(); j++){
            if (toupper(frase[i]) == prima[j]){
                risultato = risultato + dopo[j];
                trovato = true;
            }
        }
        if (trovato == false){
            risultato = risultato + frase[i];
        }
    }
    cout << "Il test cifrato con Cesare e': " << risultato << endl;
    return 0;
}