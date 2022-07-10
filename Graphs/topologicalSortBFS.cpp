#include<bits/stdc++.h>
using namespace std;

class graph
{
    int vertices;
    list<int> *arrayOfList;

public:
    graph(int vertices)
    {
        this->vertices=vertices;
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

    void bfs(int source)
    {
        queue<int> queue;
        bool *isvisited = new bool[vertices]{0};

        queue.push(source);
        isvisited[source]=true;

        while(!queue.empty())
        {
            int front = queue.front();
            cout<<front<<endl;
            queue.pop();

            for(auto neighbour : arrayOfList[front])
            {
                if(!isvisited[neighbour])
                {
                    queue.push(neighbour);
                    isvisited[neighbour]=true;
                    
                }
            }

        }
    }

    void topologicalSort()
    {
        vector<int> indegree(vertices,0);

        for(int i=0;i<vertices;i++)
        {
            for(auto neighbour : arrayOfList[i])
            {
                indegree[neighbour]++;
            }
        }

        queue<int> queue;
        for(int i=0;i<vertices;i++)
        {
            if(indegree[i]==0)
            {
                queue.push(i);
            }
        }

        while(!queue.empty())
        {
            int node=queue.front();
            cout<<node<<" ";
            queue.pop();

            for(auto neighbour: arrayOfList[node])
            {
                indegree[neighbour]--;
                if(indegree[neighbour]==0)
                {
                    queue.push(neighbour);
                }
            }
        }
    }

};

int main()
{
    graph graph(7);
    graph.addEdge(0,1);
    graph.addEdge(0,4);
    graph.addEdge(2,1);
    graph.addEdge(3,4);
    graph.addEdge(4,5);
    graph.addEdge(2,3);
    graph.addEdge(3,5);
    graph.topologicalSort();

    return 0;

}