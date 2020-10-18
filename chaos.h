//
// Created by will-zhu on 10/18/20.
//


#ifndef CHAOSSIMULATION_CHAOS_H
#define CHAOSSIMULATION_CHAOS_H

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;
class chaos {
    vector<double> kk;
    vector<vector<double>> xx;



public:
    chaos(){}
    ~chaos(){}
    double iteration(double k, int cycle, double x_start);
    int findCycle(double x, double k);
    void KX2txt();
};


#endif //CHAOSSIMULATION_CHAOS_H
