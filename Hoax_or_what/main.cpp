#include <iostream>
#include <set>

int main() {

    int n;
    while(std::cin>>n, n){
        int res = 0;
        std::multiset<int> bills;
        for(int i=0;i<n;++i){
            int k;
            std::cin>>k;
            for(int j=0;j<k;++j){
                int ip; std::cin>>ip;
                bills.insert(ip);
            }
            auto it = bills.end(); it--;
            res += *it - *bills.begin();
            bills.erase(it);
            bills.erase(bills.begin());
        }
        std::cout<<res<<'\n';
    }
    return 0


}