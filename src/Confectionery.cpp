#include <iostream>
#include "../include/Confectionery.h"
#include "../include/Muffin.h"


using namespace std;

Confectionery::Confectionery()
{
    //ctor
}

Confectionery::~Confectionery()
{
    //dtor
}
int main()
{
    Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20);
    cout<<muffin1->name<<endl;

}
