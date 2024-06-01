#include <iostream>
#include <string>
#include <math.h>
bool hasRacin(int x){
int number=static_cast<int>(sqrt(x));
return (number*number==x);
}
std::string intToString(int x){
    std::string number="";
    while(x!=0){
        switch(x%10){
            case 1:number='1'+number; break;
            case 2:number='2'+number; break;
            case 3:number='3'+number; break;
            case 4:number='4'+number; break;
            case 5:number='5'+number; break;
            case 6:number='6'+number; break;
            case 7:number='7'+number; break;
            case 8:number='8'+number; break;
            case 9:number='8'+number; break;
        }
        x/=10;
    }
    return number;
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
    int number;
    std::cin>>number;
std::cout<<ln(number)<<std::endl;
    return 0;
}