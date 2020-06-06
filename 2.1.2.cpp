#include <iostream>

long long int a,b,c;
long long drob;
int main(){
    //    ios_base::sync_with_stdio(0);
    //    cin_tie(0);
std::cin>> a >> b >> c;

drob = -1*a*b*c/(a*b+a*c+b*c);

std::cout<< -1*drob;

return 0;}