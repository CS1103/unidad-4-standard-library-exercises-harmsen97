#include <iostream>

#include "unsorted_map.h"

int main() {
    std::vector<int> nums={
            0,
            123456789,
            -123456789,
            1,
            16777216,
            20034556,
            -1,
            -2,
            -65536};

    std::unordered_map<int, int> pairs = little_endians(nums);

    for(int i=0;i<pairs.size();++i)
        std::cout<<nums[i] <<" converts to "<< pairs[nums[i]]<<'\n';
}