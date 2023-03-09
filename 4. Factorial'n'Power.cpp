#include <iostream>
using namespace std;

int main(){
    //Silnia
    int n;
    int result = 1;
    cout << "Input n: \n>>";
    cin >> n;
    cout << n <<"! = ";
    for(int i=1; i <= n; i++){
        result *= i;
    }
    cout << result << endl;
    //Odwrotnosc potegi
    int a, x;
    cout << "Input base: \n>>";
    cin >> a;
    result = a;
    cout << "Input power \n>>";
    cin >> x;
    int power = x;
    if (power < 0)
        power *= -1;

    for(int i=1; i<power; i++)
        result = result * a;
        
    if (x < 0)
        cout << "1/"<<result;
    else
        cout << result;
}