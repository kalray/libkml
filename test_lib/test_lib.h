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
#ifndef __TEST_LIB_H__
#define __TEST_LIB_H__
#include <stdint.h>



/** comparison between floating point result,
 * considers two NaNs to be equal */
int fp32_compare(float expected, float result);

int fp64_compare(double expected, double result);


/** test if <result> matches the faitthful rounding of <expected> */
int fp32_is_faithful(float expected_rd, float expected_ru, float result);

int fp64_is_faithful(double expected_rd, double expected_ru, double result);

/** test if <result> matches the correctly rounded <expected> */
int fp32_is_cr(float expected_cr, float result);

int fp64_is_cr(double expected_cr, double result);


typedef enum {
    tb_round_nearest     = 0,
    tb_round_up          = 1,
    tb_round_down        = 2,
    tb_round_toward_zero = 3
} tb_round_mode_t;

void set_rounding_mode(tb_round_mode_t rnd_mode);



/*
typedef struct {
    uint32_t value;
    uint32_t faithful_value;
    int ev;
    int errno_f;
    int errtype;
    int matherr_call;
} test_result_t;

typedef struct {
    uint32_t value;
    uint32_t rnd_mode;
} test_input_t;

typedef struct {
        test_input_t input;
        uint32_t cr_value;
        test_result_t result_up, result_down;
} test_faithful_t;*/




#endif
