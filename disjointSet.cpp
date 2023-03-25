#include<bits/stdc++.h>
using namespace std;

class DisjSet {
    int *rank, *parent, n;

public:
    DisjSet(int n){
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }

    void makeSet(){
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }

    int find(int x){
        if(parent[x]!=x)parent[x]=find(parent[x]);
        return x;
    }

    void Union(int x, int y){
        int xparent = find(x);
        int yparent = find(y);

        if(rank[xparent]<rank[yparent]){
            parent[xparent]=yparent;
        }
        else if(rank[xparent]>rank[yparent]){
            parent[yparent]=xparent;
        }
        else{
            parent[yparent]=xparent;
            rank[xparent]++;
        }
    }



};

int main(){





    return 0;
}