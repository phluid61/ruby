#ifndef __TIMSORT_H__
#define __TIMSORT_H__ 1

typedef int (cmpfunc_t)(const void*, const void*, void*);
void ruby_timsort(void *, const size_t, const size_t, cmpfunc_t *, void *);

#endif
