//
// Created by Jeronimo on 2019-11-06.
//

#ifndef TRAIN_SWAPPING_TRAIN_SWAPPING_H
#define TRAIN_SWAPPING_TRAIN_SWAPPING_H


void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int train_swapping(std::vector<int>& a){
    int count = 0;
    for(int i=1;i<a.size();++i){
        for(int j = 0;j<a.size()-1;++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                count++;
            }
        }
    }
    return count;
}


#endif //TRAIN_SWAPPING_TRAIN_SWAPPING_H
