/*************************************************************************
	> File Name: testSE.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 07 Jul 2016 06:30:39 PM CST
 ************************************************************************/

#include<iostream>
#include <TooN/TooN.h>
#include <TooN/se3.h>

using namespace std;
using namespace TooN;
int main(int argc, char *argv[])
{
    std::vector<int> array[10];
for (int i = 0; i < 10; ++i) {
    array[i].push_back(i);
    array[i].reserve(500);
    
}

    for (int i = 0; i < 10; ++i) {
        
    
    std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = array[i].begin() ; it != array[i].end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
   // std::cout<<array.at(0)<<std::endl;
    }
    return 0;
}
