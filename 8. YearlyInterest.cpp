#include <iostream>
using namespace std;
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

                break;
            case 2:
                //Funkcja
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