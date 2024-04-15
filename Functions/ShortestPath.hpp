#pragma once

#include "Util/Util.hpp"
using namespace std;



#define MAX_DIST (FLT_MAX/2 - 1)
#define SEP ";"

class Dijkstra
{

    string          *paths;
    float           *costToNode;

    Dijkstra() {};

    void            CalcOneToOneCostIncidence(vector<vector<float>> &m, int n, int f);
    int             GetNextNode(int *nodes, float *costToNode, int n);


};

bool TextToIncidence(string filename, vector<vector<float>> &m, char separator = ' ');