//
// Created by Jeronimo on 2019-11-05.
//

#ifndef PERMUTATION_ARRAYS_PERMUTATION_H
#define PERMUTATION_ARRAYS_PERMUTATION_H

#include <vector>

std::vector<double> permute(std::vector<int> indexes, std::vector <double> numbers){

    std::vector<double> permutation(numbers.size());

    for (int i = 0; i < numbers.size(); ++i){

        permutation [indexes[i]-1] = numbers[i];


    }
    return permutation;
}

#endif //PERMUTATION_ARRAYS_PERMUTATION_H
