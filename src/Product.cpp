#include "../include/Product.h"

template <class T>
Product<T>::Product(T product, float amount)
{
    this->SetAmount(amount);
}

template <class Muffin>
void Product<Muffin>::SetAmount(float m_amount) {
    amount = (int)m_amount;
}

template <class Cookie>
void Product<Cookie>::SetAmount(float m_amount) {
    amount = (int)m_amount;
}

template <class T>
Product<T>::~Product()
{
    //dtor
}
