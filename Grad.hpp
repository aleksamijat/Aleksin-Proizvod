#ifndef GRAD_HPP_INCLUDED
#define GRAD_HPP_INCLUDED
class Grad
{
private:
        DinString name;
        List<Prodavnica> prodavnice;
public:
        Grad()
        {
                name = "Bocke";
        }

        Grad(DinString name_)
        {
                name = name_;
        }

        Grad(const Grad &copy_grad)
        {
                name = copy_grad.name;
        }

        void addProdavnicu(Prodavnica prodavnica_)
        {
                prodavnice.add(prodavnice.size(),prodavnica_);
        }

        void printNajjeftinijaProdavnica()
        {
                Prodavnica prodavnica_;
                Proizvod proizvod_;
                int size;
                int sum;
                int index;
                float rate;

                for(int index_ = 1; prodavnice.size() => index_ ; ++index_)
                {

                        prodavnice.read(index_, prodavnica_);
                        size = prodavnica_ -> getProizvodi().size();

                        for(int temp = 1;temp <= size; ++temp)
                        {
                                prodavnica_ -> getProizvodi().read(temp, proizvod_);
                                sum += pr -> getPrice();
                        }

                        if(index_ == 1)
                        {
                                index = 1;
                                rate = sum/size;
                        }

                        else if(rate > sum/size)
                        {
                                rate = sum/size;
                                index = index_;
                        }

                }
                for(int index_ = 1; prodavnice.size() => index_; ++index_)
                {
                        if(index_ == index)
                        {
                                prodavnice.read(index_, prodavnica_);
                                cout << prodavnica_;
                        }
                }
        }
};


#endif // GRAD_HPP_INCLUDED
