#ifndef VECTOR_H
#define VECTOR_H

#include "constants.h"

typedef struct Vector {

  u32 len;
  u32 capacity;

  i32 *buffer;

} Vector;

Vector vlib_vec_alloc();


#endif
