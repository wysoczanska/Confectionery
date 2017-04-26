#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>

using namespace std;


class Muffin
{
        string name;
        string description;
        double pricePerUnit;
        int amount;
        bool glutenFree;
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetAmount(int);
    public:
        Muffin(string name, string description, float pricePerUnit, int quanity=0);
        Muffin(Muffin &muffin, int quanity);
        Muffin();
        ~Muffin();
        void operator-(Muffin);
        string GetDescription();
        string GetName();
        double GetPrice();
        int GetAmount();
};

#endif // MUFFIN_H
