#include <iostream>
#include <queue>

using namespace std;

// Define the structure for the graph node
struct Node {
    int value;
    Node* nextNeighbor;
};

// Function to perform BFS traversal
void BFSTraversal(Node* start, bool visited[]) {
    // Create a queue and enqueue the starting node
    queue<Node*> q;
    q.push(start);
    visited[start->value] = true; // mark the start node as visited

    while (!q.empty()) {
        Node* currentNode = q.front();
        q.pop();

        cout << currentNode->value << " "; // print the current node

        for (Node* neighbor = currentNode->nextNeighbor; neighbor != nullptr; neighbor = neighbor->nextNeighbor) {
            if (!visited[neighbor->value]) { // check if the neighbor has not been visited
                q.push(neighbor); // enqueue the neighbor
                visited[neighbor->value] = true; // mark the neighbor as visited
            }
        }
    }
}

int main() {
    // Create a sample graph with 5 nodes and edges
    Node* nodes[] = {new Node{1}, new Node{2}, new Node{3}, new Node{4}, new Node{5}};
    bool visited[6] = {false}; // initialize the visited array

    // Add edges to the graph
    nodes[0]->nextNeighbor = nodes[1];
    nodes[1]->nextNeighbor = nodes[2];
    nodes[2]->nextNeighbor = nodes[3];
    nodes[3]->nextNeighbor = nodes[4];

    // Start BFS traversal from node 0 (assuming node 0 is the starting point)
    BFSTraversal(nodes[0], visited);

    return 0;
}