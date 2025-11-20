//19. Graph Using Adjacency Matrix
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    int graph[10][10] = {0};

    cout << "Enter edges (u v), -1 -1 to stop:\n";
    while(true){
        int u, v;
        cin >> u >> v;
        if(u == -1 && v == -1) break;
        graph[u][v] = graph[v][u] = 1;
    }

    cout << "Adjacency Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }
}

