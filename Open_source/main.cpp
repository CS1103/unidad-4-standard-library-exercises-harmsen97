#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>



bool comp(std::pair<std::string, int>&a, std::pair<std::string, int>& b){
    if(a.first != b.first)
        return a.second < b.second;

}


int main() {


    std::string line;
    std::map<std::string, std::string> users;
    std::string os, username;
    std::unordered_map<std::string, int> freq;

    while(true){

        std::getline(std::cin, line);

        if(line[0] == '1') {
            break;
        }

        if(isupper(line[0])){
            os = line;
            freq[os] = 0;
        }
        else{
            auto it = users.find(line);
            if(it != users.end()) {
                if(it->second != os) {
                    users.erase(it);
                }
            }
            else {
                users[line] = os;
            }
        }
    }

    for(auto&i:users)
        freq[i.second]++;

    std::vector<std::pair<std::string,int>> freqs;

    for(auto&i:freq)
        freqs.push_back(i);

    std::sort(freqs.begin(), freqs.end(), comp);

    for(auto&i:freqs)
        std::cout<<i.first<<' '<<i.second<<'\n';

    return 0;


}