#include "Dish.h"

enum Meat{
    chicken, beef, pork, duck
}

class MeatDish: virtual public Dish{
    private:
    Meat meatType;
    print();
};