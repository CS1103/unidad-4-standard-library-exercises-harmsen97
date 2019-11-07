#include <iostream>
#include <vector>
#include <sstream>

#include "permutation.h"

int main() {

    int n;
    std::string blank;
    std::cin>>n;
    std::cin.ignore();
    std::getline(std::cin, blank);

    for (int i=0; i<n; ++i){
        std::string line;
        std::getline(std::cin,line,'\n');
        std::istringstream isi(line);

        std::vector<int> idx( (std::istream_iterator<int>(isi)), std::istream_iterator<int>());

        std::getline(std::cin,line);
        std::istringstream isv(line);

        std::vector<double> values( (std::istream_iterator<double>(isv)), std::istream_iterator<double>());


        auto p = permute(idx, values);

        for (auto &i:p)
            std::cout << i << '\n';
    }




}