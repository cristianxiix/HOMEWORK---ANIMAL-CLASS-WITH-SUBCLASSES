#include "Classes.h"

    int main()
    {
        Mice m1(15, 10);
        m1.Eat("cyanide");
        m1.RunFromCats(5);
        m1.Walk(30, 20);
        std::cout << '\n' << '\n' << '\n' << std::endl;

        Cat c1(300.1, 150.7);
        c1.Walk(10, 15);

    }