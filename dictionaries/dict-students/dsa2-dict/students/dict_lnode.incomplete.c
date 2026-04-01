#include <stdint.h>
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
  // complete
}

dict* dict_delete(dict* d) {
  // complete
}

size_t dict_size(dict const* d) {
  // complete
}


dict* dict_insert(dict * d, dict_key const* c, dict_value const *v) {
  // complete
}

bool dict_search(dict * d, dict_key const *c, dict_value *v) {
  // complete
}

dict* dict_remove(dict * d, dict_key const* c) {
  // complete
}
