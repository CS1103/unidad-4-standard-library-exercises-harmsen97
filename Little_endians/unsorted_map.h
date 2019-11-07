//
// Created by Jeronimo on 2019-11-06.
//

#ifndef LITTLE_ENDIANS_UNSORTED_MAP_H
#define LITTLE_ENDIANS_UNSORTED_MAP_H

#include <unordered_map>
#include <vector>

int endian(int n){
    int y = 0;
    for(int i = 0; i< 4; ++i)
        y = (y<<8)|(n>>(8*i))&255;
    return y;
}

std::unordered_map<int, int> little_endians(std::vector<int>& nums){
    std::unordered_map<int, int> table;
    for(auto&i:nums){
        table[i] = endian(i);
    }

    return table;
}

#endif //LITTLE_ENDIANS_UNSORTED_MAP_H
