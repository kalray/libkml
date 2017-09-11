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
/**
 * generated using metalibm 0.1 
 *  sha1 git: a9c32dda8a01eb1ef3c3441995e32447456f0dd6 
 * 
 * polynomial degree  for  exp(x): 11
 * sollya polynomial  for  exp(x): -0x4.p-60 * _x_^0 + _x_ + 0x8.0000000000088p-4 * _x_^0x2.p0 + 0x2.aaaaaaaaaaabcp-4 * _x_^0x3.p0 + 0xa.aaaaaaaa77dd8p-8 * _x_^0x4.p0 + 0x2.222222221c2e8p-8 * _x_^0x5.p0 + 0x5.b05b062081f18p-12 * _x_^0x6.p0 + 0xd.00d00dba26df8p-16 * _x_^0x7.p0 + 0x1.a019916618836p-16 * _x_^0x8.p0 + 0x2.e3bbcf23cf18ep-20 * _x_^0x9.p0 + 0x4.a2d0df2079714p-24 * _x_^0xa.p0 + 0x6.bde65ab042f3p-28 * _x_^0xb.p0
 * polynomial approximation error: 0x4.p-60
 * polynomial evaluation    error: 0xd.f1240289ac54c7p-56
**/
#include <HAL/hal/core/cpu.h>
#include <support_lib/ml_utils.h>
#include <support_lib/ml_special_values.h>



double kml_exp_d2_f(double x){
    double poly;
    int32_t ik;
    double tmp9;
    double tmp8;
    double exact_lo;
    double tmp5;
    double tmp4;
    double tmp7;
    double tmp6;
    double tmp1;
    double exact_hi;
    double tmp3;
    double tmp2;
    double tmp;
    double unround_k;
    double std_result;
    double tmp20;
    double tmp21;
    double tmp22;
    double tmp23;
    double r3_;
    double r5_;
    double r4_;
    double tmp24;
    double exp_ik;
    double pre_sub_poly;
    int64_t carg;
    int32_t nan_or_inf;
    double k;
    double r2_;
    double r;
    double tmp19;
    double tmp18;
    double tmp15;
    double tmp14;
    double tmp17;
    double tmp16;
    double tmp11;
    double tmp10;
    double tmp13;
    double tmp12;
    
    unround_k = x * 0x1.71547652b82fep0;
    carg = __builtin_k1_fixedd(_K1_FPU_NEAREST_EVEN, unround_k, 0);
    k = __builtin_k1_floatd(_K1_FPU_NEAREST_EVEN, carg, 0);
    exact_hi = __builtin_k1_ffmsd(x, k, 0xb.17217f7d2p-4);
    tmp =  - k;
    exact_lo = tmp * -0x3.08654361c4c68p-44;
    r = exact_hi + exact_lo;
    r2_ = r * r;
    tmp1 = 0x8.0000000000088p-4 * r2_;
    tmp2 = 0x2.aaaaaaaaaaabcp-4 * r2_;
    tmp3 = r * tmp2;
    tmp4 = tmp1 + tmp3;
    tmp5 = 0xa.aaaaaaaa77dd8p-8 * r2_;
    tmp6 = __builtin_k1_ffmad(tmp4, r2_, tmp5);
    tmp7 = 0x2.222222221c2e8p-8 * r2_;
    tmp8 = 0x5.b05b062081f18p-12 * r2_;
    tmp9 = r * tmp8;
    tmp10 = tmp7 + tmp9;
    r3_ = r * r2_;
    tmp11 = __builtin_k1_ffmad(tmp6, r3_, tmp10);
    tmp12 = 0xd.00d00dba26df8p-16 * r2_;
    tmp13 = 0x1.a019916618836p-16 * r2_;
    tmp14 = r * tmp13;
    tmp15 = tmp12 + tmp14;
    tmp16 = 0x2.e3bbcf23cf18ep-20 * r2_;
    tmp17 = __builtin_k1_ffmad(tmp15, r2_, tmp16);
    tmp18 = 0x4.a2d0df2079714p-24 * r2_;
    tmp19 = 0x6.bde65ab042f3p-28 * r2_;
    tmp20 = r * tmp19;
    tmp21 = tmp18 + tmp20;
    tmp22 = __builtin_k1_ffmad(tmp17, r3_, tmp21);
    r4_ = r2_ * r2_;
    r5_ = r * r4_;
    pre_sub_poly = __builtin_k1_ffmad(tmp11, r5_, tmp22);
    tmp23 = exact_lo + pre_sub_poly;
    tmp24 = exact_hi + tmp23;
    poly = 1.0 + tmp24;
    ik = __builtin_k1_fixedd(_K1_FPU_NEAREST_EVEN, unround_k, 0);
    exp_ik = ml_exp_insertion_fp64(ik);
    std_result = exp_ik * poly;
    nan_or_inf = ml_is_nan_or_inf(x);
    
    if (__builtin_expect(nan_or_inf, 0)) {
        int32_t is_nan_test;
        
        __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
        is_nan_test = ml_is_nan(x);
        
        if (is_nan_test) {
            int32_t is_signaling_nan;
            
            is_signaling_nan = ml_is_signaling_nan(x);
            
            if (is_signaling_nan) {
                __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
                return fp64_sv_QNaN.d;
            } else {
                return fp64_sv_QNaN.d;
            }
        } else {
            int32_t inf_sign;
            
            inf_sign = x >= 0.0;
            
            if (inf_sign) {
                return fp64_sv_PlusInfty.d;
            } else {
                return fp64_sv_PlusZero.d;
            }
        }
    } else {
        int32_t tmp0;
        
        tmp0 = x > 0x2.c6p8;
        
        if (__builtin_expect(tmp0, 0)) {
            __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
            __k1_fpu_raise_exceptions((_K1_FPU_INEXACT | _K1_FPU_OVERFLOW));
            return fp64_sv_PlusInfty.d;
        } else {
            int32_t tmp25;
            
            tmp25 = x < -0x2.eap8;
            
            if (__builtin_expect(tmp25, 0)) {
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                __k1_fpu_raise_exceptions((_K1_FPU_INEXACT | _K1_FPU_UNDERFLOW));
                return fp64_sv_PlusZero.d;
            } else {
                int32_t late_overflow_test;
                
                late_overflow_test = ik > 1023;
                
                if (__builtin_expect(late_overflow_test, 0)) {
                    double tmp26;
                    double tmp27;
                    double tmp28;
                    int32_t tmp29;
                    double late_overflow_result;
                    int32_t diff_k;
                    
                    diff_k = ik - 997;
                    tmp26 = ml_exp_insertion_fp64(diff_k);
                    tmp27 = tmp26 * poly;
                    tmp28 = ml_exp_insertion_fp64(997);
                    late_overflow_result = tmp27 * tmp28;
                    tmp29 = ml_is_inf(late_overflow_result);
                    
                    if (__builtin_expect(tmp29, 0)) {
                        __k1_fpu_raise_exceptions(_K1_FPU_OVERFLOW);
                        return fp64_sv_PlusInfty.d;
                    } else {
                        return late_overflow_result;
                    }
                } else {
                    int32_t tmp26;
                    double tmp27;
                    double tmp28;
                    double late_underflow_result;
                    double tmp29;
                    int32_t tmp30;
                    
                    tmp26 = ik + 104;
                    tmp27 = ml_exp_insertion_fp64(tmp26);
                    tmp28 = tmp27 * poly;
                    tmp29 = ml_exp_insertion_fp64(-104);
                    late_underflow_result = tmp28 * tmp29;
                    tmp30 = k <= -1022.0;
                    
                    if (__builtin_expect(tmp30, 0)) {
                        int32_t tmp31;
                        
                        tmp31 = ml_is_subnormal(late_underflow_result);
                        
                        if (tmp31) {
                            __k1_fpu_raise_exceptions(_K1_FPU_UNDERFLOW);
                            return late_underflow_result;
                        }
                        return late_underflow_result;
                    } else {
                        return std_result;
                    }
                }
            }
        }
    }
}
