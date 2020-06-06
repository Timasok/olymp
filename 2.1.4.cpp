#include <iostream>
#include <cmath>
long long k = 1;
long long X;
long long a;
const long long C =pow(2,64)-1;//2^64 - 1
int main(){

std::cin>> a;
bool is = false;
if(a%3 == 0){
    X = a/3;
    is = true;
}else{
    for (int i = 1; i <= 63; i++){
       k = k * 2; 
       if((a + k)%3==0){
           X = (a + k)/3;
           is = true;
       }
    }
}

if(is == false){
    X = (C%3 + a)/3 + (C-C%3)/3;
}

std::cout<< X;

return 0;
}