#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>

using namespace std;


class Muffin
{
    public:

        Muffin(string name, string description, float pricePerUnit, int quanity=0);
        Muffin(Muffin &muffin, int quanity);
        Muffin();
        ~Muffin();
        void operator-(int quantity_m);
        string getDescription();
        string getName();
        float getPrice();
        int getQuantity();
        string name;
        string description;
        float pricePerUnit;
        int quantity;
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetQuantity(int);

    private:


};

#endif // MUFFIN_H
