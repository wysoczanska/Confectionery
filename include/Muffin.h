#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>
#include "../include/Product.h"


using namespace std;


class Muffin : public Product
{
        double pricePerUnit;
        int amount;
        void SetPrice(double);
        void SetAmount(int);
    public:
        Muffin(string name, string description, double pricePerUnit, int quanity=0);
        Muffin(Muffin &muffin, int quanity);
        Muffin();
        ~Muffin();
        void operator-(Muffin);
        double GetPrice();
        int GetAmount();
};

#endif // MUFFIN_H
