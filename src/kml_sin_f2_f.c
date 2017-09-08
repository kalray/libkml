/**
 * generated using metalibm 0.1d 
 *  sha1 git: e088bb87486492d92adc2db2f2bfb0467d34591c 
 * 
**/
#include <support_lib/ml_utils.h>
#include <HAL/hal/core/cpu.h>
#include <math.h>
#include <support_lib/ml_special_values.h>
#include <inttypes.h>


double kml_sin_f2_f_sin_table_ext[32]  = {0, 0x1.8f8b83c69a60bp-3, 0x1.87de2a6aea963p-2, 0x1.1c73b39ae68c8p-1, 0x1.6a09e667f3bcdp-1, 0x1.a9b66290ea1a3p-1, 0x1.d906bcf328d46p-1, 0x1.f6297cff75cbp-1, 0x1p0, 0x1.f6297cff75cbp-1, 0x1.d906bcf328d46p-1, 0x1.a9b66290ea1a3p-1, 0x1.6a09e667f3bcdp-1, 0x1.1c73b39ae68c8p-1, 0x1.87de2a6aea963p-2, 0x1.8f8b83c69a60bp-3, 0, -0x1.8f8b83c69a60bp-3, -0x1.87de2a6aea963p-2, -0x1.1c73b39ae68c8p-1, -0x1.6a09e667f3bcdp-1, -0x1.a9b66290ea1a3p-1, -0x1.d906bcf328d46p-1, -0x1.f6297cff75cbp-1, -0x1p0, -0x1.f6297cff75cbp-1, -0x1.d906bcf328d46p-1, -0x1.a9b66290ea1a3p-1, -0x1.6a09e667f3bcdp-1, -0x1.1c73b39ae68c8p-1, -0x1.87de2a6aea963p-2, -0x1.8f8b83c69a60bp-3};
float PH_cst_table[18][1]  = {
  {0x1.46p2f},
  {-0x1.ap-3f},
  {0x1.b8p-4f},
  {-0x1.bp-5f},
  {-0x1.bcp-5f},
  {0x1.6p-9f},
  {-0x1.acp-6f},
  {-0x1p-11f},
  {0x1.3ap-8f},
  {0x1.7ep-9f},
  {-0x1.c2p-10f},
  {0x1.4ep-11f},
  {-0x1.92p-12f},
  {0x1.cp-13f},
  {0x1.b6p-14f},
  {0x1.8ap-15f},
  {0x1.58p-17f},
  {0x1.94p-17f}
};
double kml_sin_f2_f_cos_table_ext[32]  = {0x1p0, 0x1.f6297cff75cbp-1, 0x1.d906bcf328d46p-1, 0x1.a9b66290ea1a3p-1, 0x1.6a09e667f3bcdp-1, 0x1.1c73b39ae68c8p-1, 0x1.87de2a6aea963p-2, 0x1.8f8b83c69a60bp-3, 0, -0x1.8f8b83c69a60bp-3, -0x1.87de2a6aea963p-2, -0x1.1c73b39ae68c8p-1, -0x1.6a09e667f3bcdp-1, -0x1.a9b66290ea1a3p-1, -0x1.d906bcf328d46p-1, -0x1.f6297cff75cbp-1, -0x1p0, -0x1.f6297cff75cbp-1, -0x1.d906bcf328d46p-1, -0x1.a9b66290ea1a3p-1, -0x1.6a09e667f3bcdp-1, -0x1.1c73b39ae68c8p-1, -0x1.87de2a6aea963p-2, -0x1.8f8b83c69a60bp-3, 0, 0x1.8f8b83c69a60bp-3, 0x1.87de2a6aea963p-2, 0x1.1c73b39ae68c8p-1, 0x1.6a09e667f3bcdp-1, 0x1.a9b66290ea1a3p-1, 0x1.d906bcf328d46p-1, 0x1.f6297cff75cbp-1};
float PH_scale_table[18][1]  = {
  {0x1p0f},
  {0x1p-4f},
  {0x1p-8f},
  {0x1p-12f},
  {0x1p-16f},
  {0x1p-20f},
  {0x1p-24f},
  {0x1p-28f},
  {0x1p-32f},
  {0x1p-36f},
  {0x1p-40f},
  {0x1p-44f},
  {0x1p-48f},
  {0x1p-52f},
  {0x1p-56f},
  {0x1p-60f},
  {0x1p-64f},
  {0x1p-68f}
};
float kml_sin_f2_f_sin_table[32][1]  = {
  {0.0f},
  {0x1.8f8b84p-3f},
  {0x1.87de2ap-2f},
  {0x1.1c73b4p-1f},
  {0x1.6a09e6p-1f},
  {0x1.a9b662p-1f},
  {0x1.d906bcp-1f},
  {0x1.f6297cp-1f},
  {0x1p0f},
  {0x1.f6297cp-1f},
  {0x1.d906bcp-1f},
  {0x1.a9b662p-1f},
  {0x1.6a09e6p-1f},
  {0x1.1c73b4p-1f},
  {0x1.87de2ap-2f},
  {0x1.8f8b84p-3f},
  {0.0f},
  {-0x1.8f8b84p-3f},
  {-0x1.87de2ap-2f},
  {-0x1.1c73b4p-1f},
  {-0x1.6a09e6p-1f},
  {-0x1.a9b662p-1f},
  {-0x1.d906bcp-1f},
  {-0x1.f6297cp-1f},
  {-0x1p0f},
  {-0x1.f6297cp-1f},
  {-0x1.d906bcp-1f},
  {-0x1.a9b662p-1f},
  {-0x1.6a09e6p-1f},
  {-0x1.1c73b4p-1f},
  {-0x1.87de2ap-2f},
  {-0x1.8f8b84p-3f}
};
float kml_sin_f2_f_cos_table_hi[32][1]  = {
  {0x1p0f},
  {0x1.f6298p-1f},
  {0x1.d906cp-1f},
  {0x1.a9b66p-1f},
  {0x1.6a09ep-1f},
  {0x1.1c73bp-1f},
  {0x1.87de3p-2f},
  {0x1.8f8b8p-3f},
  {0.0f},
  {-0x1.8f8b8p-3f},
  {-0x1.87de3p-2f},
  {-0x1.1c73bp-1f},
  {-0x1.6a09ep-1f},
  {-0x1.a9b66p-1f},
  {-0x1.d906cp-1f},
  {-0x1.f6298p-1f},
  {-0x1p0f},
  {-0x1.f6298p-1f},
  {-0x1.d906cp-1f},
  {-0x1.a9b66p-1f},
  {-0x1.6a09ep-1f},
  {-0x1.1c73bp-1f},
  {-0x1.87de3p-2f},
  {-0x1.8f8b8p-3f},
  {0.0f},
  {0x1.8f8b8p-3f},
  {0x1.87de3p-2f},
  {0x1.1c73bp-1f},
  {0x1.6a09ep-1f},
  {0x1.a9b66p-1f},
  {0x1.d906cp-1f},
  {0x1.f6298p-1f}
};
float kml_sin_f2_f_cos_table_lo[32][1]  = {
  {0.0f},
  {-0x1.80451ap-24f},
  {-0x1.866b96p-24f},
  {0x1.48750ep-24f},
  {0x1.99fcfp-23f},
  {0x1.cd7346p-24f},
  {-0x1.65455ap-24f},
  {0x1.e34d3p-26f},
  {0.0f},
  {-0x1.e34d3p-26f},
  {0x1.65455ap-24f},
  {-0x1.cd7346p-24f},
  {-0x1.99fcfp-23f},
  {-0x1.48750ep-24f},
  {0x1.866b96p-24f},
  {0x1.80451ap-24f},
  {0.0f},
  {0x1.80451ap-24f},
  {0x1.866b96p-24f},
  {-0x1.48750ep-24f},
  {-0x1.99fcfp-23f},
  {-0x1.cd7346p-24f},
  {0x1.65455ap-24f},
  {-0x1.e34d3p-26f},
  {0.0f},
  {0x1.e34d3p-26f},
  {-0x1.65455ap-24f},
  {0x1.cd7346p-24f},
  {0x1.99fcfp-23f},
  {0x1.48750ep-24f},
  {-0x1.866b96p-24f},
  {-0x1.80451ap-24f}
};

float kml_sin_f2_f(float x){
    int32_t lar_cond;
    
    lar_cond = x >= 0x1p10f;
    
    if (__builtin_expect(lar_cond, 0)) {
        float lar_tab_sin;
        float lar_red_vx;
        int32_t lar_tab_index;
        int32_t tmp9;
        int32_t tmp8;
        int32_t tmp5;
        int32_t tmp4;
        int32_t tmp7;
        int32_t tmp6;
        int32_t tmp1;
        int32_t tmp3;
        int32_t tmp2;
        int32_t tmp;
        float lar_poly_sin;
        float tmp26;
        float lar_tab_cos_hi;
        double tmp20;
        float tmp21;
        float tmp22;
        float lar_red_vx2_;
        double promote4;
        double promote5;
        double tmp28;
        double promote1;
        double promote2;
        double promote3;
        float lar_vx;
        float pa_4;
        float lar_poly_cos;
        float tmp24;
        int32_t msb_exp;
        double sin_mon1;
        float lar_red_vx2_1;
        float tmp25;
        int32_t msb_index;
        int32_t lsb_index;
        float tmp27;
        double promote;
        int32_t acc_int;
        float lar_cos_eval_d;
        float acc;
        float lar_red_vx3_;
        float lar_tab_cos_lo;
        int32_t i;
        float tmp23;
        int32_t lsb_exp;
        int32_t tmp10;
        double tmp19;
        double tmp18;
        float vx_lo;
        int32_t tmp15;
        int32_t tmp14;
        double tmp17;
        float tmp16;
        int32_t tmp11;
        float vx_hi;
        int32_t tmp13;
        int32_t tmp12;
        
        tmp = ml_exp_extraction_dirty_fp32(x);
        tmp1 =  - tmp;
        tmp2 = tmp1 + INT32_C(23);
        tmp3 = tmp2 - INT32_C(1);
        lsb_exp = tmp3 - INT32_C(100);
        tmp4 = INT32_C(2) - lsb_exp;
        lsb_index = tmp4 / INT32_C(9);
        tmp5 =  - tmp;
        tmp6 = tmp5 + INT32_C(23);
        tmp7 = tmp6 - INT32_C(1);
        msb_exp = tmp7 + INT32_C(4);
        tmp8 = INT32_C(2) < msb_exp;
        tmp9 = INT32_C(2) - msb_exp;
        tmp10 = tmp9 / INT32_C(9);
        msb_index = tmp8 ? INT32_C(0) : tmp10;
        tmp11 = float_to_32b_encoding(x);
        tmp12 = tmp11 & INT32_C(-4096);
        vx_hi = float_from_32b_encoding(tmp12);
        vx_lo = x - vx_hi;
        i = msb_index;
        acc = 0.0f;
        acc_int = 0.0f;
        
        for (;(i <= lsb_index);){
            float hi_mult_red;
            float sca_load;
            int32_t hi_mult_int;
            float tmp0;
            int32_t tmp24;
            int32_t tmp25;
            int32_t tmp26;
            float tmp27;
            int32_t tmp20;
            float tmp21;
            float tmp22;
            int32_t tmp23;
            float tmp28;
            int32_t tmp29;
            float lo_mult_red;
            int32_t pre_exclude_hi;
            int32_t lo_mult_int;
            int32_t exclude_hi;
            float acc_expr;
            float lo_mult_int_f;
            float hi_mult;
            int32_t tmp30;
            float lo_mult;
            float cst_load;
            int32_t int_expr;
            float hi_mult_int_f;
            int32_t tmp19;
            int32_t tmp18;
            float tmp15;
            float tmp14;
            int32_t tmp17;
            int32_t tmp16;
            float tmp13;
            
            sca_load = PH_scale_table[i][INT32_C(0)];
            tmp0 = vx_lo * sca_load;
            cst_load = PH_cst_table[i][INT32_C(0)];
            tmp13 = cst_load * sca_load;
            lo_mult = tmp0 * tmp13;
            lo_mult_int = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, lo_mult, 0);
            lo_mult_int_f = lo_mult_int;
            lo_mult_red = __builtin_k1_ffmsn(lo_mult_int_f, tmp0, tmp13);
            tmp14 = vx_hi * sca_load;
            tmp15 = cst_load * sca_load;
            hi_mult = tmp14 * tmp15;
            hi_mult_int = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, hi_mult, 0);
            hi_mult_int_f = hi_mult_int;
            hi_mult_red = __builtin_k1_ffmsn(hi_mult_int_f, tmp14, tmp15);
            tmp16 = i + INT32_C(1);
            tmp17 = tmp16 * INT32_C(9);
            tmp18 = INT32_C(2) - tmp17;
            tmp19 = tmp18 + INT32_C(1);
            tmp20 = tmp + INT32_C(-11);
            pre_exclude_hi = tmp19 + tmp20;
            exclude_hi = pre_exclude_hi <= INT32_C(4);
            tmp21 = exclude_hi ? hi_mult_red : 0.0f;
            tmp22 = acc + tmp21;
            acc_expr = tmp22 + lo_mult_red;
            tmp23 = exclude_hi ? hi_mult_int : INT32_C(0);
            tmp24 = acc_int + tmp23;
            tmp25 = tmp24 + lo_mult_int;
            int_expr = tmp25 % INT32_C(32);
            tmp26 = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, acc_expr, 0);
            tmp27 = tmp26;
            tmp28 = acc_expr - tmp27;
            acc = tmp28;
            tmp29 = int_expr + tmp26;
            acc_int = tmp29;
            tmp30 = i + INT32_C(1);
            i = tmp30;
        }
        lar_vx = acc;
        tmp13 = acc_int < INT32_C(0);
        tmp14 = acc_int + INT32_C(32);
        tmp15 = tmp13 ? tmp14 : acc_int;
        tmp16 = tmp15;
        lar_tab_index = tmp16;
        lar_tab_cos_hi = kml_sin_f2_f_cos_table_hi[lar_tab_index][INT32_C(0)];
        promote = lar_tab_cos_hi;
        lar_tab_cos_lo = kml_sin_f2_f_cos_table_lo[lar_tab_index][INT32_C(0)];
        promote1 = lar_tab_cos_lo;
        tmp17 = promote + promote1;
        promote2 = lar_vx;
        tmp18 = promote2 * 0x1.921fb54442d18p-3;
        tmp19 =  - tmp18;
        lar_tab_sin = kml_sin_f2_f_sin_table[lar_tab_index][INT32_C(0)];
        promote3 = lar_tab_sin;
        sin_mon1 = tmp19 * promote3;
        tmp20 = tmp17 + sin_mon1;
        lar_red_vx = lar_vx * 0x1.921fb6p-3f;
        tmp21 =  - lar_red_vx;
        promote4 = tmp21;
        tmp22 = lar_tab_cos_hi * lar_red_vx;
        lar_red_vx2_ = lar_red_vx * lar_red_vx;
        tmp23 = __builtin_k1_ffma(0x1.555554p-5f, lar_red_vx2_, -0x1.6bf5p-10f);
        lar_red_vx3_ = lar_red_vx * lar_red_vx2_;
        lar_poly_cos = lar_red_vx3_ * tmp23;
        lar_red_vx2_1 = lar_red_vx * lar_red_vx;
        pa_4 = __builtin_k1_ffma(0x1.111d6ap-7f, lar_red_vx2_1, -0x1.3ac238p-12f);
        tmp24 = __builtin_k1_ffma(-0x1.555556p-3f, lar_red_vx2_1, pa_4);
        lar_poly_sin = lar_red_vx2_1 * tmp24;
        tmp25 =  - lar_tab_cos_hi;
        tmp26 = __builtin_k1_fdma(lar_tab_sin, tmp25, lar_poly_sin, lar_poly_cos);
        tmp27 = __builtin_k1_ffma(tmp26, tmp22, 0.5f);
        promote5 = tmp27;
        tmp28 = __builtin_k1_ffmad(tmp20, promote4, promote5);
        lar_cos_eval_d = tmp28;
        return lar_cos_eval_d;
    } else {
        float tmp6;
        float red_vx2_1;
        float poly_sin;
        double promote1;
        double red_vx_ext;
        double tmp9;
        float tmp8;
        float red_vx_hi;
        float tmp5;
        float tmp4;
        float tmp7;
        float red_vx2_;
        float tmp1;
        double tmp3;
        double tmp2;
        float tmp;
        double promote;
        int32_t offset_k;
        float cos_eval_d;
        double tab_sin_ext;
        float red_vx_lo_sub;
        double tab_cos_lo;
        float red_vx;
        float poly_cos;
        float tab_cos_hi;
        float red_vx3_;
        float tab_sin;
        float fk;
        int32_t k;
        int32_t modk;
        double tmp10;
        
        tmp = x * 0x1.45f306p2f;
        k = __builtin_k1_fixed(_K1_FPU_NEAREST_EVEN, tmp, 0);
        offset_k = k + INT32_C(24);
        modk = offset_k & INT32_C(31);
        tab_cos_lo = kml_sin_f2_f_cos_table_ext[modk];
        tab_sin_ext = kml_sin_f2_f_sin_table_ext[modk];
        fk = k;
        red_vx_hi = __builtin_k1_ffms(x, 0x1.921f8p-3f, fk);
        tmp1 =  - red_vx_hi;
        promote = tmp1;
        red_vx_lo_sub = 0x1.aa2216p-22f * fk;
        promote1 = red_vx_lo_sub;
        red_vx_ext = promote + promote1;
        tmp2 = __builtin_k1_ffmad(tab_cos_lo, red_vx_ext, tab_sin_ext);
        red_vx = __builtin_k1_ffms(red_vx_hi, 0x1.aa2216p-22f, fk);
        tmp3 = red_vx;
        tab_cos_hi = kml_sin_f2_f_cos_table_hi[modk][INT32_C(0)];
        tmp4 = tab_cos_hi * red_vx;
        tab_sin = kml_sin_f2_f_sin_table[modk][INT32_C(0)];
        red_vx2_ = red_vx * red_vx;
        red_vx3_ = red_vx * red_vx2_;
        poly_cos = red_vx3_ * 0x1.555554p-5f;
        red_vx2_1 = red_vx * red_vx;
        tmp5 = __builtin_k1_ffma(-0x1.555556p-3f, red_vx2_1, 0x1.111d6ap-7f);
        poly_sin = red_vx2_1 * tmp5;
        tmp6 =  - tab_cos_hi;
        tmp7 = __builtin_k1_fdma(tab_sin, tmp6, poly_sin, poly_cos);
        tmp8 = __builtin_k1_ffma(tmp7, tmp4, 0.5f);
        tmp9 = tmp8;
        tmp10 = __builtin_k1_ffmsd(tmp2, tmp3, tmp9);
        cos_eval_d = tmp10;
        return cos_eval_d;
    }
}
