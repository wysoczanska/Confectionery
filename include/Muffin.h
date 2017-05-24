#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>
#include "../include/Product.h"


using namespace std;


class Muffin : public Product
{
        double pricePerUnit;
        int amount;

    protected:
        void SetPrice(double);
        void SetAmount(int);
    public:
        Muffin(string name, string description, double pricePerUnit, int quanity, bool);
        Muffin(Muffin &muffin, int quanity);
        Muffin();
        ~Muffin();
        void operator-(Muffin);
        double GetPrice();
        int GetAmount();
        double GetTotalPrice();
        string GetDescription();
        string GetName();
        bool GetGluten();

         friend ostream& operator<<(ostream& os, Muffin& muff)
        {
            return os<<"\nState of this object:\n"<<
            "Name: "<<muff.GetName()<<"\nDescription: "<<muff.GetDescription()
            <<"\n is gluten free?: "<<muff.GetGluten()<<"\nQuantity: "<<muff.GetAmount()<<"\nPrice per 1: "<<muff.GetPrice()<<"\n"<<endl;

        }


//        void operator<<();
};

#endif // MUFFIN_H
