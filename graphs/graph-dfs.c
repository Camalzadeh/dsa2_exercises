/**
 * \file graph-dfs.c
 * \author Antigravity
 */

#include "graph.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// opaque structure (we keep it in the implementation)
struct graph {
    size_t count;       //< number of vertices 
    bool undirected;    //< is it an undirected graph
    adj_node** adj_list;//< the start of the vertices list
};

static int time_counter = 0;

void dfs_visit(graph *g, int u, info_node *info_arr) {
    info_arr[u].color = GRAY;
    info_arr[u].d = ++time_counter; // discovery time

    // For each vertex v in g.Adj[u]
    adj_node *v = g->adj_list[u];
    while (v) {
        int v_id = v->id;
        printf("->v exists : %d, color=%d\n", v_id, info_arr[v_id].color);
        if (info_arr[v_id].color == WHITE) {
            printf("-> set color to GRAY (via %d)\n", u);
            info_arr[v_id].predecessor = u;
            dfs_visit(g, v_id, info_arr);
        }
        v = v->next;
    }
    info_arr[u].color = BLACK;
}

/**
 * @brief Perform a DFS from a given `source` vertex 
 */
info_node* graph_dfs(graph *g, int source) {
    assert(g);                  // non-empty graph
    assert(source < g->count);  // s must belong to graph's vertices

    info_node *info_arr = malloc(g->count * sizeof(info_node)); 
    
    // for each vertex
    for (size_t i=0; i<g->count; i++) {
        info_arr[i] = (info_node){.id = i, .predecessor = -1, .color = WHITE, .d=0};
    }
    
    time_counter = 0;
    
    // Start DFS from the given source
    dfs_visit(g, source, info_arr);

    // Continue DFS for any unvisited vertices to ensure full forest coverage
    for (size_t i=0; i<g->count; i++) {
        if (info_arr[i].color == WHITE) {
            dfs_visit(g, i, info_arr);
        }
    }

    return info_arr;
}


static void print_node_info(info_node *arr, size_t count) {
    printf(">---------------------------------------------------\n");
    for (size_t i=0; i<count; i++){
        printf("> id=%d predecessor=%d color=%d, d=%ld\n", 
            arr[i].id, arr[i].predecessor, arr[i].color, arr[i].d);
    }
    printf(">---------------------------------------------------\n");
}


void print_path(info_node *info_arr, int s, int v) {
    if (v == s)
        printf("%d ", s);
    else {
        if (info_arr[v].predecessor == -1)
            printf("No path from %d to %d\n", s, v);
        else {
            print_path(info_arr, s, info_arr[v].predecessor);
            printf("%d ", v);
        }
    }
    printf("\n");
}

int main(int argc, char **argv) {

    int weight = 1;
    // create a graph with 6 vertices {0, .., 5}
    graph *g = graph_create(6, false); // directed
    graph_add_edge(g, 0, 1, weight);
    graph_add_edge(g, 1, 2, weight);
    graph_add_edge(g, 2, 3, weight);
    graph_add_edge(g, 1, 4, weight);
    graph_add_edge(g, 4, 3, weight);
    graph_add_edge(g, 3, 5, weight);
    graph_add_edge(g, 4, 5, weight);
    
    graph_print(g);
    graph_print_struct(g, true);

    printf("* Performing DFS ...\n");
    const int source = 0;
    const int dest = 5;
    info_node* search_info = graph_dfs(g, source);

    printf("* Printing shortest path from %d to %d ...\n", source, dest);
    print_node_info(search_info, g->count);
    print_path(search_info, source, dest);

    return 0;
}
