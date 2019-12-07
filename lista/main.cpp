#include <iostream>

using namespace std;

int main()
{
  struct Osoba
  {
      string imie;
      string nazwisko;
      float wzrost;
      int wiek;
      bool czyKobieta;
  };
  Osoba Weronika;
  Weronika.imie="Weronika";
  Weronika.nazwisko="Nowak";
  Weronika.wzrost=165.5;
  Weronika.wiek=12;
  Weronika.czyKobieta=true;
  //cout<<Weronika.imie << " "<<Weronika.nazwisko;
  Osoba tab[3];
  for(int i=0; i<3; i++ )
  {
      cin>>tab[i].imie;
      cin>>tab[i].nazwisko;
      cin>>tab[i].wzrost;
      cin>>tab[i].wiek;
      cin>>tab[i].czyKobieta;
  }
  for(int i=0; i<3; i++)
  {
      cout<<tab[i].imie << " " <<tab[i].nazwisko<< " " <<tab[i].wzrost<< " " <<tab[i].wiek << " " <<tab[i].czyKobieta<<endl;
  }
    return 0;
}
