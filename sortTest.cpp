/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

    {
        std::vector<int> v;

        assert(v.empty());
        assert(v.size() == 0);
        sort(v);
        assert(v.empty());
        assert(v.size() == 0);
    }

    {
        std::vector<int> v{ 1 };

        assert(!v.empty());
        assert(v.size() == 1);
        assert(v == std::vector<int>({ 1 }));
        sort(v);
        assert(!v.empty());
        assert(v.size() == 1);
        assert(v == std::vector<int>({ 1 }));
    }

    return 0;
}
