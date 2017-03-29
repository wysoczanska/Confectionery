#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>

using namespace std;


class Muffin
{
    public:
        static int mcounter;
        string name;
        string description;
        bool glutenFree;
        Muffin(string name, string description, float pricePerUnit, int quanity=0);
        Muffin(Muffin &muffin, int quanity);
        Muffin();
        ~Muffin();
        void operator-(int quantity_m);
        float pricePerUnit;
        int quantity;
    protected:
    private:
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetQuantity(int);

};

#endif // MUFFIN_H
