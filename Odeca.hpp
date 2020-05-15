#ifndef ODECA_HPP_INCLUDED
#define ODECA_HPP_INCLUDED

enum Velicina{XS,S,M,L,XL};
enum Tip{MAJCA,PANTALONE};

class Odeca : public Proizvod
{
private:
        Tip tip;
        Velicina size;
public:
        static int num;
        Odeca(Tip t, Velicina v, int i, DinString ds) : Proizvod(i, ds)
        {
                tip = t;
                size = v;
                if(size == L || size == XL)
                        num++;
        }
        void Popust()
        {
                if(size == XS && tip == MAJCA)
                cout << "60%" << endl;
                else if(tip == MAJCA)
                cout << "50%" << endl;
                else if(tip == PANTALONE)
                cout << "33%" << endl;
        }
        void print()
        {
                Proizvod::print();
                cout << "Tip: " << tip << "Velicina: " << size << endl;
                cout << "Popust: ";
                Popust();
        }
};



#endif // ODECA_HPP_INCLUDED
