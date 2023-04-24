#include <iostream>
#include <string>
#include <array>
using namespace std;
double fillArray(int i, string type){
    double input;
    cout << type << " z " << i+1 <<" miesiaca: ";
    cin >> input;
    return input;
}
void calculateIncome(double income[], double revenue[], double costs[]){
    for(int i = 0; i < 12; i++){
        income[i] = revenue[i] - costs[i];
    }
}

void menu(){
    int choice;
    double revenue[12];
    double costs[12];
    double income[12];
    while(choice != 99){
        cout << "1. Wprowadz przychody \n2. Wprowadz koszty \n3. Wyliczenie \n4. Min Max Avg \n5. Bilans roczny\n 99. Koniec\n";
        cout << "Prosze podac pozycje w menu: ";
        cin >> choice;
        if(choice >= 1 && choice <= 5){
            switch(choice){
                case 1:     //Revenue input
                    for(int i = 0; i < 12; i++){
                        revenue[i] = fillArray(i, "Przychody");
                    }
                    break;
                case 2:     //Costs input && calculating income
                    for(int i = 0; i < 12; i++){
                        costs[i] = fillArray(i, "Koszty");
                    }
                    break;
                case 3:     //Yearly
                    double yearly_revenue = 0;
                    double yearly_costs = 0;
                    double yearly_income = 0;
                    for(int i = 0; i < 12; i++){
                        yearly_revenue += revenue[i];
                    }
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
    for(int i = 0; i < 12; i++)
        cout << income[i] << " ";
}

void balance(double costs[], double revenue[], double income[])
{
    cout << "+------------+------------+------------+-------------+" << endl;
    cout << "| Przychod   | Koszt      | Dochod     | strata/zysk |" << endl;
    cout << "+------------+------------+------------+-------------+" << endl;

    for(int i=0; i<12; i++){
        printf("| %10.2lf | %10.2lf | %10.2lf |", revenue[i], costs[i],income[i]);
        if(income[i]>0){
            cout << " Zysk        |";
        }
        else if(income[i]<0){
            cout << " Strata      |";
        }
        else{
            cout << " Zero        |";
        }
        cout << endl;
    }
    cout << "+------------+------------+------------+-------------+" << endl;


}
int main(int argc, char* argv[]){
    menu();
}