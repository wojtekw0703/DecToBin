#include <stdio.h>
#include <stdlib.h>

void wczytywanie()
{
    int liczba;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf("%d", &liczba);

    if(liczba<0)
    {
        printf("Nie wpisujemy ujemnych liczb");
    }else
    {
        binarnie(liczba);
    }
}


void binarnie(int liczba)
{
  long wynik=0,modulo,f=1;

    while(liczba != 0)
    {
         modulo = liczba % 2;
         wynik = wynik + modulo * f;
         f = f * 10;
         liczba = liczba / 2;
    }
   system ("cls");
   printf("Postac binarna: %d", wynik);
}

int main()
{
   wczytywanie();

   return 0;
}
