#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED
class Prodavnica
{
private:
        List <Proizvod*> proizvodi;
        DinString name;
public:
        int i;
        Prodavnica(DinString a)
        {
                name = a;
        }
        bool addProizvod(Proizvod* pro)
        {
                bool returning = false;
                Proizvod* p;
                for(int i = 1; i <= proizvodi.size(); ++i)
                {
                        proizvodi.read(i,p);
                        if(p->getName() == pro->getName())
                                returning = true;
                }
                if(returning)
                        return false;
                else
                        proizvodi.add(proizvodi.size(),pro);
        }
        bool deleteProizvod(proizvodi)
        {
                if(proizvodi.remove(i))
                        return true;
                else
                        return false;
        }
        bool deleteProizvod(DinString a)
        {
                bool returning = false;
                Proizvod* p;
                for(int i =1; i <= proizvodi.size(); ++i)
                {
                        proizvodi.read(i,p);
                        if(p->getName() == a)
                        {
                                returning = true;
                                break;
                        }
                }
                if(returning)
                {
                        proizvodi.remove(i);
                        return true;
                }
                else
                        return false;
        }
        void sale()
        {
                cout<<"Popusti:"<<endl;
                Proizvod* pro;
                for(int i = 1; i <= proizvodi.size(); ++i)
                {
                proizvodi.read(i,pro);
                pro -> izracunajPopust();
                }
        }
        List<Proizvod*> getProizvodi()
        {
                return proizvodi;
        }
        DinString getName()
        {
                return name;
        }
        friend ostream& operator<<(ostream& output, Prodavnica &p)
        {
                output<<"Naziv: "<<p.getName()<<endl;
                Proizvod *pro;
                for(int i = 1;  i <= p.getProizvodi.size(); ++i)
                {
                p.getProizvodi().read(i,pro);
                output << pro -> getName() << endl << pro -> getCena() << endl;
                }
        }
};


#endif // PRODAVNICA_HPP_INCLUDED
