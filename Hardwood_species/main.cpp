#include <iostream>
#include <map>
#include <iomanip>
int main() {     //le tuve que poner una modificacion, al test case input, se le tiene que poner . alfinal para que el programa termine de leer los datos

    int test_cases;
    std::string blank;

    std::cin>>test_cases;
    std::cin.ignore();
    std::getline(std::cin, blank);

    for(int i = 0; i< test_cases; ++i){
        std::map<std::string, int> freq;
        std::string wood;
        int size = 0;
        while(std::getline(std::cin,wood), wood!="."){
            freq[wood]++;
            size++;
        }

        for(auto&j:freq)
            std::cout<<j.first<<' '<<std::fixed<< std::setprecision(4)<< (double)j.second/size*100<<'\n';

    }
}