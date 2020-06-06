#include <iostream>

long long C = 1000003;
long long N;
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
std::cin>> N;
int fi = 0;    
long long a = fi;
for (long long i = 1; i <= N; i++){
    fi = Madd(f1,f2,C);f1 = f2;f2 = fi;}

std::cout<< fi;

return 0;}