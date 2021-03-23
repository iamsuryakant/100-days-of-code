//Program to check BFS.
#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u); //add in undirected way
}

void BFS(vector<int>adj[], int V)
{
    bool visited[V+1]; //keep track of all the nodes.

    for(int i = 1; i<=V; i++)
        visited[i] = false; //Mark all vertices not visited initially.

    //create a queue to perform BFS (Breadth First Search).

    queue<int> q;

    int s = 1; //Source vertex is initialized to 1.

    visited[s] = true; //mark s is visited and push to queue.
    q.push(s);

    while(!q.empty()){

        int node = q.front();

        q.pop(); //pop out the node element.

        cout<<node<<" ";
        //Traverse all the nodes of the currently printed nodes.

        for(int i = 0; i<adj[node].size(); i++){
            if(visited[adj[node][i]] == false){
                //Mark it visited.
                visited[adj[node][i]] = true;

                //push it to queue.

                q.push(adj[node][i]);
            }
        }

    }
}

//main code
int main()
{
    int V = 6;

    vector<int> adj[V+1];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    BFS(adj, V);

    return 0;
}

