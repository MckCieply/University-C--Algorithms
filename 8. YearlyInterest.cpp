#include <iostream>
#include <string>
using namespace std;
double fillArray(int i, string type, string months[]){
    double input;
    do{
    cout << type << " w " << months[i] <<": ";
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

void minMaxAvg(double arr[], string type, string months[]){
    int min_month = 0;
    int max_month = 0;
    double min = arr[0];
    double max = arr[0];
    double avg = sum(arr) / 12;
    for(int i = 1; i<12; i++){
        if(min > arr[i]){      //Setting new minimum
            min = arr[i];
            min_month = i;
    }
        else if(max < arr[i]){  //Setting new maximum
            max = arr[i];
            max_month = i;
        }
    }
    cout << "\nMinimalny " << type <<": " << min << " nastapil w "<< months[min_month] << endl;
    cout << "Maksymalny " << type <<": " << max << " nastapil w "<< months[min_month] << endl;
    cout << "Sredni " << type <<": " << avg << endl;

}

void balance(double income[], double revenue[], double costs[]){
    cout << "+------------+------------+------------+-------------+\n";
    cout << "| Przychod   | Koszt      | Dochod     | strata/zysk |\n";
    cout << "+------------+------------+------------+-------------+\n";

    for(int i=0; i<12; i++){
        printf("| %10.2lf | %10.2lf | %10.2lf |", revenue[i], costs[i], income[i]);
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
    string MONTHS[] = {"Styczen", "Luty", "Marzec", "Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien"};
    double revenue[12];
    double costs[12];
    double income[12];
    bool revenueFlag = false;
    bool costsFlag = false;
    while(choice != 99){                    // Checking when to end repeating code
        if(revenueFlag && costsFlag){        // Checking whether we can calculate income already
            calculateIncome(income, revenue, costs);
            cout << "\n\nObliczono dochod\n\n";
        }

        cout << "1. Wprowadz przychody \n2. Wprowadz koszty \n3. Wyliczenie \n4. Min Max Avg \n5. Bilans roczny\n99. Koniec\n";
        cout << "Prosze podac pozycje w menu: ";
        cin >> choice;
        if(choice >= 1 && choice <= 5){         //Making sure user choosed proper option
            switch(choice){
                case 1:     //Revenue input
                    for(int i = 0; i < 12; i++){
                        revenue[i] = fillArray(i, "Przychody", MONTHS);
                    }
                    revenueFlag = true;
                    break;

                case 2:     //Costs input
                    for(int i = 0; i < 12; i++){
                        costs[i] = fillArray(i, "Koszty", MONTHS);
                    }
                    costsFlag = true;
                    break;

                case 3:     //Yearly
                    if(!(revenueFlag && costsFlag)){        //Double checking whether user inserted already revenue and costs
                        cout << "Nie mozna wyliczyc sumarycznego dochodu, przychod lub koszt nie zostal podany.\n";
                        break;
                    }
                    cout << "\nSumaryczny przychod: " << sum(revenue) << endl;
                    cout << "Sumaryczny koszt: " << sum(costs) << endl;
                    cout << "Sumaryczny dochod: " << sum(income) << endl << endl;
                    break;

                case 4:     //MinMaxAvg
                    minMaxAvg(revenue, "przychod", MONTHS);
                    minMaxAvg(costs, "koszt", MONTHS);
                    minMaxAvg(income, "dochod", MONTHS);
                    break;

                case 5:     //Table showing profit or no-profit
                    balance(income, revenue, costs);
                    break;
            }
        }
        else
            cout << "Podano zle dane";
    }
}

int main(int argc, char* argv[]){
    menu();
}