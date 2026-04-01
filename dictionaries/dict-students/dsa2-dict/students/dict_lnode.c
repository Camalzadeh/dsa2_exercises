#include <stdint.h>
#include <stdlib.h>
#include "lnode.h"  

/**
 ** @file
 ** @brief implementation for dict.h with simple lists
 **/

/**
 ** @brief Interface for dictionary.
 **
 ** In this implementation the dictionary is just defined by simple
 ** text replacement to be an ::lnode.
 **/
#define dict lnode

#include "dict.h"

dict* dict_create(void) {
  return lnode_create();
}

dict* dict_delete(dict* d) {
  return lnode_delete(d);
}

size_t dict_size(dict const* d) {
  return lnode_size(d, SIZE_MAX);
}

dict* dict_insert(dict * d, dict_key* const k, dict_value* const v) {
  dict_value old_v;
  lnode *found = lnode_find(d, k, &old_v);
  if (found) {
    d = lnode_remove(d, k);
  }
  return lnode_push(d, k, v);
}

bool dict_search(dict * d, dict_key* const k, dict_value *v) {
  return lnode_find(d, k, v) != NULL;
}

dict* dict_remove(dict * d, dict_key* const k) {
  return lnode_remove(d, k);
}
