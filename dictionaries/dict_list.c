#include <stdlib.h>
#include "list.h"  

#define dict list

#include "dict.h"

dict* dict_create(void) {
  // i just create an empty list
  return list_create();
}

dict* dict_delete(dict* d) {
  // i just delete the list
  return list_delete(d);
}

size_t dict_size(dict const* d) {
  // i just get the size from list
  return list_size(d);
}

dict* dict_insert(dict * d, dict_key* const k, dict_value* const v) {
  // i just delete from list if exist then add to given place
  dict_value old_v;
  if (list_find(d, k, &old_v)) {
    d = list_remove(d, k);
  }
  return list_push(d, k, v);
}

bool dict_search(dict * d, dict_key* const k, dict_value *v) {
  // i just use search in list method
  return list_find(d, k, v);
}

dict* dict_remove(dict * d, dict_key* const k) {
  // i just use remove list method
  return list_remove(d, k);
}
