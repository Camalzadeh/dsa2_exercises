#include <stdlib.h>
#include "bstree.h"  

/**
 ** @file
 ** @brief implementation for dict.h with Binary Search Tree
 **/

#define dict node

#include "dict.h"

dict* dict_create(void) {
  return node_create(NULL, NULL);
}

dict* dict_delete(dict* d) {
  tree_delete(d);
  return NULL;
}

size_t dict_size(dict const* d) {
  if (d == NULL) return 0;
  // Note: an empty tree wrapper initialized with node_create(NULL, NULL) will report size 1.
  // We can't access node->k since it's an opaque type, so we return the tree_size directly.
  return tree_size(d);
}

dict* dict_insert(dict * d, dict_key* const k, dict_value* const v) {
  return tree_bst_insert(d, k, v);
}

bool dict_search(dict * d, dict_key* const k, dict_value *v) {
  dict_value *res = tree_bst_search(d, k);
  if (res) {
    if (v) *v = *res;
    return true;
  }
  return false;
}

dict* dict_remove(dict * d, dict_key* const k) {
  return tree_bst_delete(d, k);
}
