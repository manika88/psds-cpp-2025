#include <stdexcept>
#include <vector>


std::vector<size_t> FindAll(const std::vector<int>& container, bool (*predicate)(int)) {
    std::vector<size_t> cont2;

    for (size_t i = 0; i < container.size(); ++i) {
        if (predicate(container[i])) {
            cont2.push_back(i);
        }
    }

    return cont2;
}