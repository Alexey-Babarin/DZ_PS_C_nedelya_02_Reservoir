#include <iostream>
#include <string>
#include "Reservoir.h"
int main() {
    setlocale(LC_ALL, "Rus");
    // Пример использования класса
    Reservoir lake("Озеро Байкал", 50.0, 100.0, 5.0);
    Reservoir pond("Пруд у дома", 10.0, 20.0, 2.0);

    std::cout << "Объем озера: " << lake.CalculateVolume() << " куб. м" << std::endl;
    std::cout << "Площадь поверхности пруда: " << pond.CalculateSurfaceArea() << " кв. м" << std::endl;

    if (lake.IsSameType(pond)) {
        std::cout << "Озеро и пруд относятся к одному типу." << std::endl;
    }
    else {
        std::cout << "Озеро и пруд разных типов." << std::endl;
    }

    return 0;
}
