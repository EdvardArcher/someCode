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
    SE3<> se3;
    Vector<3> pos=makeVector(0,0,1);
    Vector<3> testinit;
   // se3=SE3<>::exp(makeVector(0,0,0,0,0,0))* SE3<>::exp(makeVector(0,0,0,1.5*M_PI*sin(0.25*M_PI),-1.5*M_PI*sin(0.25*M_PI),0));//se3 for rotation pos from (0,0,1) to (0.707,0.707,0) right hand rule
    se3=SE3<>::exp(makeVector(0,0,0,0,0,0))* SE3<>::exp(makeVector(0,0,0,1*M_PI*sin(0.25*M_PI),-1*M_PI*sin(0.25*M_PI),0));//se3 for rotation pos from (0,0,1) to (0,0,-1) right hand rule
    std::cout << "this is test\n" <<M_PI<<" sin "<<sin(0.25*M_PI)<<"\n"<< std::endl;
    std::cout<<"se3: \n"<< se3<<"\n"<<"se3.ln(): "<<se3.ln()<<"\n"<<"se3 rotation:\n"<<se3.get_rotation()<<"\n"<<se3*pos<<std::endl;  
    std::cout<<"\nvector init output:"<<testinit<<"\n"<<se3*testinit<<std::endl;

    return 0;
}
