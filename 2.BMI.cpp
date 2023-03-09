#include <iostream>
using namespace std;

int main(){
    float bmi, height, weight;
    cout << "Input your height [m]:\n>>";
    cin >> height;
    cout << "Input your weight [kg]:\n>>";
    cin >> weight;
    bmi = weight / (height*height);
    cout << "Your BMI is equal to: " << bmi << " that means you are ";
    if (bmi < 18.5)
        cout << "underweight";
    else if(bmi >=18.5 && bmi < 25)
        cout << "normal";
    else if(bmi >= 25 && bmi < 30)
        cout << "overweight";
    else if (bmi >= 30)
        cout << "obese";
    else
        cout << "I have no idea what u just said";
    
}