//*********************************************************************
//         Graph Generator
//
//         One Giant mess of a program to verify the algorithms
//         To be used to generate the Graph for the Dijkstra Project
//
//    Patrick Donaldson  pasqualino31@gmail.com
//
//********************************  Main Program  **********************
#include <iostream>
#include <cmath>
#include<vector>
#include<random>
#include "node.h"
#include "Graph.h"



using namespace std;



int main() {
    vector<node> NL(N);
    vector<node>* NList;
    node *np = nullptr;

    NList = &NL;

    Graph::GenNodeList(NList,np);




    return 0;

}