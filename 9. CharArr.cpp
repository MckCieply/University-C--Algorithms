#include <iostream>
#include <cstdlib>
using namespace std;
// Jesli jakas zmienna nie jest zadeklarowana to cpp przypisuje jej randomowe miejsce w pamieci
#define MAX_LEN 128

/*----------------------------------------------------------------------------
  int str_len( char s[] )

  Funkcja:
  Wlasna implementacja funkcji wyznaczajacej dlugosc napisu liczona w znakach

  Parametry:
    char s[] -- tablica zawierajaca napis ktorego dlugosc jest wyznaczana

  Rezultat:
    dlugosc napisu liczona w znakach
----------------------------------------------------------------------------*/

int str_len(char s[]) {
    int count = 0;
    while (s[count] != '\0') {
        count += 1;
    }
    return count;
}

/*----------------------------------------------------------------------------
  int lwr_str_cnt( char s[] )

  Funkcja:
    Wyznacza liczbe malych liter w napisie s

  Parametry:
    char s[] -- tablica zawierajaca napis

  Rezultat:
    Liczba malych liter w napisie s
----------------------------------------------------------------------------*/

int lwr_str_cnt(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count += 1;
        }
    }
    return count;
}

/*----------------------------------------------------------------------------
  int upr_str_cnt( char s[] )

  Funkcja:
    Wyznacza liczbe duzych liter w napisie s

  Parametry:
    char s[] -- tablica zawierajaca napis

  Rezultat:
    Liczba duzych liter w napisie s
----------------------------------------------------------------------------*/

int upr_str_cnt(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count += 1;
        }
    }
    return count;
}

/*----------------------------------------------------------------------------
  int dgt_str_cnt( char s[] )

  Funkcja:
    Wyznacza liczbe cyfr w napisie s

  Parametry:
    char s[] -- tablica zawierajaca napis

  Rezultat:
    Liczba cyfr w napisie s
----------------------------------------------------------------------------*/

int dgt_str_cnt( char s[] )
{
  int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count += 1;
        }
    }
    return count;
}

/*----------------------------------------------------------------------------
  int nalpha_str_cnt( char s[] )

  Funkcja:
    Wyznacza liczbe liter i cyfr w napisie s

  Parametry:
    char s[] -- tablica zawierajaca napis

  Rezultat:
    Liczba liter i cyfr w napisie s
----------------------------------------------------------------------------*/

int nalpha_str_cnt( char s[] )
{
  int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            count += 1;
        }
    }
    return count;
}

/*----------------------------------------------------------------------------
  int chr_str_cnt( char c, char s[] )

  Funkcja:
    Wyznacza liczbe wystapien znaku c w s

  Parametry:
    char c   -- znak poszukiwany w napisie
    char s[] -- tablica zawierajaca napis


  Rezultat:
    Liczba wystapien znaku c w napisie s
----------------------------------------------------------------------------*/

int chr_str_cnt( char c, char s[] )
{
  int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count += 1;
        }
    }
    return count;
}

/*----------------------------------------------------------------------------
int chr_str_pos( char c, char s[] )

  Funkcja:
    Wyznacza indeks (pozycje w napisie) pierwszego wystapienia znaku c w s

  Parametry:
    char c   -- znak poszukiwany w napisie
    char s[] -- tablica zawierajaca napis


  Rezultat:
    Pozycja znaku w tablicy liczona od 0 lub -1 gdy znak nie znaleziony
----------------------------------------------------------------------------*/

int chr_str_pos(char c, char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i-1;
        }
    }
    return -1;
}

/*----------------------------------------------------------------------------
int chr_str_rpos( char c, char s[] )

  Funkcja:
    Wyznacza indeks (pozycje w napisie) ostatniego wystapienia znaku c w s

  Parametry:
    char c   -- znak poszukiwany w napisie
    char s[] -- tablica zawierajaca napis


  Rezultat:
    Pozycja znaku w tablicy liczona od 0 lub -1 gdy znak nie znaleziony
----------------------------------------------------------------------------*/

int chr_str_rpos(char c, char s[]) {
    int last_pos = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            last_pos = i;
        }
    }
    return last_pos-1;
}

/*----------------------------------------------------------------------------
  void str_rev( char s[] )

  Funkcja:
    Odwraca kolejnosc znakow w tablicy s

  Parametry:
    char s[] -- tablica zawierajaca napis

  Rezultat:
    Brak
----------------------------------------------------------------------------*/

void str_rev(char s[]) {
    int length = str_len(s);
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

// Ten main bedzie dzialal po prawidlowym zaimplementowaniu powyzszych funkcji
int main()
{
  char line[ MAX_LEN ];
  char c;
  int pos;

  cout << "\n\nWpisz linie tekstu: ";
  cin.getline( line, MAX_LEN );

  cout << "\nLiczba znakow           : " << str_len( line );
  cout << "\nLiczba malych liter     : " << lwr_str_cnt( line );
  cout << "\nLiczba duzych liter     : " << upr_str_cnt( line );
  cout << "\nLiczba cyfr             : " << dgt_str_cnt( line );
  cout << "\nLiczba alfanumerycznych : " << nalpha_str_cnt( line );

  cout << "\n\nPodaj pojedynczy znak: ";
  cin.get( c );

  cout << "\nLiczba wystapien znaku  " << c << " : " << chr_str_cnt( c, line );

  if( ( pos = chr_str_pos( c, line ) ) != -1 )
    cout << "\nPierwsze wystapienie znaku " << c << " od poczatku : " << pos + 1;
  else
    cout << "\nZnak " << c << " nie zostal znaleziony";

  if( ( pos = chr_str_rpos( c, line ) ) != -1 )
    cout << "\nPierwsze wystapienie znaku " << c << " od konca : " << pos + 1;
  else
    cout << "\nZnak " << c << " nie zostal znaleziony";

  cout << "\n\nNapis oryginalny : " << line;
  str_rev( line );
  cout << "\nNapis odwrocony  : " << line;

  cin.ignore();
  cin.get();
  return EXIT_SUCCESS;
}
