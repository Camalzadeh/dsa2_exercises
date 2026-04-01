#include <stdlib.h>
#include "bstree.h"  

#define dict node

#include "dict.h"

dict* dict_create(void) {
  // i need to create node for root of my tree
  return node_create(NULL, NULL);
}

dict* dict_delete(dict* d) {
  // just deleting tree
  tree_delete(d);
  return NULL;
}

size_t dict_size(dict const* d) {
  // if null it means no size, else calculate size with recursion 
  if (d == NULL) return 0;
  return tree_size(d);
}

dict* dict_insert(dict * d, dict_key* const k, dict_value* const v) {
  // i use tree insert key value method
  return tree_bst_insert(d, k, v);
}

bool dict_search(dict * d, dict_key* const k, dict_value *v) {
  // i use tree search method it finds with key if value is same its true 
  dict_value *res = tree_bst_search(d, k);
  if (res) {
    if (v) *v = *res;
    return true;
  }
  return false;
}

dict* dict_remove(dict * d, dict_key* const k) {
  // i use tree delete method
  return tree_bst_delete(d, k);
}
