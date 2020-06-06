#include <iostream>

long int N;
int k=1;

int main(){

//    ios_base::sync_with_stdio(0);
//    cin_tie(0);

std::cin>> N;

for(long int i = 2;(long int)i * i < N; i++)
    if(N % i == 0)k=0;
    
std::cout<< k;

return 0;}