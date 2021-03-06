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
#ifndef RTL_RUN
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <inttypes.h>
#else
#include <stdint.h>
#include <HAL/hal/hal.h>
#endif
/* perf measure for x86 targets */
#ifndef __K1__
#include <cycle.h>
#endif

#include <test_lib.h>
#include <support_lib/ml_utils.h>

/* Test INDEX SELECTION */
#ifndef TEST_START
#define TEST_START 0 
#endif /* TEST_START */
#ifndef TEST_END
#define TEST_END 0
#endif /* TEST_END */
    #define DISABLE_EV
/* cycle counting disabled */
#ifdef COUNT_CYCLE
#ifdef __K1__
#include <HAL/hal/core/diagnostic.h>
#endif
#endif

#ifdef __K1__
//#include <cpu.h>
#endif
typedef struct {
    uint64_t value;
    uint64_t faithful_value;
    int ev;
    int errno_f;
    int errtype;
    int matherr_call;
} test_result_t;

typedef struct {
    uint64_t value_0;
    tb_round_mode_t rnd_mode;
} test_input_t;

typedef struct {
    test_input_t input;
    uint64_t cr_value;
    test_result_t result_up, result_down;
} test_faithful_t;


typedef struct {
    int lib_mode_f;
    int errno_check;
    int matherr_check;
    int faithful_check;
} test_mode_t; 

#define _KML_ 17

#ifndef RTL_RUN
test_mode_t lib_mode[5] = {
    {.lib_mode_f = _IEEE_, .matherr_check = 0, .errno_check = 0, .faithful_check = 0}, 
    {.lib_mode_f = _POSIX_, .matherr_check = 0, .errno_check = 1, .faithful_check = 0}, 
    {.lib_mode_f = _XOPEN_, .matherr_check = 1, .errno_check = 1, .faithful_check = 0},
    {.lib_mode_f = _SVID_, .matherr_check = 1, .errno_check = 1, .faithful_check = 0},
    {.lib_mode_f = _KML_, .matherr_check = 0, .errno_check = 0, .faithful_check = 0}
};
#endif /* RTL_RUN */


extern test_faithful_t test_array[NUM_TEST];
double result_array[NUM_TEST]; 
uint32_t exception_array[NUM_TEST]; 


    
// function to test
double TEST_FUNCTION(double);

     
int matherr_call_expected = 0;
int matherr_type_expected = -1;
int matherr_err_expected = -1;
char* matherr_name_expected = "TEST_FUNCTION";


#ifndef TEST_MODES
#define TEST_MODES {1, 0, 0, 0}
#endif
int test_mode_enable[4] = TEST_MODES;

int main(void) {
    int i, test_mode_id;
    #ifndef RTL_RUN
    _LIB_VERSION = _IEEE_;
    #endif /* RTL_RUN */

    #ifdef COUNT_CYCLE
    #ifdef __K1__
    // enabling counters
    __k1_counter_enable(0, _K1_CYCLE_COUNT, 0);
    #else
    ticks start_tick = getticks();
    #endif
    for (i = TEST_START; i <= TEST_END; i++) {
        //set_rounding_mode(test_array[i].input.rnd_mode);
        double input_0 = double_from_64b_encoding(test_array[i].input.value_0);

        result_array[i] = TEST_FUNCTION(input_0);
    };
    #ifdef __K1__
    int cycle_count = __k1_counter_num(0);
    printf("PERF MONITORING: %d cycles for %d inputs: %.2lf CPE\n", cycle_count, TEST_END - TEST_START + 1, cycle_count / (double) (TEST_END - TEST_START + 1));
    #else /* x86 perf summary */
    ticks stop_tick = getticks();
    double elapsed_time = elapsed(stop_tick, start_tick);
    printf("PERF MONITORING: %f time_units for %d inputs: %.2lf CPE\n", elapsed_time, TEST_END - TEST_START + 1, elapsed_time / (double) (TEST_END - TEST_START + 1));
    #endif /* __K1__ */
    #else  /* nodef COUNT_CYCLE */
    printf("PERF MONITORING[DISABLED]: %d cycles for %d inputs: %.2lf CPE\n", 0, TEST_END - TEST_START + 1, 0 / (double) (TEST_END - TEST_START + 1));
    #endif /* ifdef COUNT_CYCLE */

    #ifdef PERF_TEST
    for (i = TEST_START; i <= TEST_END; i++) {
        set_rounding_mode(test_array[i].input.rnd_mode);
        double input_0 = double_from_64b_encoding(test_array[i].input.value_0);

        result_array[i] = TEST_FUNCTION(input_0);
    };
    #endif /** PERF_TEST */
    
    #ifndef RTL_RUN
    printf("	_IEEE_: %d\n	_POSIX: %d\n	_XOPEN_: %d\n	_SVID_: %d\n", _IEEE_, _POSIX_, _XOPEN_, _SVID_);
    for (test_mode_id = 0; test_mode_id < 4; test_mode_id++) { 
        if (!test_mode_enable[test_mode_id]) break;
    #else
    {
    #endif
        #ifndef RTL_RUN
        test_mode_t test_mode = lib_mode[test_mode_id];
        printf("TEST_MODE: %d\n", test_mode.lib_mode_f);
        #endif /* RTL_RUN */

        for (i = TEST_START; i <= TEST_END; i++) {
            double input_0 = double_from_64b_encoding(test_array[i].input.value_0);

            #ifdef PERF_TEST
            double result = result_array[i];
            #else /* !PERF_TEST */
            #ifndef RTL_RUN
            errno = -1;
            matherr_call_expected = 0;
            _LIB_VERSION = test_mode.lib_mode_f; // setting LIB MODE
            #endif /* RTL_RUN */
            set_rounding_mode(test_array[i].input.rnd_mode);

            #ifdef __K1__
            __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
            #endif /* __K1__ */
            double result = TEST_FUNCTION(input_0);
#   ifndef DISABLE_EV
#       ifdef __K1__
            int fpu_ev = __k1_fpu_get_exceptions() >> 1; 
#       else
            int fpu_ev = 0; 
#       endif /* __K1__ */
#    endif /* DISABLE_EV */

            #endif /*PERF_TEST */



            #ifdef KML_MODE
            double expected_rd = double_from_64b_encoding(test_array[i].result_down.faithful_value);
            double expected_ru = double_from_64b_encoding(test_array[i].result_up.faithful_value);

            #else /* ! KML_MODE */
            double expected_rd = double_from_64b_encoding(test_array[i].result_down.value);
            double expected_ru = double_from_64b_encoding(test_array[i].result_up.value);
            #endif


                if (!fp64_is_faithful(expected_rd, expected_ru, result)) {
        #ifndef RTL_RUN
            printf("result error for test %d\n for TEST_FUNCTION(%f/%"PRIx64"), expected %"PRIx64" or %"PRIx64" got %"PRIx64"\n", i, input_0, double_to_64b_encoding(input_0), double_to_64b_encoding(expected_rd), double_to_64b_encoding(expected_ru), double_to_64b_encoding(result));
#endif /*RTL_RUN*/

                return 1;
            } else {
                #ifndef PERF_TEST
                test_result_t comp_result;

                /** selecting comparison result */
                if (expected_rd == result) comp_result = test_array[i].result_down;
                else if (expected_ru == result) comp_result = test_array[i].result_up;
                else {
                    /** NaN cases */
                    if (ml_is_nan(expected_rd)) comp_result = test_array[i].result_down;
    
                    else {
                    #ifndef RTL_RUN
            printf("result error for test %d\n result do not match ru or rd: for TEST_FUNCTION(%f/%"PRIx64"), expected %"PRIx64" or %"PRIx64" for %"PRIx64"\n", i, input_0, double_to_64b_encoding(input_0), double_to_64b_encoding(expected_rd), double_to_64b_encoding(expected_ru), double_to_64b_encoding(result));
#endif /* RTL_RUN */ 

                        return 1;
                    }
                }

                #ifndef DISABLE_EV
                if (fpu_ev != comp_result.ev) { 
                    /** exception comparison */
    #ifndef RTL_RUN
         printf(" exception error for test %d\n for TEST_FUNCTION(%f/%"PRIx64"), expected ev = 0x%x, got 0x%x\n", i, input_0, double_to_64b_encoding(input_0), comp_result.ev, fpu_ev);
#endif /* RTL_RUN */
 
                    return 1;
                }; 
                #endif /* DISABLE_EV */
                #ifndef RTL_RUN
                #ifndef KML_MODE
                /** testing errno */
                if (test_mode.errno_check) { 
                    if (comp_result.errno_f != errno) {
                        /** exception comparison */
             printf(" errno error for test %d\n for TEST_FUNCTION(%f/%"PRIx64"), expected errno=0x%d, got 0x%d\n", i, input_0, double_to_64b_encoding(input_0), comp_result.errno_f, errno);

                        return 1;
                    }
                } else if (errno != -1) {
                    printf("errno error for test %d \n", i);
                    int errno_cp = errno;
             printf(" for TEST_FUNCTION(%f/%"PRIx64"), unexpected modification of errno(-1) -> 0x%d\n", input_0, double_to_64b_encoding(input_0), errno_cp);

                    return 1;
                };
                /** testing mathcall */
                if (test_mode.matherr_check) {
                    if (comp_result.matherr_call != matherr_call_expected) {
                        /** exception comparison */
             printf(" matherr call error for test %d\n for TEST_FUNCTION(%f/%"PRIx64"), expected matherr_call=0x%d, got 0x%d\n", i, input_0, double_to_64b_encoding(input_0), comp_result.matherr_call, matherr_call_expected);

                        return 1;
                    };
                    if (matherr_call_expected) {
                        /** matherr errno and type checking */
                        if (comp_result.errno_f != matherr_err_expected) {
                            printf("exception->err error for test %d\n", i);
                            printf("ERROR: e->err=%d was expected, got %d\n", comp_result.errno_f, matherr_err_expected);
                            return 1;
                        };
                        if (comp_result.errtype != matherr_type_expected) {
                            printf("exception->type error for test %d\n", i);
                            printf("ERROR: e->type=%d was expected, got %d\n", comp_result.errtype, matherr_type_expected);
                            return 1;
                        };
                    }
                } else if (matherr_call_expected != 0) {
                 printf(" matherr call error for test %d\n for TEST_FUNCTION(%f/%"PRIx64"), expected matherr_call=0x%d, got 0x%d\n", i, input_0, double_to_64b_encoding(input_0), comp_result.matherr_call, matherr_call_expected);

                }
                #endif /* !KML_MODE */
                #endif /* RTL_RUN */
                #endif /* PERF_TEST */ 

            };
        };
    };
    return 0;
};
