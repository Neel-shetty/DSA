#include<bits/stdc++.h>
using namespace std;

class graph
{
    int vertices;
    list<int> *arrayOfList;

public:
    graph(int verticeInput)
    {
        vertices=verticeInput;
        arrayOfList=new list<int>[vertices];
    }

    void addEdge(int node1,int node2,bool undirectedGraph=true)
    {
        arrayOfList[node1].push_back(node2);
        if(undirectedGraph)
        {
            arrayOfList[node2].push_back(node1);
        }
    }

    void printAdjList()
    {
        for(int i=0;i<vertices;i++)
        {
            cout<<i<<"->";
            for(auto node:arrayOfList[i])
            {
                cout<<node<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    graph graph(6);
    graph.addEdge(0,1);
    graph.addEdge(0,4);
    graph.addEdge(2,1);
    graph.addEdge(3,4);
    graph.addEdge(4,5);
    graph.addEdge(2,3);
    graph.addEdge(3,5);
    graph.printAdjList();

    return 0;

}