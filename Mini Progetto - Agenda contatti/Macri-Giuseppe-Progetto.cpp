#include <iostream>
#include <vector>
using namespace std;


struct Contatto {
    string nome;
    string telefono;
};

int main() {

   
    vector<Contatto> rubrica;

    
    rubrica.push_back({"Mario Rossi", "111"});
    rubrica.push_back({"Luca Bianchi", "222"});
    rubrica.push_back({"Anna Verdi", "333"});
    rubrica.push_back({"Giulia Neri", "444"});
    rubrica.push_back({"Paolo Gialli", "555"});
    rubrica.push_back({"Sara Blu", "666"});
    rubrica.push_back({"Marco Rosa", "777"});
    rubrica.push_back({"Elena Viola", "888"});
    rubrica.push_back({"Davide Grigio", "999"});
    rubrica.push_back({"Chiara Arancio", "000"});

    
    string nomeDaCercare;
    cout << "Inserisci il nome da cercare: ";
    cin >> nomeDaCercare;

    
    bool trovato = false;

    for (int i = 0; i < rubrica.size(); i++) {
        if (rubrica[i].nome == nomeDaCercare) {
            cout << "Contatto trovato!" << endl;
            cout << "Nome: " << rubrica[i].nome << endl;
            cout << "Telefono: " << rubrica[i].telefono << endl;
            trovato = true;
        }
    }

    
    if (!trovato) {
        cout << "Contatto non trovato" << endl;
    }

    return 0;
}