#include <stdio.h>

#define MAX_VERTICES 4  // Maximum number of vertices in the graph (set to 4 for this example)

// Function to initialize the adjacency matrix
void initializeMatrix(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjMatrix[i][j] = 0;  // Initialize all edges as 0 (no edge)
        }
    }
}
   
// Function to add an edge in an undirected graph
void addEdge(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int u, int v) {
    adjMatrix[u][v] = 1;  // Add edge from u to v
    adjMatrix[v][u] = 1;  // Since it's an undirected graph, add edge from v to u as well
}

// Function to display the adjacency matrix
void displayMatrix(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Number of vertices and edges predefined
    int vertices = 4;  // Set the number of vertices
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];

    // Initialize the adjacency matrix
    initializeMatrix(adjMatrix, vertices);

    // Predefined edges for the graph (vertex pairs for undirected edges)
    addEdge(adjMatrix, 0, 1);  // Edge between vertex 0 and 1
    addEdge(adjMatrix, 0, 2);  // Edge between vertex 0 and 2
    addEdge(adjMatrix, 1, 3);  // Edge between vertex 1 and 3
    addEdge(adjMatrix, 2, 3);  // Edge between vertex 2 and 3

    // Display the adjacency matrix
    displayMatrix(adjMatrix, vertices);

    return 0;
}
