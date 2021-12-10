#include <iostream>
#include <bitset>

int main()
{
    std::cout << (1 << 8) << std::endl; // максимальное значение в 8 битах
    std::cout << (1 << 16) << std::endl; // максимальное значение в 16 битах

    uint8_t a = 0b10111101;
    std::cout << std::bitset<8>(a) << std::endl;
    /*uint8_t mask = 1 << 3; // сдивагем на колличество бит которые нужно занулить
    std::cout << std::bitset<8>(mask) << std::endl;
    --mask; // уменьшаем на 1
    std::cout << std::bitset<8>(mask) << std::endl;
    mask = ~mask; // инвертируем
    std::cout << std::bitset<8>(mask) << std::endl;
    a &= mask; // применяем маску
    std::cout << std::bitset<8>(a) << std::endl;*/

    a &= ~((1 << 3) - 1);
    std::cout << std::bitset<8>(a) << std::endl;

    a &= (1 << 5) - 1;
    std::cout << std::bitset<8>(a) << std::endl;
    return 0;
}