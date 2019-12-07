#include <iostream>

using namespace std;

int main()
{
struct Element
{
    int wartosc;
    Element *nastepny;
};
Element *pierwszy=new Element();
pierwszy -> wartosc=15;
Element *drugi=new Element();
drugi -> wartosc=7;
Element *trzeci=new Element();
trzeci->wartosc=10;
pierwszy->nastepny=drugi;
drugi->nastepny=trzeci;
Element *dwaIpol=new Element();
dwaIpol->wartosc=4;
drugi->nastepny=dwaIpol;
dwaIpol->nastepny=trzeci;
trzeci->nastepny=NULL;
for(Element *tmp=pierwszy; tmp!=NULL; tmp=tmp->nastepny)
{
    cout<<tmp->wartosc<<endl;
}
    return 0;
}
