/*
 * MIT License
 *
 * Copyright (c) 2016-2017 Kalray
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <stdint.h>

#ifndef __ML_TYPES_H__
#define __ML_TYPES_H__




/** conversion union for bitfield/binary32 cast */
typedef union {
    uint32_t u;
    int32_t i;
    float f;
} uif_conv_t;

/** conversion union for bitfield/binary64 cast */
typedef union {
    uint64_t u;
    int64_t i;
    double d;
} uid_conv_t;

typedef struct {
    double hi;
    double lo;
} ml_dd_t;

typedef struct {
    double hi;
    double me;
    double lo;
} ml_td_t;



#endif /** __ML_TYPES_H__ */
