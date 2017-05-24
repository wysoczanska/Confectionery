#include "../include/muffinTest.h"
#include <iostream>
#include "../include/Muffin.h"
#include <string>

muffinTest::muffinTest()
{
    //ctor
}

muffinTest::~muffinTest()
{
    //dtor
}
void muffinTest::run()
{
    cout<<"Running muffinTest..."<<endl;
    cout<<""<<endl;


    string input_name="blueberry triple chocolate chip";
    string input_description="Very sweet!";
    float input_pricePerUnit=6.99;
    int input_quantity=20;

    Muffin *muffin1 = new Muffin(input_name, input_description, input_pricePerUnit, input_quantity, false);
    cout<<"Dynamic instance of class Muffin created"<<endl;

    cout<<"Checking class members with given inputs\n"<<endl;

    if(muffin1->GetName()==input_name){cout<<"muffin name: OK"<<endl;}
    else{cout<<"muffin name: WRONG"<<endl;}

    if(muffin1->GetDescription()==input_description){cout<<"muffin description: OK"<<endl;}
    else{cout<<"muffin description: WRONG"<<endl;}

    if(muffin1->GetPrice()==input_pricePerUnit){cout<<"muffin price: OK"<<endl;}
    else{cout<<"muffin price: WRONG"<<endl;}

    if(muffin1->GetAmount()==input_quantity){cout<<"muffin amount: OK"<<endl;}
    else{cout<<"muffin quantity: WRONG"<<endl;}

    delete muffin1;


}
