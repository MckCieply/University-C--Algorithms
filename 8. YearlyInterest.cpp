#include <iostream>
#include <string>
using namespace std;
int fillArray(int i, string type){
    double input;
    cout << type << " z " << i+1 <<" miesiaca: ";
    cin >> input;
    return input;
}

void menu(){
    int choice;
    double revenue[12];
    double costs[12];
    cout << "1. Wprowadz przychody \n2. Wprowadz koszty \n3. Wyliczenie \n4. Min Max Avg \n5. Bilans roczny\n";
    cout << "Prosze podac pozycje w menu: ";
    cin >> choice;
    if(choice >= 1 && choice <= 5){
        switch(choice){
            case 1:
                for(int i = 0; i < 12; i++){
                    revenue[i] = fillArray(i, "Przychody");
                }
                break;
            case 2:
                for(int i = 0; i < 12; i++){
                    costs[i] = fillArray(i, "Koszty");
                }
                break;
            case 3:
                //Funkcja
                break;
            case 4:
                //Funkcja
                break;
            case 5:
                //Funkcja
                break;

        }
    }
    else
        cout << "Podano zle dane";
}

int main(int argc, char* argv[]){
    menu();
}