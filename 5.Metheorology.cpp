#include <iostream>
using namespace std;

int main(){
    float max_plus, min_plus, max_minus, min_minus, avg, sum_plus, sum_minus, sum_zero;
    cout <<"Jeśli koniec prosze podać 999 \n";
    while(true){
        float input;
        cout << "Prosze podać temperature: \n>>> ";
        cin >> input;
        if( input != 999){
            // Dodatnie
            if(input > 0){
                // Wciąganie pierwszej wartości jako skrajną
                if(max_plus && min_plus == 0){
                    max_plus, min_plus = input;
                }
                // Najwyższy pomiar dodatni
                if(input > max_plus){
                    max_plus = input;
                }
                // Najniższy pomiar dodatni
                if(input < min_plus){
                    min_plus = input;
                }
                // Zwiększanie liczby dodatnich pomiarów
                sum_plus += 1;
            }
            // Ujemne
            else if(input < 0){
                // Wciąganie pierwszej wartości jako skrajną
                if(max_minus && min_minus == 0){
                    max_minus, min_minus = input;
                }
                // Najwyższy pomiar ujemnny
                if(input > max_minus){
                    max_minus = input;
                }
                // Najniższy pomiar ujemny
                if(input < min_minus){
                    min_minus = input;
                }
                // Zwiększanie liczby ujemnych pomiarów
                sum_minus += 1;
            }
            else if(input == 0){
                // Zwiększanie liczby zerowych pomiarów
                sum_zero += 1;
            }
            //Dodawanie pomiaru do średniej
            avg += input;
        }
        else{
            cout << "Koniec działania...";
            break;
        }
    }

}