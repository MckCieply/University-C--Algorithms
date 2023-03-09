#include <iostream>
using namespace std;

int main(){
    int x = 0;
    cout << "DO..WHILE" << endl;
    do{
        x+=1;
        cout << x << ", ";
    }while (x<10);
    cout << "\nFOR" << endl;
    for (int i = 0; i < 5; i++){
        cout << " i = "<< i ;
    }
}