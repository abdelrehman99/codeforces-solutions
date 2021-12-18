#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;

int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isleap(int x){
  if(x % 4 == 0){
    if(x % 100 == 0 && x % 400 != 0)return false;
    return true;
  }
  return false;
}
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
int main(){
  string s1, s2;
  cin>>s1>>s2;
  if(s1 > s2)swap(s1, s2);
  int y1 = toInt(s1.substr(0, 4));
  int y2 = toInt(s2.substr(0, 4));
  int m1 = toInt(s1.substr(5, 7));
  int m2 = toInt(s2.substr(5, 7));
  int d1 = toInt(s1.substr(8, 11));
  int d2 = toInt(s2.substr(8, 11));
  int year = y1, day = d1, month = m1;
  int res = 0;
  while(true){
    if(year == y2 && month == m2 && day == d2){
      break;
    }
    if(isleap(year))months[2] = 29;
    else months[2] = 28;
    if(day == months[month] && month != 12){
      day = 1;
      month++;
    }
    else if(day == months[month] && month == 12){
      day = 1;
      month = 1;
      year++;
    }
    else day++;
    res++;
  }
  cout<<res<<endl;
  return 0;
}
