#include <iostream>
#include <vector>
#include "vector.hpp"

using namespace std;

int menu(){

    int s;

    cout<<BLUE<<"\t-----Menu-----\n"<<RESET;
    cout<<BLUE<<"1. "<<RESET<<"Carica vettore\n";
    cout<<BLUE<<"2. "<<RESET<<"Stampa il vettore\n";
    cout<<BLUE<<"3. "<<RESET<<"Pulisci il vettore\n";
    cout<<BLUE<<"4. "<<RESET<<"Rimuovi ultimo elemento\n";
    cout<<BLUE<<"5. "<<RESET<<"Aggiungi come primo elemento\n";
    cout<<BLUE<<"6. "<<RESET<<"Aggiungi elemento dove vuoi\n";
    cout<<BLUE<<"7. "<<RESET<<"Rimuovi elemento\n";
    cout<<BLUE<<"0. "<<RESET<<"Esci\n";

    cout<<GREEN<<"\nFai una scelta: "<<RESET;
    cin>>s;

    return s;
}

void caricamento(vector<int> &v){

    int n;

    cout<<BLUE<<"Inserisci la dimensione del vettore: "<<RESET;
    cin>>n;
    v.resize(n); //nuova dimensione
    for(int i=0;i<n;i++){
        cout<<BLUE<<"Inserisci l'elemento "<<i+1<<": "<<RESET;
        cin>>v[i];
    }
}

void stampa(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<BLUE<<"\nDimensione: "<<v.size()<<RESET;
}

void add(vector<int> &v){

    int n,nElemento;

    stampa(v);

    cout<<BLUE<<"Inserisci dove vuoi inserire il nuovo elemento: "<<RESET;
    cin>>n;

    cout<<BLUE<<"Inserisci l'elemento: "<<RESET;
    cin>>nElemento;

    v.insert(v.begin()+n-1,nElemento);

    cout<<BLUE<<"Elemento aggiunto!\n"<<RESET;

    stampa(v);
}

void remove(vector<int> &v){

    int n;

    stampa(v);

    cout<<"Inserisci l'elemento da rimuovere: ";
    cin>>n;

    v.erase(v.begin()+n-1);

    stampa(v);
}

void next(){

    cout<<GREEN<<"\nPremi qualsiasi tasto per continuare..."<<RESET;
    cin.ignore();
    cin.get();
}