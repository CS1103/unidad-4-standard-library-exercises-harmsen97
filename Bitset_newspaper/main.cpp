#include <iostream>

#include "bitset.h"

int main() {
    int tst_cases;
    int elements;
    std::map<char, int> cost;

    char ch;
    int n, num_lines;

    std::cin>>tst_cases>>elements;

    for(int i=0; i<tst_cases; ++i){

        for(int j=0; j<elements;++j){
            std::cin>>ch>>n;
            cost[ch] = n;
        }

        std::cin>>num_lines;
        num_lines++;

        std::string line, article;

        while(num_lines--) {
            std::getline(std::cin,line);
            article += line;
        }

        double p = newspaper(cost, article);

        std::cout<<p<<'$';

    }
}