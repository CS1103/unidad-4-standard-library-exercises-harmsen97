#include <iostream>

#include "dna_sorting.h"



int main() {
    int n;
    std::string blank;
    std::cin>>n;
    std::cin.ignore();
    std::getline(std::cin, blank);

    int length, q;
    std::cin>>length>>q;
    std::vector<std::pair<std::string, int>> dnas(q);

    for(int i=0;i<q;++i){
        std::pair<std::string, int> dna;
        std::cin>>dna.first;
        dna.second = 0;
        dnas[i] = dna;
    }

    count_swaps(dnas);

    std::sort(dnas.begin(), dnas.end(), comp);

    for(auto&i:dnas)
        std::cout<<i.first<<'\n';

    return 0;
}