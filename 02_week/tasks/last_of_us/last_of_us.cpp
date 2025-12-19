#include <stdexcept>


int* FindLastElement(int* begin,int* end, bool (*predicate)(int)) {
    if (begin == nullptr || end == nullptr || begin > end) {
        return end;
    }
    for (int* p = end - 1; p >= begin; --p) {
        if (predicate(*p)) {
            return p;
        }
    }
    return end;
}
