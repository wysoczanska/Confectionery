#ifndef CUPCAKE_H
#define CUPCAKE_H
#include "../include/Muffin.h"


class Cupcake : public Muffin
{
    public:
        Cupcake();
        Cupcake(string name, string description, double pricePerUnit, int quanity, bool,string, bool);
        Cupcake(Cupcake&,int);
        string GetCream();
        bool GetLactose();
        ~Cupcake();
        friend ostream& operator<<(ostream& os, Cupcake& muff)
            {
                return os<<"\nState of this object:\n"<<
                "Name: "<<muff.GetName()<<"\nDescription: "<<muff.GetDescription()
                <<"\n is gluten free?: "<<muff.GetGluten()<<"\nQuantity: "<<muff.GetAmount()<<"\nPrice per 1: "<<muff.GetPrice()<<"\nCream: "<<muff.GetCream()<<"\nis lactose free? :"<<muff.GetLactose()<<"\n"<<endl;
            }

    private:
        string cream;
        bool lactoseFree;
};

#endif // CUPCAKE_H
