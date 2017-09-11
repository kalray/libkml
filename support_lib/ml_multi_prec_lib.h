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
#ifndef ML_MULTI_PREC_LIB
#define ML_MULTI_PREC_LIB

#include <stdint.h>
#include <support_lib/ml_types.h>


ml_dd_t ml_split_dd_d(double x);


ml_dd_t ml_mult_dd_d2(double x, double y);


ml_dd_t ml_add_dd_d2(double x, double y);


ml_dd_t ml_add_dd_d2_fast(double x, double y);


ml_dd_t ml_add_dd_d_dd(double x, ml_dd_t y);


double ml_fma(double x, double y, double z); 

ml_dd_t ml_fma_dd_d3(double x, double y, double z); 

/** assuming result exponent is exp(x) + scale_factor
 *  round field(x) accounting for subnormal cases */
double ml_subnormalize_d_dd_i(ml_dd_t x, int scale_factor);



#endif /* def ML_MULTI_PREC_LIB */
