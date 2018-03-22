//
// Created by pj on 3/19/18.
//
#include <iostream>
#include <cmath>
#include<vector>
#include<random>
#include <algorithm>
#include "Graph.h"


using namespace std;





//   GenNodeList Function
void Graph::GenNodeList(vector<node>* NL, node* p) {

    int x = 0;
    int y = 0;
    int NodeCnt = 0;
    int DupliCount = 0;

    node ptj;
    node pt;


    // node NodeList[N] declaration;
    vector<node> NodeList(N);    // Vector of N points init to 0
    p = NodeList.data();  // declare and set a ptr to node to the base loc of NodeList

    //Random int generator
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(0, N);

    // Generate Node 0
    x = dis(gen); //
    y = dis(gen); // generate a random px
    pt.Set(x, y); //
    *p = pt;  //put node 0 in the Nodelist
    // ostream overload can't handle the node vector element reference
    // a temp value for node is assigned for display purposes

    ptj = NodeList[NodeCnt];
    cout << "Node(" << NodeCnt << ") = " << ptj << endl;
    ++p;           // advance pxr to next NodeList location
    NodeCnt = 1;   //Node is added to vector, so advance the count



// /int 0 is assigned, now generate the next N-1 values checking for duplicates
    while (NodeCnt < N) {
        x = dis(gen);   //
        y = dis(gen);   // generate a new random px
        pt.Set(x, y);   //

        // Check to see if pt is already on the Node List
        auto result1 = find(begin(NodeList), end(NodeList), pt);
        if (result1 != std::end(NodeList)) {   // Do not advance Node Cntr
            cout << "Nodelist Already Contains: " << pt << endl;
            ++DupliCount;
        } else {
            // Node pt is unique

            *p = pt;       // put pt in NodeList
            ptj = NodeList[NodeCnt];
            cout << "Node(" << NodeCnt << ") = " << ptj << endl;
            ++p;           // advance ptr to next NodeList location
            ++NodeCnt;        // advance Node counter
        }
    }

    NL= &NodeList;


}

//
//void Graph::GraphGen(vector<node>* NL, node* p) {
//
//int x = 0;
//int y = 0;
//int NodeCnt = 0;
//int DupliCount = 0;
//
//int RandInt = 0;
//// weight of edge will be the distance btw nodes
////int minEdge = 0;
////int idx = 0;
//int Uj = 0;
//int Vj = 0;
//
//int lowr = 400;
//int uppr = 600;
//
//
////Create a vector of a vector of ints.  Not to be confused with a matrix of ints
//// vector<vector<int>> GraphMt; would create the vector of vectors.
//// the right hand side initializes it to zero.
//vector<vector<int>> GraphMtx(0);
//vector<int> EdgeList(N);  // list of edges for each node -1=NC 0=self  Edge=didstance
//int *Edge = EdgeList.data();
//
//
//
////Random int generator
//std::random_device rd;  //Will be used to obtain a seed for the random number engine
//std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
//std::uniform_int_distribution<> dis(0, N);
//std::uniform_int_distribution<> disr(0, M);
//
//
//
//void
//for (int i = (N - 1); i >= 0; --i) {
//pti = NodeList[i];
//cout << "Node[" << i << "]" << pti << endl;
//cout << "Node[" << i << "] is conneted to:  ";
//for (int j = 0; j < N; j++) {
//RandInt = disr(gen);
//if (i == j) {
//*Edge = 0;
//++Edge;
//} else if ((RandInt < lowr) || (RandInt >= uppr)) { // 80% of the time
//*Edge = -1;
//++Edge;
//} else {                        // 20% of the time
//ptj = NodeList[j];
//ptj = ptj - pti;
//Uj = ptj.getX();
//Vj = ptj.getY();
//*Edge = sqrt((Uj * Uj) + (Vj * Vj));  // edge is the didtance btw nodes
//cout << "->Node[" << j << "] " << *Edge << "    ";
//++Edge;
//}
//}
//
//
//GraphMtx.push_back(EdgeList);  //vector of edges pushed onto Graph
//
//for (int k = 0; k < N; ++k)   //  back the pointer up for mem mgt.
//--Edge;              // otherwise it will keep advancing and
//// consumeing mem.  Assigning the vect
//// in this manner doesn't take advantage
//// of the STL mem mgt
//
//cout << " " << endl;               // Node(0) pushed back last, should reside at index 0
//
//}
//
//EdgeList = GraphMtx[0];
//    auto minEdge = min_element(begin(EdgeList), end(EdgeList));
//    auto idx     = distance(begin(EdgeList), minEdge);
//    idx=int(idx);




//void addOne(vector<node>* NodeList) {

  //  *Nodelist.push_back(1); }