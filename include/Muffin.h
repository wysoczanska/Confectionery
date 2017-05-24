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
        double GetTotalPrice() override;
};

#endif // MUFFIN_H
