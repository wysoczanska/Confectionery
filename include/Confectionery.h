#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include "Muffin.h"
#include"Cookie.h"


using namespace std;


class Confectionery
{
public:
    vector <Muffin*> muffins;
    vector <Cookie*> cookies;
        Confectionery();
        ~Confectionery();



    protected:
    private:
};

#endif // CONFECTIONERY_H
