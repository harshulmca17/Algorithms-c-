#include<iostream>
#include<stdio.h>
#include<climits>
//#include<cstdint>
//#include<stdint.h>

int n=5;

int min_distance(int dist[],bool sptSet[],int n){
    int min = INT_MAX;
    int min_index;
    for(int v=0;v<n;v++){
        if(sptSet[v]==false && dist[v]<=min){
            min = dist[v];
            min_index=v;
        }
    }
    return min_index;
}

void dijikstra(int n,int graph[][30],int src){
    int dist[n];      //list of the distance of each vertex from source - src
    bool sptSet[n]; //check if the vertex is included in the shortest path
    int cnt,u;
    for(int i=0;i<n;i++){
        dist[i]= INT_MAX;
        sptSet[i]=false;
    dist[src] = 0;
    } 
    for(cnt=0;cnt<n-1;cnt++){
        u = min_distance(dist,sptSet,n);
        sptSet[u]=true;
        for(int v=0;v<n;v++){
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v]<dist[v]){
                dist[v] = dist[u]+graph[u][v];
            }
        }
        
    }
    std::cout << "vertex dist frm source: " << std::endl;
    for(int j=0;j<n;j++){
            std::cout << "\t"<<j<<"\t"<<dist[j] << std::endl;
        }
}

int main(){
    std::cout << "enter size of graph matrix (nxn): " << std::endl;
    std::cin >> n;
    int graph[n][30];
    std::cout << "input the vertices in matrix form:  \t enter the distance between vertices i & j at position array[i][j]\t\n" << std::endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cin >> graph[i][j];
        }
    }
    dijikstra(n,graph,0);
    return 0;
}
