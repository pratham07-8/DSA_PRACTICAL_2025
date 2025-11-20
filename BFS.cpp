//20. BFS Traversal
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int graph[10][10];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> graph[i][j];

    int visited[10] = {0};
    int q[10], front = 0, rear = 0;

    int start;
    cout << "Enter start node: ";
    cin >> start;

    cout << "BFS: ";
    visited[start] = 1;
    q[rear++] = start;

    while(front < rear){
        int node = q[front++];
        cout << node << " ";

        for(int i=0;i<n;i++){
            if(graph[node][i] == 1 && !visited[i]){
                visited[i] = 1;
                q[rear++] = i;
            }
        }
    }
}
