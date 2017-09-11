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
#include <support_lib/ml_types.h>


float fast_nearbyintf(float v) {
    uif_conv_t x = {.f = v};
    uint32_t exp = (x.u >> 23) & 0xff;
    uint32_t sign = x.u & 0x80000000u;
    uint32_t round_cst = 1 << (22 - (exp - 127));
    uint32_t mask = 0xffffffffu << (22 - (exp - 127) + 1);
    mask |= 0xff800000;
    uint32_t pre_result = exp == 126 ? (sign | 0x3f800000u) : 0x0;

    uif_conv_t round_x = {.u = exp >= 127 ? (x.u + round_cst) & mask : pre_result};

    return round_x.f;
}
