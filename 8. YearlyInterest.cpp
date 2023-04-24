#include <iostream>
#include <string>
using namespace std;
double fillArray(int i, string type){
    double input;
    do{
    cout << type << " z " << i+1 <<" miesiaca: ";
    cin >> input;
    if(input < 0){
        cout << "Podano liczbe ujemna, sprobuj ponownie \n";
    }
    else
        break;
    }while(input >= 0);

    return input;
}

void calculateIncome(double income[], double revenue[], double costs[]){
    for(int i = 0; i < 12; i++){
        income[i] = revenue[i] - costs[i];
    }
}

double sum(double arr[]){
    double sum = 0;
    for(int i = 0; i < 12; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void balance(double costs[], double revenue[], double income[]){
    cout << "+------------+------------+------------+-------------+\n";
    cout << "| Przychod   | Koszt      | Dochod     | strata/zysk |\n";
    cout << "+------------+------------+------------+-------------+\n";

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

void menu(){
    int choice;
    double revenue[12];
    double costs[12];
    double income[12];
    bool revenueFlag = false;
    bool costsFlag = false;
    while(choice != 99){                    // Checking when to end repeating code
        if(revenueFlag && costsFlag)        // Checking whether we can calculate income already
            calculateIncome(income, revenue, costs);

        cout << "1. Wprowadz przychody \n2. Wprowadz koszty \n3. Wyliczenie \n4. Min Max Avg \n5. Bilans roczny\n99. Koniec\n";
        cout << "Prosze podac pozycje w menu: ";
        cin >> choice;
        if(choice >= 1 && choice <= 5){
            switch(choice){
                case 1:     //Revenue input
                    for(int i = 0; i < 12; i++){
                        revenue[i] = fillArray(i, "Przychody");
                    }
                    revenueFlag = true;
                    break;
                case 2:     //Costs input
                    for(int i = 0; i < 12; i++){
                        costs[i] = fillArray(i, "Koszty");
                    }
                    costsFlag = true;
                    break;
                case 3:     //Yearly
                    if(!(revenueFlag && costsFlag)){
                        cout << "Nie mozna wyliczyc sumarycznego dochodu, przychod lub koszt nie zostal podany.\n";
                        break;
                    }
                    cout << "\nSumaryczny przychod: " << sum(revenue) << endl;
                    cout << "Sumaryczny koszt: " << sum(costs) << endl;
                    cout << "Sumaryczny dochod: " << sum(income) << endl << endl;
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

int main(int argc, char* argv[]){
    menu();
}