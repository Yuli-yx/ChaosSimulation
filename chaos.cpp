//
// Created by will-zhu on 10/18/20.
//

#include "chaos.h"

double iteration();
int findCycle();
double chaos::iteration(double k, int cycle, double x_start)
{
    double x = x_start;
    for(int i = 0 ;i< cycle;i++)
    {
        x = 1 - k * x * x;

    }

    return x;
}

void chaos::KX2txt()
{
    ofstream file;
    file.open("/home/will-zhu/Documents/ChaosSimulation/k_x.txt");
    if(!file)
    {
        cout<<"error"<<endl;
    }
    for ( double k = 0.01;k < 2;k= k+0.01 )
    {
       double x= iteration(k,1000,1);
        kk.push_back(k);
        findCycle(x,k);
    }

    for (int i = 0;i< kk.size();i ++)
    {
        file << kk[i]<<"\t";
        for(int j = 0;j<xx[i].size();j++)
        {file<<xx[i][j]<<"\t";}
            
        file<<"\n";
    }
    file.close();
}

int chaos::findCycle(double x,double k)
{
    double t = x;
    int cycle = 0;
    vector<double> tmp;
    do{
        tmp.push_back(x);
        x = iteration(k,1,x);
        cycle++;
    }while(abs(x-t)>0.0001 && cycle<=100);
    xx.push_back(tmp);
     return cycle;
}

