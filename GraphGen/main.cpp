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
#include <algorithm>


using namespace std;

const int N = 50;  //Global constant for number of nodes
const int M = 1000;  //Global constant for number of nodes
// Point class tuple of 2-elements (x,y).  Could be a node on a monitor
// a point on a Cartesian plane or a Node in a Graph

class node {

private:

    int x;
    int y;

public:

    // node(int x = 0, int y = 0):x(x),y(y){} // constructor

    // required constructors.  This was necessary in lieu of
    // the above commented out constructor to do the comparison
    // operator overloading.  I'm not sure why.
    node() {
        x = 0;
        y = 0;
    }

    node(int u, int v) {
        x = u;
        y = v;
    }

    // ~node();

    // No destructor is required here.  compiler creates a default destructor for us.
    // The default destructor works fine unless we have dynamically allocated memory
    // or pointer in class. When a class contains a pointer to memory allocated in
    // class, we should write a destructor to release memory before the class
    // instance is destroyed. This must be done to avoid memory leaks

    // Class members
    int getX();

    int getY();

    void Set(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // int Edge(const node &) const;   // Define the Edge as the maggnitude of the difference btw pxs

    //Operator Overloders
    node operator+(const node &) const; // operator+()
    node operator-(const node &) const; // operator-()
    bool operator!=(const node &) const; // operator !=(not equal to)
    bool operator==(const node &) const; // operator==(equal to)
    // ostream overloader must be declared a friend of the class to access private memebers
    friend ostream &operator<<(ostream &out, const node &p);

};

ostream &operator<<(ostream &out, const node &p) {
    out << "(" << p.x << ',' << p.y << ")" << endl;

    return out;
}


// define overloaded + (plus) operator
node node::operator+(const node &c) const {
    node result;
    result.x = (this->x + c.x);
    result.y = (this->y + c.y);
    return result;
}

// define overloaded - (minus) operator
node node::operator-(const node &c) const {
    node result;
    result.x = (this->x - c.x);
    result.y = (this->y - c.y);
    return result;
}

// define overloaded != (not equal) operator
bool node::operator!=(const node &c) const {
    {
        if ((this->x != c.x) && (this->y != c.y))
            return true;
    }
    return false;
}


// define overloaded == (equal) operator
bool node::operator==(const node &c) const {
    {
        if ((this->x == c.x) && (this->y == c.y))
            return true;
    }
    return false;
}


int node::getX() {
    return x;
}

int node::getY() {
    return y;
}


int main() {

    int x = 0;
    int y = 0;
    int NodeCnt = 0;
    int DupliCount = 0;

    int RandInt = 0;
    // weight of edge will be the distance btw nodes
    //int minEdge = 0;
    //int idx = 0;
    int Uj = 0;
    int Vj = 0;

    int lowr = 400;
    int uppr = 600;

    node ptj;
    node pt;
    node pti;

    // node NodeList[N] declaration;
    vector<node> NodeList(N);    // Vector of N points init to 0
    node *p = NodeList.data();  // declare and set a ptr to node to the base loc of NodeList

    //Create a vector of a vector of ints.  Not to be confused with a matrix of ints
    // vector<vector<int>> GraphMt; would create the vector of vectors.
    // the right hand side initializes it to zero.
    vector<vector<int>> GraphMtx(0);
    vector<int> EdgeList(N);  // list of edges for each node -1=NC 0=self  Edge=didstance
    int *Edge = EdgeList.data();



//Random int generator
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(0, N);
    std::uniform_int_distribution<> disr(0, M);




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
//

    cout << endl;


    for (int i = (N - 1); i >= 0; --i) {
        pti = NodeList[i];
        cout << "Node[" << i << "]" << pti << endl;
        cout << "Node[" << i << "] is conneted to:  ";
        for (int j = 0; j < N; j++) {
            RandInt = disr(gen);
            if (i == j) {
                *Edge = 0;
                ++Edge;
            } else if ((RandInt < lowr) || (RandInt >= uppr)) { // 80% of the time
                *Edge = -1;
                ++Edge;
            } else {                        // 20% of the time
                ptj = NodeList[j];
                ptj = ptj - pti;
                Uj = ptj.getX();
                Vj = ptj.getY();
                *Edge = sqrt((Uj * Uj) + (Vj * Vj));  // edge is the didtance btw nodes
                cout << "->Node[" << j << "] " << *Edge << "    ";
                ++Edge;
            }
        }


        GraphMtx.push_back(EdgeList);  //vector of edges pushed onto Graph

        for (int k = 0; k < N; ++k)   //  back the pointer up for mem mgt.
            --Edge;              // otherwise it will keep advancing and
        // consumeing mem.  Assigning the vect
        // in this manner doesn't take advantage
        // of the STL mem mgt

        cout << " " << endl;               // Node(0) pushed back last, should reside at index 0

    }

    EdgeList = GraphMtx[0];
//    auto minEdge = min_element(begin(EdgeList), end(EdgeList));
//    auto idx     = distance(begin(EdgeList), minEdge);
//    idx=int(idx);







    return 0;

}