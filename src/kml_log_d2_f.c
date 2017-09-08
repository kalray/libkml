/*
 * Copyright (C) 2008-2017 Kalray SA.
 *
 * All rights reserved.
 */

/**
 * generated using metalibm 0.1 
 *  sha1 git: a9c32dda8a01eb1ef3c3441995e32447456f0dd6 
 * 
**/

#include <support_lib/ml_utils.h>
#include <support_lib/ml_special_values.h>
#include <math.h>
#include <stdio.h>
#include <inttypes.h>


double ml_k1_k1b_log2d_inv_table[128][2]  = {
  {0.0, 0.0},
  {-0x3.0489147114p-8, -0x5.54412c584dfc4p-52},
  {-0x5.0caa4966p-8, -0x3.30273250c6ffcp-48},
  {-0x6.d730962dc8p-8, 0x1.c67b91d41006p-48},
  {-0x8.e72d315e2p-8, 0x5.6338727206678p-48},
  {-0xa.b8ae2601ep-8, -0x7.7772203b89d8p-48},
  {-0xc.8d839f7ecp-8, 0x6.75f14fddb2a58p-48},
  {-0xe.a976b202fp-8, 0x3.c85d2a29bbd66p-48},
  {-0x1.08598b59e4p-4, 0x5.f9775c02640bp-48},
  {-0x1.26536c3d8cp-4, -0x3.6975812f8b746p-48},
  {-0x1.4485e03dbep-4, 0x5.2b9172d95491p-52},
  {-0x1.5e95a4d97ap-4, 0xe.34831e2e8e8fp-48},
  {-0x1.7d33687c2ap-4, 0xc.3773c18f98fap-48},
  {-0x1.9c0c32d4d2p-4, -0x5.483f617c79984p-48},
  {-0x1.b6ac88dad6p-4, 0x4.e4200afdda394p-48},
  {-0x1.d5f5565922p-4, 0xf.1dc633e7ab968p-48},
  {-0x1.f0f70cdd9ap-4, 0xd.1ce093d8d3e2p-48},
  {-0x2.0c26a6a9a8p-4, -0x1.6304628340ee9p-44},
  {-0x2.2784c0b874p-4, 0xe.7afeeca7b2848p-48},
  {-0x2.4311fb301p-4, 0x1.b3a1e7f50c701p-44},
  {-0x2.5ecef9778p-4, -0x1.52b302160f40dp-44},
  {-0x2.7abc624d78p-4, -0x4.fecbe1425b12cp-48},
  {-0x2.96dadfdfc4p-4, -0x5.48bb3d5b9e548p-48},
  {-0x2.b32b1fe3acp-4, 0x1.a1d059769ca05p-44},
  {-0x2.cfadd3af0cp-4, 0x1.11e8830a706d3p-44},
  {-0x2.e79720e9fcp-4, 0x1.d66a90d0005a6p-44},
  {-0x3.04782caa34p-4, -0x7.8376e698c7a0cp-48},
  {-0x3.1cb11d7584p-4, -0x1.b7d5cab2d114p-44},
  {-0x3.350ef1bd74p-4, -0x1.470fa3efec39p-44},
  {-0x3.527da7915cp-4, 0xc.3921a82b10b48p-48},
  {-0x3.6b2e344274p-4, -0x1.9b50e83aa91dfp-44},
  {-0x3.84051563p-4, 0xc.970772ae3d63p-48},
  {-0x3.9d02c2afe4p-4, 0xc.f055d104ca8a8p-48},
  {-0x3.b627b61a9p-4, -0x1.2806a847527e6p-44},
  {-0x3.cf746bd6fp-4, 0x3.abddc46f26c92p-48},
  {-0x3.e8e96269cp-4, 0x1.bae49f1df7b5ep-44},
  {-0x4.02871ab768p-4, -0x1.1cd8d688b9e18p-44},
  {-0x4.1c4e181358p-4, 0x1.e76324e912b17p-44},
  {-0x4.363ee04fbp-4, 0x3.845cdde2b0172p-44},
  {-0x4.4b1df3402p-4, 0x3.b135add7b821ap-44},
  {-0x4.655b4ee6fp-4, -0xb.e97b9d68d50ap-48},
  {-0x4.7fc3f9f3dp-4, -0x1.e9d5b513ff0c1p-44},
  {-0x4.9504125398p-4, 0x2.4e2853f10880ep-44},
  {-0x4.afbc1f3728p-4, 0x3.2b182dad7fd86p-44},
  {-0x4.c53c7874d8p-4, 0xc.713d69909e5cp-48},
  {-0x4.e045ca159p-4, -0x3.2c70db62fc7eap-44},
  {-0x4.f607ed6518p-4, -0x3.6e9c1eab1642ep-44},
  {-0x5.0be7cffd88p-4, -0x1.906440f7d3354p-44},
  {-0x5.21e5c3a56p-4, -0x1.dc1b8465cf25fp-44},
  {-0x5.3d8dfaeea8p-4, 0x1.fc158cb3124b9p-44},
  {-0x5.53d0c6def8p-4, -0x6.a255302442548p-48},
  {-0x5.6a32b6efb8p-4, 0x1.7c79b0af7ecf8p-48},
  {-0x5.80b422bc28p-4, 0x3.8505ba2483026p-44},
  {-0x5.9755635338p-4, -0x2.a89fa5b8b7b8p-52},
  {-0x5.ae16d33fe8p-4, -0xf.f33a869b92818p-48},
  {-0x5.c4f8ce91a8p-4, -0x5.ee6c985fa51c8p-48},
  {-0x5.dbfbb2e52p-4, 0x3.a2d118d9eb4eap-44},
  {-0x5.ed53b041ep-4, 0x1.6e41f4a28f81fp-44},
  {-0x6.0491126428p-4, -0x3.d8b82d666bd86p-44},
  {-0x6.1bf0674148p-4, 0x2.dc60371242666p-44},
  {-0x6.3372129968p-4, -0x2.f6ea56a50d47ep-48},
  {-0x6.452a18d7p-4, 0x2.5d9ad4bb98c2p-44},
  {-0x6.5ce8d0c4d8p-4, 0x2.548c4e940b67cp-44},
  {-0x6.74cafa8578p-4, -0x3.4ec30f7979fa8p-44},
  {-0x6.86cc1c7dd8p-4, 0x9.6536845491518p-52},
  {-0x6.9eed4eaf58p-4, 0xb.7f46dfcd2108p-48},
  {-0x6.b11e340818p-4, 0x3.e43f173375ab6p-44},
  {-0x6.c97fbed83p-4, -0x2.cb83063ba24bap-44},
  {-0x6.dbe167a3cp-4, 0x2.71819a1eef866p-44},
  {-0x6.ee5846e038p-4, -0xb.ec2dfa0533368p-48},
  {-0x7.07181a4fe8p-4, -0xe.76403ff470cp-48},
  {-0x7.19c1390058p-4, -0x3.fe0f4b078bf34p-44},
  {-0x7.2c8034b3bp-4, 0x2.6f46265d34ae8p-44},
  {-0x7.45a13527dp-4, -0x1.ab9d98a582718p-44},
  {-0x7.5893fdeed8p-4, 0xa.e4d6e6d3dca1p-48},
  {-0x7.6b9d521328p-4, 0x2.7a90b5837185ap-44},
  {-0x7.7ebd677a3p-4, -0x5.7529fcb117ce4p-48},
  {-0x7.91f474cb98p-4, -0x1.df865b95578b8p-44},
  {-0x7.a542b174d8p-4, -0x3.7047897cc2ab8p-44},
  {-0x7.b8a855ad08p-4, 0x3.06c05d2dc7ed8p-44},
  {-0x7.cc259a789p-4, -0x3.3dfe2ffc618dcp-44},
  {-0x7.dfbab9ad6p-4, 0x2.78cffe535446ap-44},
  {-0x7.f367edf698p-4, -0x3.7bd410c04b452p-44},
  {-0x8.072d72d9p-4, -0x3.d588b89d1b09cp-44},
  {-0x8.1b0b84b7p-4, -0x4.a920cc27fef8cp-44},
  {-0x8.2f0260d51p-4, -0x6.0301862e53e38p-44},
  {-0x8.4312455e2p-4, -0x7.9d5b385569ea4p-44},
  {-0x8.573b71683p-4, 0x5.82de51de06078p-44},
  {-0x8.6b7e24f8bp-4, -0x7.49c16ec3d6bbp-44},
  {-0x8.790e40e8dp-4, -0x6.e159ec4e262cp-44},
  {-0x8.8d7c11e3bp-4, 0x2.ac323ddceee58p-44},
  {-0x8.a20419d6fp-4, 0x7.772421573a078p-44},
  {-0x8.b6a69c609p-4, 0x3.02c515ee3513cp-44},
  {-0x8.c47720792p-4, 0x1.accec41d52e6cp-44},
  {-0x8.d9465db76p-4, -0x4.9f452edbdda74p-44},
  {-0x8.ee30cef03p-4, -0x4.a20da85d9c1c4p-44},
  {-0x8.fc31afe31p-4, 0x4.d392164ff40e8p-44},
  {-0x9.114a17253p-4, -0x5.4e3ea611bb73p-44},
  {-0x9.1f69df90ep-4, -0x5.19adcc6f6b138p-44},
  {-0x9.34b1089a7p-4, 0x2.36c3e20a44c4ap-44},
  {-0x9.42f042165p-4, -0x1.c1c4d866d5f22p-44},
  {-0x9.5866fdfbdp-4, -0x6.8152480c2d2fp-44},
  {-0x9.66c635be4p-4, 0x7.48499b93b55b4p-44},
  {-0x9.7c6d5b1b2p-4, 0x6.4333022e01438p-44},
  {-0x9.8aed221ap-4, -0x3.458b61d2f8932p-44},
  {-0x9.a0c58d42bp-4, -0x1.16667cd3ff5efp-44},
  {-0x9.af6678563p-4, -0xe.7e196e9438cf8p-48},
  {-0x9.be14cf9e2p-4, 0x4.caea38d3ef81p-44},
  {-0x9.d433b392cp-4, 0x7.7768ff0bb731cp-44},
  {-0x9.e304061b6p-4, 0x2.56e6cf9fc2784p-48},
  {-0x9.f1e21c8c8p-4, 0x4.49d4d3185f368p-44},
  {-0xa.084945c7dp-4, 0x5.7845fc8d3a0b4p-44},
  {-0xa.174a36f04p-4, -0x5.f81028b250ee4p-48},
  {-0xa.2659471bep-4, -0x1.f6ecefc1502dbp-44},
  {-0xa.357690f89p-4, 0x4.01cba837c0e2cp-44},
  {-0xa.4c3d6706dp-4, -0x5.d83ed15c6b2f4p-44},
  {-0xa.5b7eb7cb8p-4, -0x6.0fb88af6a62ap-44},
  {-0xa.6acea1fedp-4, -0x5.d0f65949c0a34p-44},
  {-0xa.7a2d41ad2p-4, -0x7.0c9d749362384p-44},
  {-0xa.899ab334p-4, 0x1.d46359b33c2adp-44},
  {-0xa.a0dae5cbdp-4, 0x3.fb74ce8e2ca36p-44},
  {-0xa.b06de228bp-4, 0x6.1cb6776b86a6p-44},
  {-0xa.c01016364p-4, 0x6.568792565887cp-44},
  {-0xa.cfc19fceap-4, -0x1.47ffa6ae2e581p-44},
  {-0xa.df829d243p-4, -0x4.87033a3f44dbcp-44},
  {-0xa.ef532cc2dp-4, -0x1.a7e8cc9788422p-44},
  {-0xa.ff336d914p-4, -0x4.c907151896c58p-44},
  {-0xb.17217f7d2p-4, 0x3.08654361c4c68p-44}
};

double kml_log_d2_f(double x){
    int32_t neg_input;
    
    neg_input = x < 0.0;
    
    if (__builtin_expect(neg_input, 0)) {
        __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
        __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
        return fp64_sv_QNaN.d;
    } else {
        int32_t nan_or_inf;
        
        nan_or_inf = ml_is_nan_or_inf(x);
        
        if (__builtin_expect(nan_or_inf, 0)) {
            int32_t inf;
            
            inf = ml_is_inf(x);
            
            if (__builtin_expect(inf, 0)) {
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                return fp64_sv_PlusInfty.d;
            } else {
                int32_t snan;
                
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                snan = ml_is_signaling_nan(x);
                
                if (__builtin_expect(snan, 0)) {
                    __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
                }
                return fp64_sv_QNaN.d;
            }
        } else {
            int32_t vx_subnormal;
            
            vx_subnormal = ml_is_subnormal(x);
            
            if (__builtin_expect(vx_subnormal, 0)) {
                int32_t vx_zero;
                
                vx_zero = ml_is_zero(x);
                
                if (__builtin_expect(vx_zero, 0)) {
                    __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                    __k1_fpu_raise_exceptions(_K1_FPU_DIVIDE_BY_ZERO);
                    return fp64_sv_MinusInfty.d;
                } else {
                    double pre_result;
                    double poly;
                    double seed;
                    double tmp9;
                    double tmp8;
                    uint64_t tmp4;
                    uint64_t tmp5;
                    double _red_vx2_;
                    double tmp7;
                    int32_t tmp6;
                    int64_t tmp1;
                    double tmp3;
                    int64_t tmp2;
                    double tmp;
                    double tmp25;
                    double tmp26;
                    double tmp27;
                    double tmp20;
                    double tmp21;
                    double tmp22;
                    int32_t tmp23;
                    double tmp28;
                    double tmp29;
                    double _red_vx4_;
                    double tmp24;
                    int32_t _vx_exp;
                    double pre_arg_red_index;
                    double _vx_mant;
                    int64_t table_index;
                    double tmp17;
                    double tmp19;
                    double tmp18;
                    double tmp15;
                    double tmp14;
                    double _red_vx;
                    double tmp16;
                    double tmp11;
                    double tmp10;
                    double tmp13;
                    double tmp12;
                    
                    tmp = x * 0x1.p100;
                    _vx_mant = ml_mantissa_extraction_fp64(tmp);
                    tmp1 = double_to_64b_encoding(_vx_mant);
                    tmp2 = tmp1 >> 45;
                    table_index = tmp2 & 127;
                    tmp3 =  - ml_k1_k1b_log2d_inv_table[table_index][0];
                    seed = __builtin_k1_fsinvnd(_vx_mant);
                    tmp4 = double_to_64b_encoding(seed);
                    tmp5 = tmp4 & -2;
                    pre_arg_red_index = double_from_64b_encoding(tmp5);
                    tmp6 = table_index == 0;
                    tmp7 = tmp6 ? 1.0 : pre_arg_red_index;
                    _red_vx = __builtin_k1_ffmsnd(1.0, tmp7, _vx_mant);
                    tmp8 = -0x8.p-4 * _red_vx;
                    tmp9 = 0x5.55555555556acp-4 * _red_vx;
                    tmp10 = _red_vx * tmp9;
                    tmp11 = tmp8 + tmp10;
                    tmp12 = -0x4.0000000000204p-4 * _red_vx;
                    tmp13 = 0x3.33333313239d2p-4 * _red_vx;
                    tmp14 = _red_vx * tmp13;
                    tmp15 = tmp12 + tmp14;
                    _red_vx2_ = _red_vx * _red_vx;
                    tmp16 = __builtin_k1_ffmad(tmp11, _red_vx2_, tmp15);
                    tmp17 = -0x2.aaaaaa848befep-4 * _red_vx;
                    tmp18 = 0x2.49324bdb4c144p-4 * _red_vx;
                    tmp19 = _red_vx * tmp18;
                    tmp20 = tmp17 + tmp19;
                    tmp21 = -0x2.000de5760e4eep-4 * _red_vx;
                    tmp22 = __builtin_k1_ffmad(tmp20, _red_vx2_, tmp21);
                    _red_vx4_ = _red_vx2_ * _red_vx2_;
                    poly = __builtin_k1_ffmad(tmp16, _red_vx4_, tmp22);
                    _vx_exp = ml_exp_extraction_dirty_fp64(tmp);
                    tmp23 = _vx_exp + -100;
                    tmp24 = tmp23;
                    tmp25 = __builtin_k1_ffmsnd(ml_k1_k1b_log2d_inv_table[table_index][1], tmp24, -0x3.08654361c4c68p-44);
                    tmp26 = __builtin_k1_ffmad(tmp25, _red_vx, poly);
                    tmp27 = _red_vx + tmp26;
                    pre_result = tmp3 + tmp27;
                    tmp28 = tmp23;
                    tmp29 = __builtin_k1_ffmad(pre_result, tmp28, 0xb.17217f7d2p-4);
                    return tmp29;
                }
            } else {
                int32_t vx_one;
                
                vx_one = x == 1.0;
                
                if (__builtin_expect(vx_one, 0)) {
                    __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                    return fp64_sv_PlusZero.d;
                } else {
                    double poly;
                    double seed;
                    double tmp9;
                    double tmp8;
                    int32_t tmp4;
                    double tmp5;
                    double _red_vx2_;
                    double tmp7;
                    double tmp6;
                    int64_t tmp1;
                    uint64_t tmp3;
                    uint64_t tmp2;
                    int64_t tmp;
                    double tmp20;
                    double _red_vx4_;
                    double result1;
                    int32_t exp_minus_one;
                    double pre_arg_red_index;
                    double _vx_mant;
                    int64_t table_index;
                    int32_t vx_exp;
                    double tmp17;
                    double tmp16;
                    double tmp19;
                    double tmp18;
                    double tmp15;
                    double tmp14;
                    double _red_vx;
                    double tmp12;
                    double tmp11;
                    double tmp10;
                    double tmp13;
                    double result;
                    
                    _vx_mant = ml_mantissa_extraction_fp64(x);
                    tmp = double_to_64b_encoding(_vx_mant);
                    tmp1 = tmp >> 45;
                    table_index = tmp1 & 127;
                    result = ml_k1_k1b_log2d_inv_table[table_index][0];
                    seed = __builtin_k1_fsinvnd(_vx_mant);
                    tmp2 = double_to_64b_encoding(seed);
                    tmp3 = tmp2 & -2;
                    pre_arg_red_index = double_from_64b_encoding(tmp3);
                    tmp4 = table_index == 0;
                    tmp5 = tmp4 ? 1.0 : pre_arg_red_index;
                    _red_vx = __builtin_k1_ffmsnd(1.0, tmp5, _vx_mant);
                    tmp6 = -0x8.p-4 * _red_vx;
                    tmp7 = 0x5.55555555556acp-4 * _red_vx;
                    tmp8 = _red_vx * tmp7;
                    tmp9 = tmp6 + tmp8;
                    tmp10 = -0x4.0000000000204p-4 * _red_vx;
                    tmp11 = 0x3.33333313239d2p-4 * _red_vx;
                    tmp12 = _red_vx * tmp11;
                    tmp13 = tmp10 + tmp12;
                    _red_vx2_ = _red_vx * _red_vx;
                    tmp14 = __builtin_k1_ffmad(tmp9, _red_vx2_, tmp13);
                    tmp15 = -0x2.aaaaaa848befep-4 * _red_vx;
                    tmp16 = 0x2.49324bdb4c144p-4 * _red_vx;
                    tmp17 = _red_vx * tmp16;
                    tmp18 = tmp15 + tmp17;
                    tmp19 = -0x2.000de5760e4eep-4 * _red_vx;
                    tmp20 = __builtin_k1_ffmad(tmp18, _red_vx2_, tmp19);
                    _red_vx4_ = _red_vx2_ * _red_vx2_;
                    poly = __builtin_k1_ffmad(tmp14, _red_vx4_, tmp20);
                    result1 = ml_k1_k1b_log2d_inv_table[table_index][1];
                    vx_exp = ml_exp_extraction_dirty_fp64(x);
                    exp_minus_one = vx_exp == -1;
                    
                    if (__builtin_expect(exp_minus_one, 0)) {
                        double tmp24;
                        double tmp21;
                        double tmp22;
                        double tmp23;
                        double result2;
                        double tmp0;
                        
                        tmp0 =  - ml_k1_k1b_log2d_inv_table[table_index][0];
                        tmp21 = tmp0 - 0xb.17217f7d2p-4;
                        tmp22 = __builtin_k1_ffmad(_red_vx, poly, _red_vx);
                        tmp23 = tmp22 - -0x3.08654361c4c68p-44;
                        tmp24 = tmp23 - ml_k1_k1b_log2d_inv_table[table_index][1];
                        result2 = tmp21 + tmp24;
                        return result2;
                    } else {
                        double tmp24;
                        double tmp25;
                        double pre_result;
                        double tmp21;
                        double tmp22;
                        double tmp23;
                        int32_t _vx_exp;
                        double result0;
                        double tmp0;
                        
                        tmp0 =  - ml_k1_k1b_log2d_inv_table[table_index][0];
                        _vx_exp = ml_exp_extraction_dirty_fp64(x);
                        tmp21 = _vx_exp;
                        tmp22 = __builtin_k1_ffmsnd(ml_k1_k1b_log2d_inv_table[table_index][1], tmp21, -0x3.08654361c4c68p-44);
                        tmp23 = __builtin_k1_ffmad(tmp22, _red_vx, poly);
                        tmp24 = _red_vx + tmp23;
                        pre_result = tmp0 + tmp24;
                        tmp25 = _vx_exp;
                        result0 = __builtin_k1_ffmad(pre_result, tmp25, 0xb.17217f7d2p-4);
                        return result0;
                    }
                }
            }
        }
    }
}
