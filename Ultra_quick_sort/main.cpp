#include <iostream>
#include <vector>
#include <algorithm>

int ultraQuickSort(std::vector<int> nums) {
    int count = 0;

    for(auto&j:nums){
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] > nums[i+1]) {
                std::swap(nums[i], nums[i + 1]);
                count++;
            }
        }
    }
    return count;
}



int main() {
    int n;
    while (std::cin >> n, n) {
        std::vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> nums[i];
        }
        std::cout << ultraQuickSort(nums);
    }
    return 0;
}