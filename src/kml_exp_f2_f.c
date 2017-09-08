/*
 * Copyright (C) 2008-2017 Kalray SA.
 *
 * All rights reserved.
 */

/** function generated using metalibm git log:
 commit a581a29298c90d93f4952385c0982c9815d7cec0
Author: Nicolas Brunie <nicolas.brunie@kalray.eu>
Date:   Fri Apr 4 17:15:05 2014 +0200

    fixing parameter and K1A description for exp fp32 generation + improving test suite 
**/
#include <support_lib/ml_types.h>
#include <support_lib/ml_special_values.h>
#include <support_lib/ml_utils.h>
#include <support_lib/ml_libm_compatibility.h>
#include <math.h>
#include <inttypes.h>

float kml_exp_f2_f(float x){
    float tmp;
    int32_t nan_or_inf;
    float k;
    float poly;
    float tmp10;
    float unround_k;
    float r;
    float tmp9;
    int32_t tmp8;
    float tmp5;
    float tmp4;
    float tmp7;
    float tmp6;
    float tmp1;
    int32_t carg;
    float tmp3;
    float tmp2;
    
    unround_k = __builtin_k1_fmulrn(x, 0x1.715476p0f);
    carg = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, unround_k, 0);
    k = __builtin_k1_float(_K1_FPU_NEAREST_EVEN, carg, 0);
    tmp = __builtin_k1_fmulrn(k, 0xb.172p-4f);
    tmp1 = __builtin_k1_fsbfrn(tmp, x);
    tmp2 = __builtin_k1_fmulrn(k, 0x1.7f7d1cp-20f);
    r = __builtin_k1_fsbfrn(tmp2, tmp1);
    tmp3 = __builtin_k1_ffmarn(0x2.247a04p-8f, r, 0x5.b560fp-12f);
    tmp4 = __builtin_k1_ffmarn(0xa.aaa6fp-8f, r, tmp3);
    tmp5 = __builtin_k1_ffmarn(0x2.aaa918p-4f, r, tmp4);
    tmp6 = __builtin_k1_ffmarn(0x8.p-4f, r, tmp5);
    tmp7 = __builtin_k1_ffmarn(0x1.p0f, r, tmp6);
    poly = __builtin_k1_ffmarn(0x1.p0f, r, tmp7);
    tmp8 = k;
    tmp9 = ml_exp_insertion_fp32(tmp8);
    tmp10 = __builtin_k1_fmulrn(poly, tmp9);
    nan_or_inf = ml_is_nan_or_inff(x);
    
    if (__builtin_expect(nan_or_inf, 0)) {
        int32_t is_nan_test;
        
        __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
        is_nan_test = ml_is_nanf(x);
        
        if (is_nan_test) {
            int32_t is_signaling_nan;
            
            is_signaling_nan = ml_is_signaling_nanf(x);
            
            if (is_signaling_nan) {
                __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
                return fp32_sv_QNaN.f;
            } else {
                return fp32_sv_QNaN.f;
            }
        } else {
            int32_t inf_sign;
            
            inf_sign = x >= 0.0f;
            
            if (inf_sign) {
                return fp32_sv_PlusInfty.f;
            } else {
                return fp32_sv_PlusZero.f;
            }
        }
    } else {
        int32_t tmp0;
        
        tmp0 = x > 89.0f;
        
        if (__builtin_expect(tmp0, 0)) {
            __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
            __k1_fpu_raise_exceptions((_K1_FPU_INEXACT | _K1_FPU_OVERFLOW));
            return fp32_sv_PlusInfty.f;
        } else {
            int32_t tmp11;
            
            tmp11 = x < -104.0f;
            
            if (__builtin_expect(tmp11, 0)) {
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                __k1_fpu_raise_exceptions((_K1_FPU_INEXACT | _K1_FPU_UNDERFLOW));
                return fp32_sv_PlusZero.f;
            } else {
                int32_t tmp12;
                
                tmp12 = k > 127.0f;
                
                if (__builtin_expect(tmp12, 0)) {
                    float late_overflow_result;
                    int32_t tmp18;
                    float tmp15;
                    int32_t tmp14;
                    float tmp17;
                    float tmp16;
                    float tmp13;
                    
                    tmp13 = __builtin_k1_fsbfrn(127.0f, k);
                    tmp14 = tmp13;
                    tmp15 = ml_exp_insertion_fp32(tmp14);
                    tmp16 = __builtin_k1_fmulrn(tmp15, poly);
                    tmp17 = ml_exp_insertion_fp32(127);
                    late_overflow_result = tmp16 * tmp17;
                    tmp18 = ml_is_inff(late_overflow_result);
                    
                    if (__builtin_expect(tmp18, 0)) {
                        __k1_fpu_raise_exceptions(_K1_FPU_OVERFLOW);
                        return fp32_sv_PlusInfty.f;
                    } else {
                        return late_overflow_result;
                    }
                } else {
                    float late_underflow_result;
                    int32_t ik;
                    float tmp15;
                    float tmp14;
                    int32_t tmp17;
                    float tmp16;
                    int32_t tmp13;
                    
                    ik = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, unround_k, 0);
                    tmp13 = ik + 50;
                    tmp14 = ml_exp_insertion_fp32(tmp13);
                    tmp15 = __builtin_k1_fmulrn(tmp14, poly);
                    tmp16 = ml_exp_insertion_fp32(-50);
                    late_underflow_result = tmp15 * tmp16;
                    tmp17 = k <= -126.0f;
                    
                    if (__builtin_expect(tmp17, 0)) {
                        int32_t tmp18;
                        
                        tmp18 = ml_is_subnormalf(late_underflow_result);
                        
                        if (tmp18) {
                            __k1_fpu_raise_exceptions(_K1_FPU_UNDERFLOW);
                            return late_underflow_result;
                        }
                        return late_underflow_result;
                    } else {
                        return tmp10;
                    }
                }
            }
        }
    }
}
