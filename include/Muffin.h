#ifndef MUFFIN_H
#define MUFFIN_H
#include <string>

using namespace std;


class Muffin
{
    public:
        string name;
        string description;
        float pricePerUnit;
        int quantity;
        Muffin(string name, string description, float pricePerUnit, int quanity=0);
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetQuantity(int);
        ~Muffin();
    protected:
    private:
};

#endif // MUFFIN_H
