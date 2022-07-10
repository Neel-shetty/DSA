#include<iostream>
#include<list>
#include<set>
#include<vector>
#include<climits>
using namespace std;

class Graph{

	int V;
	list<pair<int,int> > *l;

public:
	Graph(int v){
		V = v;
		l = new list<pair<int,int> >[V];
	}

	void addEdge(int u,int v,int wt,bool undir = true){

		l[u].push_back({wt,v});
		if(undir){
			l[v].push_back({wt,u});
		}
	}

    int dijkshtra(int src,int dest)
    {
        vector<int> dist(V,INT_MAX);
        set<pair<int,int>> s;

        dist[src]=0;
        s.insert({0,src});

        while(!s.empty())
        {
            auto it = s.begin();
            int node = it->second;
            int distTillNow = it->first;
            s.erase(it);

            for(auto neighbourPair:l[node])
            {
                int neighbour =neighbourPair.second;
                int currentEdge = neighbourPair.first;

                if(distTillNow+currentEdge<dist[neighbour])
                {
                    auto f = s.find({dist[neighbour],neighbour});
                    if(f!=s.end())
                    {
                        s.erase(f);
                    }

                    dist[neighbour]=distTillNow+currentEdge;
                    s.insert({dist[neighbour],neighbour});
                }
            }
            for(int i=0;i<V;i++)
            {
                cout<<"node i "<<i<<" dist "<<dist[i]<<endl;
            }
        }
        return dist[dest];

    }


};

int main(){

	Graph g(5);
	g.addEdge(0,1,1);
	g.addEdge(1,2,1);
	g.addEdge(0,2,4);
	g.addEdge(0,3,7);
	g.addEdge(3,2,2);
	g.addEdge(3,4,3);

	cout << g.dijkshtra(0,4)<<endl;
}