#include <iostream>
#include <vector>

#include "train_swapping.h"

int main() {
    int tc = 0;
    std::cin>>tc;

    for(int i = 0; i< tc; ++i){
        int n;
        std::cin>>n;
        std::vector<int> carriages(n);
        for(int j = 0; j<n;++j){
            std::cin>>carriages[j];
        }
        std::cout<<std::endl;
        std::cout<<"Optimal train swapping takes " <<train_swapping(carriages)<<" swaps"<<'\n';
    }
}