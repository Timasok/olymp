#include <iostream>

long long C = 1000007;
long long a,b;
long long f1 = 0,f2 =1;

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
std::cin>> a >> b;

std::cout<< Mmul(Msub(a,b,C),Madd(a,b,C),C);

return 0;}