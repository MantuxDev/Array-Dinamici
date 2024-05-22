// Array Dinamici 

/*
    Gli array dinamici, a differenza degli array statici
    sono più permissivi, l'array dinamico permette di 
    poter aggiungere e rimuovere elementi a piacimento,
    quindi non dobbiamo identificare la sua dimensione 
    durante l'inizializzazione.

        tipo nome[dimensione];

    Per utilizzare i vettori dinamici è necessario includere
    la libreria vector.

    Sintassi libreria:

    #include <vector>
    *Dichiarazione*
    vector<tipo> nome;

    *Inizializzazione*
    vector<tipo> nome = {valore1, valore2, ...};
*/

#include <iostream>
#include <vector> // -> libreria per array dinamici
#include "vector.hpp"
#include "prototipi.hpp"

using namespace std;

int main(){

    int s;
    vector<int> v;

    do{

        system("cls");
        s=menu();

        switch(s){

            case 1:{
                caricamento(v);
                next();
                break;
            }

            case 2:{
                stampa(v);
                next();
                break;
            }

            case 3:{
                v.clear();
                cout<<BLUE<<"Vettore pulito!\n"<<RESET;
                next();
                break;
            }

            case 4:{
                v.pop_back();
                cout<<BLUE<<"Ultimo elemento rimosso!\n"<<RESET;
                next();
                break;
            }

            case 5:{
                v.insert(v.begin(), 0); // 0 valore che andiamo ad aggiungere
                cout<<BLUE<<"Primo elemento aggiunto!\n"<<RESET;
                next();
                break;
            }

            case 6:{
                add(v);
                next();
                break;
            }

            case 7:{
                remove(v);
                next();
                break;
            }

            case 0:{
                cout<<GREEN<<"Arrivederci!\n"<<RESET;
            }

            default:{
                cout<<RED<<"Scelta non valida!\n"<<RESET;
                next();
                break;
            }
        }
    }while(s!=0);

    return 0;
}