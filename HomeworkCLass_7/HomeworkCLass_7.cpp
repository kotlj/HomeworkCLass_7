
#include <iostream>

enum cloth
{
    cloth_none,
    cloth_coat,
    cloth_cloak,
    cloth_jacket,
    cloth_cape
};

class Overcoat
{
private:
    cloth overcoat;
    int price;

public:
    Overcoat()
    {
        overcoat = cloth(0);
        price = 0;
    }
    Overcoat(cloth _overcoat, int _price)
    {
        overcoat = _overcoat;
        price = _price;
    }

    cloth getCloth() const
    {
        return overcoat;
    }
    int getPrice() const
    {
        return price;
    }

    void setCloth(cloth _overcoat)
    {
        this->overcoat = _overcoat;
    }
    void setPrice(int _price)
    {
        this->price = _price;
    }

    bool operator== (Overcoat& obj)
    {
        return this->overcoat == obj.getCloth();
    }
    Overcoat operator= (Overcoat& obj)
    {
        this->overcoat = obj.getCloth();
        this->price = obj.getPrice();
        return *this;
    }
    bool operator> (Overcoat& obj)
    {
        return this->price > obj.getPrice();
    }
};

int main()
{
    Overcoat test1(cloth_cape, 100);
    Overcoat test2(cloth_coat, 200);
    bool helper = test2 > test1;
    std::cout << helper << '\n';
    test1 = test2;
    std::cout << test1.getCloth() << ' ' << test1.getPrice();
}
