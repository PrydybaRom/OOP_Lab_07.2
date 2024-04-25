#include <iostream>
#include <list>
#include "RemoveList.h"

int main() {
    std::list<int> elements = { 1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 8, 9, 10 };

    // Роздрук списку
    std::cout << "List before delete element :\n";
    for (int element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Вилучення унікальних елементів та залишення лише дублікатів
    RemoveList remover;
    remover.removeUniqueElements(elements);

    // Показ результату на екран
    std::cout << "List after delete element :\n";
    for (int element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
