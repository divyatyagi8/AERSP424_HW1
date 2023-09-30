#include <iostream>

using namespace std;

int main()

{

double L_p = 0.5; // roll damping coefficient
double L_del = 0.8; // aileron effectiveness
double p_dot; // derivative of roll rate
int del_a; // aileron deflection angle
double delta_t = 0.01; // time step [sec]
double duration = 5; // [sec]
double size = duration / delta_t + 1; // size of array
double p[501];
p[0] = 1; //initial roll rate

for (int i = 0; i < size; i++)
{
    double t = delta_t * i; // time
    double K = 2.2; // control gain
    del_a = -K * p[i];
    p_dot = L_p * p[i] + L_del * del_a;
    p[i+1] = p[i] + p_dot * delta_t;
    cout<<"At t = "<<t<<" seconds, the roll rate is "<<p[i]<<endl;
}

return 0;
}

