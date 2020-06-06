#include <iostream>

long long int a,b,c;
long long drob;
int main(){
    //    ios_base::sync_with_stdio(0);
    //    cin_tie(0);
std::cin>> a >> b >> c;
for(long int i=2; i<= N; i++)
    S[i] = 0;

for(int i = 2;(long long) i * i <= N; i++;)
    if(S[i] == 0)
        for(int j = i;(long long) j * i <= N; j++){
            S[i*j]= 1;
            if(N % i == 0)k++;}

return 0;}