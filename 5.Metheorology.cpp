#include <iostream>
using namespace std;

int main(){
    double max_plus = 0.0, min_plus = 0.0, max_minus = 0.0, min_minus = 0.0, avg;
    int sum_plus, sum_minus, sum_zero;
    cout <<"Jeśli koniec prosze podać 999 \n";
    while(true){
        double input;
        cout << "Prosze podać temperature: \n>>> ";
        cin >> input;
        if( input != 999){
            // Dodatnie
            if(input > 0.0){
                // Wciąganie pierwszej wartości jako skrajną
                if(max_plus == 0 and min_plus == 0){
                    max_plus = input;
                    min_plus = input;
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
            else if(input < 0.0){
                // Wciąganie pierwszej wartości jako skrajną
                if(max_minus == 0 && min_minus == 0){
                    max_minus = input;
                    min_minus = input;
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
            else if(input == 0.0){
                // Zwiększanie liczby zerowych pomiarów
                sum_zero += 1;
            }
            //Dodawanie pomiaru do średniej
            avg += input;
        }
        else{
            cout << "Koniec działania..." << endl;;
            break;
        }
    }
    
    //Obliczanie średniej używając sumy wszystkich wartości oraz sumy wszystkich pomiarów
    avg = avg / (sum_minus+sum_plus+sum_zero);
    cout << "Średnia pomiarów: " << avg << endl;
    if(max_plus != 0)
        cout << "Najwyższy pomiar dodatni: " << max_plus << endl;
    else
        cout << "Brak pomiarów dodatnich" << endl;
    if(min_plus != 0)
        cout << "Najniższy pomiar dodatni: " << min_plus << endl;
    else
        cout << "Brak pomiarów dodatnich" << endl;

    if(max_minus != 0)
        cout << "Najwyższy pomiar ujemny: " << max_minus << endl;
    else
        cout << "Brak pomiarów ujemnych" << endl;
    if(min_minus != 0)
        cout << "Najniższy pomiar ujemny: " << min_minus << endl;
    else
        cout << "Brak pomiarów ujemnych" << endl;

    cout << "Liczba dodatnich odczytów: " << sum_plus << endl;
    cout << "Liczba zerowych odczytów: " << sum_zero << endl;
    cout << "Liczba ujemnych odczytów: " << sum_minus << endl;

}