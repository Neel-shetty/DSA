#include<bits/stdc++.h>
using namespace std;

class node
{

public:
    string name;
    list<string> neighbours;

    node(string name)
    {
        this->name=name;
    }

};

class graph
{
    unordered_map<string,node*> hashmap;

public:
    graph(vector<string> cities)
    {
        for(auto city:cities)
        {
            hashmap[city]=new node(city); 
        }
    }

    void addEdge(string city1,string city2,bool undirectedEdge=false)
    {
        hashmap[city1]->neighbours.push_back(city2);

        if(undirectedEdge)
        {
            hashmap[city2]->neighbours.push_back(city1);
        }
    }

    void printAdjList()
    {
        for(auto cityPair : hashmap)
        {
            auto city = cityPair.first;
            node *node = cityPair.second;
            cout<<city<<"-->";
            for(auto neighbour: node->neighbours)
            {
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }

};




int main()
{
    vector<string> cities = {"delhi","london","paris","new york"};
    graph graph(cities);
    graph.addEdge("delhi","london");
    graph.addEdge("new york","london");
    graph.addEdge("delhi","paris");
    graph.addEdge("paris","new york");

    graph.printAdjList();
}