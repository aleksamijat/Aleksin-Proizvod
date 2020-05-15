#ifndef PROIZVOD_HPP_INCLUDED
#define PROIZVOD_HPP_INCLUDED
class Proizvod
{
protected:
        int price;
        DinString name;
public:
        Proizvod(int price_, DinString name_)
        {
                price = price_;
                name = name_;
        }

        DinString getName()const
        {
                return name;
        }

        int getCena()const
        {
                return price;
        }

        virtual void izracunajPopust() = 0;

        void print()
        {
                cout<<"Naziv: "<<name<<" Cena: "<<price<<endl;
        }

};


#endif // PROIZVOD_HPP_INCLUDED
