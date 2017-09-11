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
#include <support_lib/ml_utils.h>
#include <support_lib/ml_types.h>

/*uint32_t float_to_32b_encoding(float v) {
    uif_conv_t conv_tmp;
    conv_tmp.f = v;
    return conv_tmp.u;
}


float float_from_32b_encoding(uint32_t v) {
    uif_conv_t conv_tmp;
    conv_tmp.u = v;
    return conv_tmp.f;
}*/

/*int ml_isnanf(float v) {
    uif_conv_t conv_tmp;
    conv_tmp.f = v;
    int exp1     = (conv_tmp.u & 0x7f800000u) == 0x7f800000u;
    int not0mant = (conv_tmp.u & 0x007fffffu) != 0;
    return (exp1 && not0mant);
}*/
