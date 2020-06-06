#include <iostream>

long long C = 1000003;
long long N;

long long modA(long long a, long long MOD){
return ((a%MOD)+ MOD)%MOD;} // нахождение остатка даже если a - отрицательное число

long long Madd(long long x,long long y, long long MOD){
return modA(modA(x,MOD)+ modA(y,MOD),MOD);}

long long Msub(long long x,long long y, long long MOD){
return modA(modA(x,MOD)- modA(y,MOD),MOD);}

long long Mmul(long long x,long long y, long long MOD){
return modA(modA(x,MOD)*modA(y,MOD),MOD);}

int main(){
    //    ios_base::sync_with_stdio(0);
    //    cin_tie(0);
std::cin>> N;
long long res=1;

for(int i = 1;(long long) i < N/2; i++){
    res = Mmul(i,(N-i),C)*res;
}

std::cout<< res%C;

return 0;}