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
#include "ml_types.h"

#ifndef __ML_SPECIAL_VALUES_H__
#define __ML_SPECIAL_VALUES_H__



/** binary32 special values */
static const uif_conv_t fp32_sv_PlusInfty  = {.u = 0x7f800000};
static const uif_conv_t fp32_sv_MinusInfty = {.u = 0xff800000};
static const uif_conv_t fp32_sv_PlusOmega  = {.u = 0x7f7fffff};
static const uif_conv_t fp32_sv_MinusOmega = {.u = 0xff7fffff};
static const uif_conv_t fp32_sv_PlusZero   = {.u = 0x00000000};
static const uif_conv_t fp32_sv_MinusZero  = {.u = 0x80000000};
static const uif_conv_t fp32_sv_QNaN       = {.u = 0xffffffff};
static const uif_conv_t fp32_sv_SNaN       = {.u = 0xffbfffff};


/** binary64 special values */
static const uid_conv_t fp64_sv_PlusInfty  = {.u = 0x7ff0000000000000ull};
static const uid_conv_t fp64_sv_MinusInfty = {.u = 0xfff0000000000000ull};
static const uid_conv_t fp64_sv_PlusOmega  = {.u = 0x7fefffffffffffffull};
static const uid_conv_t fp64_sv_MinusOmega = {.u = 0xffefffffffffffffull};
static const uid_conv_t fp64_sv_PlusZero   = {.u = 0x0000000000000000ull};
static const uid_conv_t fp64_sv_MinusZero  = {.u = 0x8000000000000000ull};
static const uid_conv_t fp64_sv_QNaN       = {.u = 0xffffffffffffffffull};
static const uid_conv_t fp64_sv_SNaN       = {.u = 0xfff7ffffffffffffull};


#endif /** __ML_SPECIAL_VALUES_H__ */
