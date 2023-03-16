#include <cstdlib>
#include <iostream>
using namespace std;

double odsetkiProgresywne( double kwota, double lbDni, double odsetkiZaDzien )
{
   // Do zrobienia
}

int main()
{
  double odsetki;

  // Test 1
  odsetki = odsetkiProgresywne( 1000, 4, 3 );
  if(odsetki == 125.50)
    cout << "\nTest 1: OK";
  else
    cout << "\nTest 1: Blad";

  // Test 2
  odsetki = odsetkiProgresywne( 1000, 10, 3 );
  if(odsetki == 343.91)
    cout << "\nTest 2: OK";
  else
    cout << "\nTest 2: Blad";

  // Test 3
  // Prosz� opracowa� test dla innych warto�ci

  // Test 4
  // Prosz� opracowa� test dla innych warto�ci

  return EXIT_SUCCESS;
}
