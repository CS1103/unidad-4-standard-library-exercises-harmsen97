//
// Created by Jeronimo on 2019-11-06.
//

#ifndef BITSET_NEWSPAPER_BITSET_H
#define BITSET_NEWSPAPER_BITSET_H


#include <map>

double newspaper(std::map<char, int> cost, std::string article){

    double count = 0;
    for(auto&i : article){

        count += (double)cost[i]/100;

    }

    return count;


}
#endif //BITSET_NEWSPAPER_BITSET_H
