#include <iostream>

long int N;
long long sumP;

int main(){

//    ios_base::sync_with_stdio(0);
//    cin_tie(0);
std::cin>> N;
int S[N+1];

for(long int i=2; i<= N; i++)
    S[i] = 0;

for(long int i = 2;i <= N; i++)
    if(S[i] == 0)
        if(i*2<=N)
            for(int j = 2;j * i <= N; j++) 
                if(S[i*j] == 0){
                    S[i*j]= i;sumP+=i;}
             
std::cout<< sumP;

return 0;
}