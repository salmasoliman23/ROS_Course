#include<iostream>
#include<math.h>
using namespace std;

double function(double mu,double sigma2,double x)
{
double pie = 2 * acos(0.0);
double prob = 1.0/(sigma2 * sqrt(2*pie))*exp((-1.0/2.0)*pow((x-mu)/sigma2,2));
return prob;
}

int main()
{
cout<<function(10.0,4.0,8.0)<<endl;
return 0;
}
