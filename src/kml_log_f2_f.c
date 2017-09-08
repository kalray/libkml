/**
 * generated using metalibm 0.1 
 *  sha1 git: a9c32dda8a01eb1ef3c3441995e32447456f0dd6 
 * 
**/

#include <support_lib/ml_utils.h>
#include <support_lib/ml_special_values.h>
#include <math.h>
#include <inttypes.h>


float ml_k1_k1b_log2f_inv_table[128][2]  = {
  {0.0f, 0.0f},
  {-0x3.049p-8f, 0x6.eb8ee8p-24f},
  {-0x5.0cap-8f, -0xa.4966p-24f},
  {-0x6.d74p-8f, 0xf.69d24p-24f},
  {-0x8.e74p-8f, 0x1.2cea1ep-20f},
  {-0xa.b8cp-8f, 0x1.1d9fe2p-20f},
  {-0xc.8d8p-8f, -0x3.9f7eb8p-24f},
  {-0xe.a98p-8f, 0x9.4dfd1p-24f},
  {-0x1.0858p-4f, -0x1.8b59e4p-20f},
  {-0x1.265p-4f, -0x3.6c3d8cp-20f},
  {-0x1.4488p-4f, 0x2.1fc244p-20f},
  {-0x1.5e98p-4f, 0x2.5b2688p-20f},
  {-0x1.7d3p-4f, -0x3.687c28p-20f},
  {-0x1.9c1p-4f, 0x3.cd2b2cp-20f},
  {-0x1.b6bp-4f, 0x3.77252cp-20f},
  {-0x1.d5f8p-4f, 0x2.a9a6ep-20f},
  {-0x1.f0f8p-4f, 0xf.32267p-24f},
  {-0x2.0c2p-4f, -0x6.a6a9a8p-20f},
  {-0x2.278p-4f, -0x4.c0b87p-20f},
  {-0x2.431p-4f, -0x1.fb300ep-20f},
  {-0x2.5edp-4f, 0x1.06887ep-20f},
  {-0x2.7acp-4f, 0x3.9db288p-20f},
  {-0x2.96ep-4f, 0x5.202038p-20f},
  {-0x2.b33p-4f, 0x4.e01c58p-20f},
  {-0x2.cfbp-4f, 0x2.2c50f4p-20f},
  {-0x2.e79p-4f, -0x7.20e9f8p-20f},
  {-0x3.048p-4f, 0x7.d355c8p-20f},
  {-0x3.1cbp-4f, -0x1.1d7586p-20f},
  {-0x3.351p-4f, 0x1.0e428ap-20f},
  {-0x3.528p-4f, 0x2.586ea4p-20f},
  {-0x3.6b3p-4f, 0x1.cbbd8ap-20f},
  {-0x3.84p-4f, -0x5.1563p-20f},
  {-0x3.9dp-4f, -0x2.c2afe4p-20f},
  {-0x3.b62p-4f, -0x7.b61a9p-20f},
  {-0x3.cf7p-4f, -0x4.6bd6fp-20f},
  {-0x3.e8fp-4f, 0x6.9d964p-20f},
  {-0x4.028p-4f, -0x7.1ab768p-20f},
  {-0x4.1c4p-4f, -0xe.18135p-20f},
  {-0x4.364p-4f, 0x1.1fb054p-20f},
  {-0x4.4b2p-4f, 0x2.0cbfe4p-20f},
  {-0x4.656p-4f, 0x4.b1191p-20f},
  {-0x4.7fcp-4f, -0x3.f9f3dp-20f},
  {-0x4.95p-4f, -0x4.125398p-20f},
  {-0x4.afcp-4f, 0x3.e0c8dcp-20f},
  {-0x4.c54p-4f, 0x3.878b28p-20f},
  {-0x4.e04p-4f, -0x5.ca159p-20f},
  {-0x4.f6p-4f, -0x7.ed6518p-20f},
  {-0x5.0bep-4f, -0x7.cffd88p-20f},
  {-0x5.21ep-4f, -0x5.c3a56p-20f},
  {-0x5.3d8p-4f, -0xd.faeeap-20f},
  {-0x5.53ep-4f, 0xf.3921p-20f},
  {-0x5.6a4p-4f, 0xd.49105p-20f},
  {-0x5.80cp-4f, 0xb.dd43ep-20f},
  {-0x5.976p-4f, 0xa.9caccp-20f},
  {-0x5.ae2p-4f, 0x9.2cc01p-20f},
  {-0x5.c5p-4f, 0x7.316e58p-20f},
  {-0x5.dcp-4f, 0x4.4d1aep-20f},
  {-0x5.ed6p-4f, 0xc.4fbe2p-20f},
  {-0x6.04ap-4f, 0xe.ed9bdp-20f},
  {-0x6.1cp-4f, 0xf.98becp-20f},
  {-0x6.338p-4f, 0xd.ed669p-20f},
  {-0x6.452p-4f, -0xa.18d7p-20f},
  {-0x6.5cep-4f, -0x8.d0c4dp-20f},
  {-0x6.74cp-4f, -0xa.fa858p-20f},
  {-0x6.86cp-4f, -0xc.1c7ddp-20f},
  {-0x6.9eep-4f, -0xd.4eaf5p-20f},
  {-0x6.b12p-4f, 0x1.cbf7ecp-20f},
  {-0x6.c98p-4f, 0x4.127cdp-24f},
  {-0x6.dbep-4f, -0x1.67a3bep-20f},
  {-0x6.ee6p-4f, 0x7.b91fc8p-20f},
  {-0x7.072p-4f, 0x7.e5b018p-20f},
  {-0x7.19cp-4f, -0x1.39005cp-20f},
  {-0x7.2c8p-4f, -0x3.4b3ad8p-24f},
  {-0x7.45ap-4f, -0x1.3527d2p-20f},
  {-0x7.58ap-4f, 0xc.02113p-20f},
  {-0x7.6bap-4f, 0x2.adecdcp-20f},
  {-0x7.7ecp-4f, 0x2.9885dp-20f},
  {-0x7.92p-4f, 0xb.8b346p-20f},
  {-0x7.a54p-4f, -0x2.b174dcp-20f},
  {-0x7.b8ap-4f, -0x8.55adp-20f},
  {-0x7.cc2p-4f, -0x5.9a789p-20f},
  {-0x7.dfcp-4f, 0x5.4652ap-20f},
  {-0x7.f36p-4f, -0x7.edf698p-20f},
  {-0x8.074p-4f, 0x1.28d27p-16f},
  {-0x8.1bp-4f, -0xb.84b7p-20f},
  {-0x8.2fp-4f, -0x2.60d518p-20f},
  {-0x8.43p-4f, -0x1.2455e2p-16f},
  {-0x8.574p-4f, 0x4.8e97d8p-20f},
  {-0x8.6b8p-4f, 0x1.db0748p-20f},
  {-0x8.79p-4f, -0xe.40e8dp-20f},
  {-0x8.8d8p-4f, 0x3.ee1c54p-20f},
  {-0x8.a2p-4f, -0x4.19d6e8p-20f},
  {-0x8.b6cp-4f, 0x1.9639f8p-16f},
  {-0x8.c48p-4f, 0x8.df86ep-20f},
  {-0x8.d94p-4f, -0x6.5db768p-20f},
  {-0x8.ee4p-4f, 0xf.310fdp-20f},
  {-0x8.fc4p-4f, 0xe.501cfp-20f},
  {-0x9.114p-4f, -0xa.17253p-20f},
  {-0x9.1f8p-4f, 0x1.6206f2p-16f},
  {-0x9.34cp-4f, 0xe.f7659p-20f},
  {-0x9.43p-4f, 0xf.bde9bp-20f},
  {-0x9.588p-4f, 0x1.902042p-16f},
  {-0x9.66cp-4f, -0x6.35be38p-20f},
  {-0x9.7c8p-4f, 0x1.2a4e4ep-16f},
  {-0x9.8bp-4f, 0x1.2dde6p-16f},
  {-0x9.a0cp-4f, -0x5.8d42bp-20f},
  {-0x9.af8p-4f, 0x1.987a9cp-16f},
  {-0x9.bep-4f, -0x1.4cf9e2p-16f},
  {-0x9.d44p-4f, 0xc.4c6d4p-20f},
  {-0x9.e3p-4f, -0x4.061b6p-20f},
  {-0x9.f2p-4f, 0x1.de3738p-16f},
  {-0xa.084p-4f, -0x9.45c7dp-20f},
  {-0xa.174p-4f, -0xa.36f04p-20f},
  {-0xa.264p-4f, -0x1.9471bep-16f},
  {-0xa.358p-4f, 0x9.6f077p-20f},
  {-0xa.4c4p-4f, 0x2.98f92cp-20f},
  {-0xa.5b8p-4f, 0x1.48347ap-20f},
  {-0xa.6acp-4f, -0xe.a1fedp-20f},
  {-0xa.7a4p-4f, 0x1.2be52ep-16f},
  {-0xa.898p-4f, -0x1.ab334p-16f},
  {-0xa.a0cp-4f, -0x1.ae5cbcp-16f},
  {-0xa.b08p-4f, 0x1.21dd76p-16f},
  {-0xa.cp-4f, -0x1.016364p-16f},
  {-0xa.cfcp-4f, -0x1.9fcea2p-20f},
  {-0xa.df8p-4f, -0x2.9d2434p-20f},
  {-0xa.ef4p-4f, -0x1.32cc2ep-16f},
  {-0xa.ff4p-4f, 0xc.926ecp-20f},
  {-0xb.174p-4f, 0x1.e8082ep-16f}
};

float kml_log_f2_f(float x){
    int32_t neg_input;
    
    neg_input = x < 0.0f;
    
    if (__builtin_expect(neg_input, 0)) {
        __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
        __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
        return fp32_sv_QNaN.f;
    } else {
        int32_t nan_or_inf;
        
        nan_or_inf = ml_is_nan_or_inff(x);
        
        if (__builtin_expect(nan_or_inf, 0)) {
            int32_t inf;
            
            inf = ml_is_inff(x);
            
            if (__builtin_expect(inf, 0)) {
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                return fp32_sv_PlusInfty.f;
            } else {
                int32_t snan;
                
                __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                snan = ml_is_signaling_nanf(x);
                
                if (__builtin_expect(snan, 0)) {
                    __k1_fpu_raise_exceptions(_K1_FPU_INVALID_OPERATION);
                }
                return fp32_sv_QNaN.f;
            }
        } else {
            int32_t vx_subnormal;
            
            vx_subnormal = ml_is_subnormalf(x);
            
            if (__builtin_expect(vx_subnormal, 0)) {
                int32_t vx_zero;
                
                vx_zero = ml_is_zerof(x);
                
                if (__builtin_expect(vx_zero, 0)) {
                    __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                    __k1_fpu_raise_exceptions(_K1_FPU_DIVIDE_BY_ZERO);
                    return fp32_sv_MinusInfty.f;
                } else {
                    float pre_result;
                    float poly;
                    float seed;
                    float tmp9;
                    float tmp8;
                    uint32_t tmp4;
                    uint32_t tmp5;
                    float _red_vx2_;
                    float tmp7;
                    int32_t tmp6;
                    int32_t tmp1;
                    float tmp3;
                    int32_t tmp2;
                    float tmp;
                    int32_t _vx_exp;
                    float pre_arg_red_index;
                    float _vx_mant;
                    int32_t table_index;
                    float tmp17;
                    float tmp15;
                    float tmp14;
                    float _red_vx;
                    float tmp16;
                    int32_t tmp11;
                    float tmp10;
                    float tmp13;
                    float tmp12;
                    
                    tmp = x * 0x1.p100f;
                    _vx_mant = ml_mantissa_extraction_fp32(tmp);
                    tmp1 = float_to_32b_encoding(_vx_mant);
                    tmp2 = tmp1 >> 16;
                    table_index = tmp2 & 127;
                    tmp3 =  - ml_k1_k1b_log2f_inv_table[table_index][0];
                    seed = __builtin_k1_fsinvn(_vx_mant);
                    tmp4 = float_to_32b_encoding(seed);
                    tmp5 = tmp4 & -2;
                    pre_arg_red_index = float_from_32b_encoding(tmp5);
                    tmp6 = table_index == 0;
                    tmp7 = tmp6 ? 1.0f : pre_arg_red_index;
                    _red_vx = __builtin_k1_ffmsn(1.0f, tmp7, _vx_mant);
                    tmp8 = 0x5.556p-4f * _red_vx;
                    tmp9 = __builtin_k1_fdma(-0x8.p-4f, _red_vx, _red_vx, tmp8);
                    tmp10 = -0x4.0009a8p-4f * _red_vx;
                    _red_vx2_ = _red_vx * _red_vx;
                    poly = __builtin_k1_ffma(tmp9, _red_vx2_, tmp10);
                    _vx_exp = ml_exp_extraction_dirty_fp32(tmp);
                    tmp11 = _vx_exp + -100;
                    tmp12 = tmp11;
                    tmp13 = __builtin_k1_ffmsn(ml_k1_k1b_log2f_inv_table[table_index][1], tmp12, -0x1.e8082ep-16f);
                    tmp14 = __builtin_k1_ffma(tmp13, _red_vx, poly);
                    tmp15 = _red_vx + tmp14;
                    pre_result = tmp3 + tmp15;
                    tmp16 = tmp11;
                    tmp17 = __builtin_k1_ffma(pre_result, tmp16, 0xb.174p-4f);
                    return tmp17;
                }
            } else {
                int32_t vx_one;
                
                vx_one = x == 1.0f;
                
                if (__builtin_expect(vx_one, 0)) {
                    __k1_fpu_clear_exceptions(_K1_FPU_ALL_EXCEPTS);
                    return fp32_sv_PlusZero.f;
                } else {
                    int32_t tmp;
                    int32_t exp_minus_one;
                    float poly;
                    float result1;
                    float tmp8;
                    int32_t vx_exp;
                    float pre_arg_red_index;
                    float seed;
                    float _vx_mant;
                    float result;
                    int32_t table_index;
                    float _red_vx2_;
                    float tmp5;
                    int32_t tmp4;
                    float _red_vx;
                    float tmp6;
                    int32_t tmp1;
                    float tmp7;
                    uint32_t tmp3;
                    uint32_t tmp2;
                    
                    _vx_mant = ml_mantissa_extraction_fp32(x);
                    tmp = float_to_32b_encoding(_vx_mant);
                    tmp1 = tmp >> 16;
                    table_index = tmp1 & 127;
                    result = ml_k1_k1b_log2f_inv_table[table_index][0];
                    seed = __builtin_k1_fsinvn(_vx_mant);
                    tmp2 = float_to_32b_encoding(seed);
                    tmp3 = tmp2 & -2;
                    pre_arg_red_index = float_from_32b_encoding(tmp3);
                    tmp4 = table_index == 0;
                    tmp5 = tmp4 ? 1.0f : pre_arg_red_index;
                    _red_vx = __builtin_k1_ffmsn(1.0f, tmp5, _vx_mant);
                    tmp6 = 0x5.556p-4f * _red_vx;
                    tmp7 = __builtin_k1_fdma(-0x8.p-4f, _red_vx, _red_vx, tmp6);
                    tmp8 = -0x4.0009a8p-4f * _red_vx;
                    _red_vx2_ = _red_vx * _red_vx;
                    poly = __builtin_k1_ffma(tmp7, _red_vx2_, tmp8);
                    result1 = ml_k1_k1b_log2f_inv_table[table_index][1];
                    vx_exp = ml_exp_extraction_dirty_fp32(x);
                    exp_minus_one = vx_exp == -1;
                    
                    if (__builtin_expect(exp_minus_one, 0)) {
                        float result2;
                        float tmp10;
                        float tmp9;
                        float tmp11;
                        float tmp0;
                        float tmp12;
                        
                        tmp0 =  - ml_k1_k1b_log2f_inv_table[table_index][0];
                        tmp9 = tmp0 - 0xb.174p-4f;
                        tmp10 = __builtin_k1_ffma(_red_vx, poly, _red_vx);
                        tmp11 = tmp10 - -0x1.e8082ep-16f;
                        tmp12 = tmp11 - ml_k1_k1b_log2f_inv_table[table_index][1];
                        result2 = tmp9 + tmp12;
                        return result2;
                    } else {
                        float pre_result;
                        int32_t _vx_exp;
                        float tmp10;
                        float tmp9;
                        float result0;
                        float tmp11;
                        float tmp0;
                        float tmp13;
                        float tmp12;
                        
                        tmp0 =  - ml_k1_k1b_log2f_inv_table[table_index][0];
                        _vx_exp = ml_exp_extraction_dirty_fp32(x);
                        tmp9 = _vx_exp;
                        tmp10 = __builtin_k1_ffmsn(ml_k1_k1b_log2f_inv_table[table_index][1], tmp9, -0x1.e8082ep-16f);
                        tmp11 = __builtin_k1_ffma(tmp10, _red_vx, poly);
                        tmp12 = _red_vx + tmp11;
                        pre_result = tmp0 + tmp12;
                        tmp13 = _vx_exp;
                        result0 = __builtin_k1_ffma(pre_result, tmp13, 0xb.174p-4f);
                        return result0;
                    }
                }
            }
        }
    }
}
