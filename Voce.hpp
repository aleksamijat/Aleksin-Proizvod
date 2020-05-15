#ifndef VOCE_HPP_INCLUDED
#define VOCE_HPP_INCLUDED
class Voce : public Proizvod
{
private:
        DinString origin;
        int date;
public:
        Voce(int a, DinString b, int c, DinString d) : Proizvod(c,d)
        {
                date = a;
                origin = b;
        }
        void Popust()
        {
                if(date >= 5)
                cout<<"33%"<<endl;
                else if(date >= 1 && date < 5)
                cout<<"66%"<<endl;
                else if(date == 0)
                cout<<"100%"<<endl;
        }
        void print(){
                Proizvod::print();
                cout<<"Zemlja porekla: "<<origin<<"Rok trajanja: "<<date<<endl;
                cout<<"Popust: ";
                Popust();
        }
};


#endif // VOCE_HPP_INCLUDED
