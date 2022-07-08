#include<bits/stdc++.h>
using namespace std;

class car
{
public:
    string id;
    int x,y;
    car(string id, int x,int y)
    {
        this->id=id;
        this->x=x;
        this->y=y;
    }
    int dist() const
    {
        return x*x+y*y;
    }
};

class carcompare
{
public:
    bool operator()(const car a,const car b)
    {
        return a.dist()<b.dist();
    }
};

void printnear(vector<car> cars,int k)
{
    priority_queue<car,vector<car>,carcompare> maxheap(cars.begin(),cars.begin()+k);

    for(int i=k;i<cars.size();i++)
    {
        auto car =cars[i];

        if(car.dist()<maxheap.top().dist())
        {
            maxheap.pop();
            maxheap.push(car);
        }
    }

    while(!maxheap.empty())
    {
        cout<<maxheap.top().id<<endl;
        maxheap.pop();
    }
}

int main()
{
    int n,k;
    cin>>n>>k;

    string id;
    int x,y;

    vector<car> cars;

    for(int i=0;i<n;i++)
    {
        cin>>id>>x>>y;
        car car(id,x,y);
        cars.push_back(car);
    }

    printnear(cars,k);

}