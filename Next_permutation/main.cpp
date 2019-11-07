#include <iostream>

#include "id_codes.h"

int main() {
   std::string id;
   while(std::cin>>id){
       if(id == "#")
           break;


       std::cout<<id_codes(id)<<std::endl;

   }
}