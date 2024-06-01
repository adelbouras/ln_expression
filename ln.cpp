#include <iostream>
#include <string>
#include <math.h>
bool hasRacin(int x){
int a=static_cast<int>(sqrt(x));
return (a*a==x);
}
std::string intToString(int x){
    std::string a="";
    while(x!=0){
        switch(x%10){
            case 1:a='1'+a; break;
            case 2:a='2'+a; break;
            case 3:a='3'+a; break;
            case 4:a='4'+a; break;
            case 5:a='5'+a; break;
            case 6:a='6'+a; break;
            case 7:a='7'+a; break;
            case 8:a='8'+a; break;
            case 9:a='8'+a; break;
        }
        x/=10;
    }
    return a;
}
  std::string ln(int x){
    if(x==1)return "0";
  int sqr=0;
  std::string s="";
  while(hasRacin(x)){
  sqr+=2;
  x=int (sqrt(x));
  }
  return(intToString(sqr)+"ln("+intToString(x)+")");
  }
int main(){

std::cout<<ln(36)<<std::endl;
    return 0;
}