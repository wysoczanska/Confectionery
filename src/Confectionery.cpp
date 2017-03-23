#include <iostream>
#include <vector>
#include "../include/Confectionery.h"


using namespace std;

Confectionery::Confectionery()
{
    vector<Muffin*> muffins;

    //ctor
}

//Confectionery::~Confectionery()
//{
    //dtor
//}
int main()
{
    Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20);
    cout<<muffin1->name<<endl;
    Cookie *cookie1= new Cookie("blueberry triple chocolate chip", "very sweet", 6.99, 20.9);
    cout<<cookie1->name<<endl;
    Confectionery *confectionery1=new Confectionery();
    vector<Muffin*> muffins;








}
