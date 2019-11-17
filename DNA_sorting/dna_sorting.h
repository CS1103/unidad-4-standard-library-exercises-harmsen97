//
// Created by Jeronimo on 2019-11-07.
//

#ifndef DNA_SORTING_DNA_SORTING_H
#define DNA_SORTING_DNA_SORTING_H

#include <string>
#include <vector>


int bubble_sort(std::string dna){
    int count = 0;
    for(int i=0;i<dna.size()-1;++i)
        for(int j=i;j<dna.size();++j)
            if(dna[i]>dna[j]){
                count++;
            }
    return count;
}

void count_swaps(std::vector<std::pair<std::string, int>>& dnas){
    for(auto&i:dnas)
        i.second = bubble_sort(i.first);
}

bool comp(std::pair<std::string, int>&a, std::pair<std::string, int>& b){
    if(a.first != b.first)
        return a.second < b.second;

}

#endif //DNA_SORTING_DNA_SORTING_H
