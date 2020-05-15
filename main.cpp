#include <iostream>

#include "dinstring.hpp"
#include "list.hpp"
#include "Proizvod.hpp"
#include "Voce.hpp"
#include "Odeca.hpp"
#include "Prodavnica.hpp"
#include "Grad.hpp"



using namespace std;

int Odeca::broj = 0;
int main()
{
    Voce v1(15,"Srbija",20,"Sljive");
    Voce v2(5,"Jamajka",35,"Mango");
    Odeca o1(MAJICA,S,500,"Majca");
    Odeca o2(PANTALONE, XL, 300, "Pantalone");
    Proizvod *p1 = &v1;
    Proizvod *p2 = &v2;
    Proizvod *p3 = &o1;
    Proizvod *p4 = &o2;
    p1->ispisi();
    p2->ispisi();
    p3->ispisi();
    p4->ispisi();
    Prodavnica prod("Market");
    prod.addProizvod(p2);
    prod.addProizvod(p4);
    prod.addProizvod(p1);
    prod.deleteProizvod(2);
    prod.addProizvod(p3);
    prod.deleteProizvod("Majca");
    cout<<prod;
    Grad g1;
    Grad g2("Berlin");
    g2.addProdavnicu(&prod);
    g2.printNajjeftinijuProdavnicu();
    return 0;
}
