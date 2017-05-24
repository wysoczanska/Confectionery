#ifndef CUPCAKE_H
#define CUPCAKE_H
#include "../include/Muffin.h"


class Cupcake : public Muffin
{
    public:
        Cupcake();
        Cupcake(string name, string description, double pricePerUnit, int quanity, bool,string, bool);
        string GetCream();
        bool GetLactose();
        ~Cupcake();
    private:
        string cream;
        bool lactoseFree;
};

#endif // CUPCAKE_H
