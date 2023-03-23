#include <iostream>

using namespace std;

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

int main(){

}