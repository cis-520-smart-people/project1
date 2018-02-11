#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define fp_t int
#define FRACTION (1 << 14)

#define ADDINT(x, n) (x) + (n) * (FRACTION)
#define GETFP(x) (x) * (FRACTION)
#define ROUNDFP(x) ((x) >= 0 ? ((x) + (FRACTION) / 2) / (FRACTION) : ((x) - (FRACTION) / 2) / (FRACTION))
#define MULTFP(x, y) ((int64_t)(x)) * (y) / (FRACTION)
#define DIVFP(x, y) ((int64_t)(x)) * (FRACTION) / (y)
#endif
