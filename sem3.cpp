#include<iostream>
#include<math.h>
#include<bitset>


int main(){
    float a = 0;
    for (int i = 1; i < 30; i++){
        a += 1 / pow(2, i);
        std::cout << std::bitset<32>(*reinterpret_cast<long*>(&a)) << std::endl;
    }
    std::cout<<a << std::endl;
    
    return 0;
}