#include "ShortestPath.hpp"

void Dijkstra(int n)
{
    float   *costToNode     = (float *)     calloc(n, sizeof(float));
    string  *path           = (string *)    calloc(n, sizeof(string));
}

/// @brief Calculate the cost and saves the shortest path from f to all others, based on the incidence matrix m of size n
void Dijkstra::CalcOneToOneCostIncidence(vector<vector<float>> &m, int n, int f)
{
    int     *nodes          = (int *)       calloc(n, sizeof(int));

    //All nodes are infinity
    for(int i = 1; i < n; i++)
    {   
        costToNode[i] = MAX_DIST;
        paths[i] = to_string(f) + SEP;
    }

    //Visit first node
    nodes[f] = 1;
    int curNode  = f; 
    while(curNode != -1)
    {
        float curCost = costToNode[curNode];
        string curPath = paths[curNode];
        for(int k = 0; k < n; k++)
        {
            //check visited and cost reduction to next node
            if(m[curNode][k] != -1 && nodes[k] == 0 && curCost + m[curNode][k] < costToNode[k])
            {
                costToNode[k] = curCost + m[curNode][k];
                paths[k] = curPath + to_string(k) + SEP;
            }
        }

        curNode = GetNextNode(nodes, costToNode, n);
    }

    free(nodes);
    free(costToNode);

    return;

}

int Dijkstra::GetNextNode(int *nodes, float *costToNode, int n)
{
    int next = -1;
    float minCost = MAX_DIST;

    for(int i = 0; i < n; i++)
    {
        if(nodes[i] == 0)
        {
            if(costToNode[i] < minCost)
            {
                minCost = costToNode[i];
                next = i;
            }

        }
    }

    return next;
}


bool TextToIncidence(string filename, vector<vector<float>> &m, char separator)
{
    fstream file;
    file.open(filename, ios::in);
    int row = 0, col = 0;
    if(file.is_open())
    {
        string curLine;
        if(!getline(file, curLine))
            return false;
        
        int size = stoi(curLine);
        m = vector<vector<float>>(size, vector<float>(size, -1));       

        while(getline(file, curLine))
        {
            stringstream temp(curLine);
            string cost;
            while(getline(temp, cost, separator))
            {
                m[row][col] = stof(cost);
                col++;
            }
            row++;
            col = 0;
        }
    }
    else
        return false;

    return true;
}