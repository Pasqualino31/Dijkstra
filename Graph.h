
#include <iostream>
#include <vector>
#ifndef DIJKSTRA_GRAPH_H
#define DIJKSTRA_GRAPH_H

#include <iostream>
#include<vector>
#include<random>
#include "node.h"



using namespace std;

class Graph {

    private:
        int x;
        int y;
        vector<node> NodeList;
        int *np;

    public:

    // constructor
 //Graph(  int x = 0, int y = 0,  vector<node> *NodeList, node *np): x(x),y(y),NodeList(),np(){}

    Graph():   x(x),y(y),NodeList(),np(){}

    //void GenNodeList(vector<node> NL(), int &np) {x,y,NodeList, &np; }

    static void GenNodeList(vector<node>* NL, node* np);

    //void addOne(vector<node>* NL);

};


#endif //DIJKSTRA_GRAPH_H
