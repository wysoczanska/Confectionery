#ifndef PRODUCT_H
#define PRODUCT_H


template<class T> class Product
{
    public:
        virtual ~Product();
        Product(T product, float amount=0);
        Product(Product &product, float amount);
        void SetAmount(float);
        void operator+(float amount_m);
        void operator-(float amount_m);

    protected:

    private:
        float amount;
        T product;

};

#endif // PRODUCT_H
