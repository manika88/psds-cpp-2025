#include <stdexcept>
#include <vector>


void Filter(std::vector<int>& v, bool (*predicate)(int)) {
    size_t ind = 0; 
    for (size_t i = 0; i < v.size(); ++i) {
        if (predicate(v[i])) {
            v[ind] = v[i];
            ++ind;
        }
    }
    v.resize(ind);
}