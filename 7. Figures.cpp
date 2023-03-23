#include <iostream>

using namespace std;

double input_num(char character){
    double num;
    while(true){
        cout << "\nProsze podac wartosc " << character << ": " ;
        cin >> num;
        if(num >= 0)
            break;
        else
            cout << "\nPodano liczbe mniejsza od zera, prosze sprobowac jeszcze raz.";
    }
    return num;
}

double square_formula(double a){
    double result = a*a;
    return result;
}

double rectangle_formula(double a, double b){
    double result = a*b;
    return result;
}

double circle_formula(double r){
    const double pi = 3.14;
    double result = pi*(r*r);
    return result;
}

double triangle_formula(double a, double h){
    double result = (a*h)/2;
    return result;
}

double trapezoid_formula(double a, double b, double h){
    double result = ((a+b)*h)/2;
    return result;
}

void square(){
    double a = input_num('a');
    double result = square_formula(a);
    cout << "\nPole kwadratu o boku " << a << " wynosi " << result << ". \n";
}

void rectangle(){
    double a = input_num('a');
    double b = input_num('b');
    double result = rectangle_formula(a, b);
    cout << "\nPole prostokatu o bokach " << a << " i " << b << " wynosi " << result << ". \n";
}

void circle(){
    double r = input_num('r');
    double result = circle_formula(r);
    cout << "\nPole kola o promieniu " << r << " i zakladajac ze pi to 3.14 wynosi " << result << ". \n";
}

void triangle(){
    double a = input_num('a');
    double h = input_num('h');
    double result = triangle_formula(a, h);
    cout << "\nPole trojkata o podstawie " << a << " i wysokosci " << h << " wynosi " << result << ". \n";
}

void trapezoid(){
    double a = input_num('a');
    double b = input_num('b');
    double h = input_num('h');
    double result = trapezoid_formula(a, b, h);
    cout << "\nPole prostokatu o bokach " << a << " i " << b << " i wysokosci " << h << " wynosi " << result << ". \n";
}


int main(){
    cout << "\nZeby zakonczyc dzialanie programu, prosze podac 999";
    while(true){
        cout << "\n 1. Kwadrat";
        cout << "\n 2. Prostokat";
        cout << "\n 3. Kolo";
        cout << "\n 4. Trojkat";
        cout << "\n 5. Trapez";
        cout << "\n 999. Koniec";
        int input;
        cout << "\n >>> ";
        cin >> input;
        if(input == 999){
            cout << "Koniec.";
            break;
        }
        if(input == 1)
            square();
        else if(input == 2)
            rectangle();
        else if(input == 3)
            circle();
        else if(input == 4)
            triangle();
        else if(input == 5)
            trapezoid();
                
    }
}