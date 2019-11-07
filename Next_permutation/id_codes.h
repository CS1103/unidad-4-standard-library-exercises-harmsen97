//
// Created by Jeronimo on 2019-11-06.
//

#ifndef NEXT_PERMUTATION_ID_CODES_H
#define NEXT_PERMUTATION_ID_CODES_H


#include <algorithm>
#include <string>

std::string id_codes(std::string str){
    if(next_permutation(str.begin(), str.end()))
        return str;
    return "No successor";
}






#endif //NEXT_PERMUTATION_ID_CODES_H
