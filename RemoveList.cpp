// remove_list.cpp

#include "RemoveList.h"
#include <unordered_map>

void RemoveList::removeUniqueElements(std::list<int>& lst) {
    std::unordered_map<int, int> frequency_map;

    for (int element : lst) {
        frequency_map[element]++;
    }
    auto it = lst.begin();
    while (it != lst.end()) {
        if (frequency_map[*it] == 1) {
            it = lst.erase(it);
        }
        else {
            ++it;
        }
    }
}
