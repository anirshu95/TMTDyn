/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF94.c
 *
 * Code generation for function 'sprdmpF94'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF94.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo nm_emlrtRSI = { 41, /* lineNo */
  "sprdmpF94",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF94.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 47, /* lineNo */
  "sprdmpF94",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF94.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 77, /* lineNo */
  "sprdmpF94",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF94.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 89, /* lineNo */
  "sprdmpF94",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF94.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 298,/* lineNo */
  "sprdmpF94",                         /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF94.m"/* pathName */
};

/* Function Definitions */
void sprdmpF94(const emlrtStack *sp, const real_T in1[6], const real_T in2[206],
               real_T out1[546], real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t233;
  real_T t210;
  real_T t15_tmp;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t207;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t24_tmp;
  real_T t25;
  real_T t158;
  real_T t159;
  real_T t27_tmp;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t44_tmp;
  real_T t191;
  real_T t32;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t46_tmp;
  real_T t46;
  real_T t48;
  real_T t49;
  real_T t50_tmp;
  real_T t188;
  real_T t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t237;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t62_tmp;
  real_T t63_tmp;
  real_T t64_tmp;
  real_T t65_tmp;
  real_T a_tmp;
  real_T t71;
  real_T t73;
  real_T t75;
  real_T b_a_tmp;
  real_T c_a_tmp;
  real_T d_a_tmp;
  real_T a;
  real_T b_a;
  real_T t83;
  real_T t87;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t107_tmp;
  real_T t107;
  real_T t111;
  real_T t116;
  real_T t117;
  real_T t118;
  real_T t122;
  real_T t123;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128_tmp;
  real_T b_t128_tmp;
  real_T t128;
  real_T t137_tmp;
  real_T t137;
  real_T t140;
  real_T t150;
  real_T t154;
  real_T t155;
  real_T t156;
  real_T t157;
  real_T t170;
  real_T t173;
  real_T t182;
  real_T t184;
  real_T t187;
  real_T t190;
  real_T t193;
  real_T t197;
  real_T t201;
  real_T t209;
  real_T t213;
  real_T t214;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF94 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF94(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:25:51 */
  t2 = in2[4] * in2[4];
  t3 = in2[5] * in2[5];
  t4 = in2[3] * in2[3];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &nm_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[5] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[3] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &om_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t233 = in2[1] - in2[7];
  t210 = in2[2] - in2[8];
  t15_tmp = in2[0] - in2[6];
  t17_tmp = in2[3] * t12;
  t17 = (-in2[2] + in2[8]) + t17_tmp * t233;
  t19 = t233 + t17_tmp * t210;
  t20 = t6 * t233;
  t207 = in2[3] * t210;
  t22_tmp = in2[3] * t233;
  t23_tmp = t6 * t210;
  t24_tmp = in2[4] * t15_tmp;
  t25 = t6 * t15_tmp;
  t158 = in2[5] * t233;
  t159 = in2[4] * t210;
  t27_tmp = t25 + t158;
  t27 = t27_tmp - t159;
  t29_tmp = in2[4] * t12;
  t29 = (-in2[0] + in2[6]) + t29_tmp * t210;
  t31 = t210 + t29_tmp * t15_tmp;
  t44_tmp = in2[5] * t15_tmp;
  t191 = t20 + t207;
  t32 = t191 - t44_tmp;
  t34 = (-t22_tmp + t23_tmp) + t24_tmp;
  t35 = in2[11] * 2.0;
  t36 = in2[3] - in2[9];
  t5 = ((-(in2[9] * in2[9]) - in2[10] * in2[10]) - in2[11] * in2[11]) + 1.0;
  t41 = t5;
  st.site = &sm_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[4] - in2[10];
  t43 = in2[5] - in2[11];
  t46_tmp = in2[5] * t12;
  t46 = t15_tmp + t46_tmp * t233;
  t48 = (-in2[1] + in2[7]) + t46_tmp * t15_tmp;
  t49 = in2[9] * 2.0;
  t50_tmp = in2[4] * t6 * 2.0;
  t188 = in2[3] * in2[4];
  t51_tmp = t188 * 2.0;
  t52_tmp = in2[3] * in2[5];
  t52 = t52_tmp * 2.0;
  t237 = in2[4] * in2[5];
  t53_tmp = t237 * 2.0;
  st.site = &tm_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[4] * 2.0;
  t5 = in1[4] / 2.0;
  t58 = muDoubleScalarCos(t5);
  t59 = t58 * 0.036;
  t60 = muDoubleScalarSin(t5);
  t5 = t60 * 0.036;
  t62_tmp = in2[3] * t15_tmp;
  t63_tmp = in2[4] * t233;
  t64_tmp = in2[5] * t210;
  t65_tmp = (t62_tmp + t63_tmp) + t64_tmp;
  a_tmp = t58 * t58 * 2.635724972E-14 + t60 * t60 * 2.635724972E-14;
  t71 = t59 - t60 * 0.162;
  t73 = t59 - t60 * 0.077;
  t75 = t5 + t58 * 0.162;
  t5 += t58 * 0.077;
  b_a_tmp = t58 * t71 + t60 * t5;
  c_a_tmp = t58 * t73;
  d_a_tmp = t60 * t75;
  a = (b_a_tmp - c_a_tmp) - d_a_tmp;
  b_a = ((t58 * t75 - t58 * t5) + t60 * t71) - t60 * t73;
  t83 = t6 - t41;
  t73 = t237 * t12;
  t87 = (((((t23_tmp + t24_tmp) + t6 * t31) + t29_tmp * t27) + t73 * t233) -
         in2[4] * t29) - t22_tmp * 2.0;
  t91 = (((((-t20 + t44_tmp) + t6 * t48) + in2[5] * t46) + t46_tmp * t27) - t207
         * 2.0) - t73 * t210;
  t92 = (t8 + t11) - 1.0;
  t93 = t7 + t51_tmp;
  t94 = t50_tmp - t52;
  t95 = in2[5] * t17;
  t96 = t17_tmp * t27;
  t107_tmp = in2[4] * t19;
  t107 = ((t65_tmp - t95) - t96) + t107_tmp;
  t111 = muDoubleScalarPower(muDoubleScalarAbs((((((((t87 * in2[107] + t91 *
    in2[108]) + t92 * in2[103]) + t94 * in2[105]) + t93 * in2[110]) - t92 * in2
    [109]) - t93 * in2[104]) - t94 * in2[111]) - t107 * in2[106]), in1[1] - 1.0);
  t116 = t6 * t17;
  t117 = in2[3] * t19;
  t118 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t122 = ((((t27_tmp + t6 * t46) + t46_tmp * t32) + t5 * t210) - in2[5] * t48) -
    t159 * 2.0;
  t123 = (t8 + t10) - 1.0;
  t124 = t9 + t53_tmp;
  t125 = t7 - t51_tmp;
  t126 = in2[3] * t29;
  t127 = t29_tmp * t32;
  t128_tmp = t24_tmp * 2.0;
  b_t128_tmp = t5 * t15_tmp;
  t128 = (((((t22_tmp - t23_tmp) + t116) + t117) + t118) - t128_tmp) -
    b_t128_tmp;
  t137_tmp = in2[5] * t31;
  t137 = ((t65_tmp - t126) - t127) + t137_tmp;
  t140 = muDoubleScalarPower(muDoubleScalarAbs((((((((t128 * in2[106] + t122 *
    in2[108]) + t123 * in2[104]) + t125 * in2[103]) + t124 * in2[111]) - t123 *
    in2[110]) - t124 * in2[105]) - t125 * in2[109]) - t137 * in2[107]), in1[1] -
    1.0);
  t59 = t188 * t12;
  t150 = ((((t191 + t6 * t19) + t17_tmp * t34) + t59 * t15_tmp) - in2[3] * t17)
    - t44_tmp * 2.0;
  t154 = (((((-t25 + t159) + t6 * t29) + in2[4] * t31) + t29_tmp * t34) - t158 *
          2.0) - t59 * t233;
  t155 = (t10 + t11) - 1.0;
  t156 = t50_tmp + t52;
  t157 = t9 - t53_tmp;
  t158 = in2[4] * t48;
  t159 = t46_tmp * t34;
  t15_tmp = in2[3] * t46;
  t170 = ((t65_tmp - t158) - t159) + t15_tmp;
  t173 = muDoubleScalarPower(muDoubleScalarAbs((((((((t150 * in2[106] + t154 *
    in2[107]) + t155 * in2[105]) + t157 * in2[104]) + t156 * in2[109]) - t155 *
    in2[111]) - t156 * in2[103]) - t157 * in2[110]) - t170 * in2[108]), in1[1] -
    1.0);
  t17 = t17_tmp * t36 * 2.0;
  t19 = t29_tmp * t36 * 2.0;
  t29 = in2[10] * 2.0;
  t44_tmp = t5 * 2.0;
  t182 = (t29 + t46_tmp * t36 * 2.0) - t44_tmp;
  t184 = t55 + in2[3] * in2[9] * t54 * 2.0;
  t5 = in2[5] * 2.0;
  t187 = t5 + in2[3] * in2[10] * t54 * 2.0;
  t188 = in2[3] * in2[11] * t54 * 2.0;
  t27_tmp = t59 * 2.0;
  t190 = (t35 - t19) + t27_tmp;
  t191 = t41 * 2.0;
  t237 = t4 * t12 * 2.0;
  t193 = (-t17 + t191) + t237;
  t197 = t56 - t188;
  t201 = muDoubleScalarPower(muDoubleScalarAbs(((((t193 * in2[106] + t190 * in2
    [107]) + t197 * in2[114]) - t182 * in2[108]) - t184 * in2[112]) - t187 *
    in2[113]), in1[1] - 1.0);
  t58 = t29_tmp * t42 * 2.0;
  t20 = t17_tmp * t42 * 2.0;
  t207 = t46_tmp * t42 * 2.0;
  t209 = t55 + in2[4] * in2[10] * t54 * 2.0;
  t210 = in2[4] * in2[9] * t54 * 2.0;
  t31 = in2[3] * 2.0;
  t213 = t31 + in2[4] * in2[11] * t54 * 2.0;
  t214 = (t35 - t27_tmp) + t20;
  t71 = t2 * t12 * 2.0;
  t2 = (t191 - t58) + t71;
  t24_tmp = t73 * 2.0;
  t4 = (t49 - t207) + t24_tmp;
  t48 = t5 - t210;
  t46 = muDoubleScalarPower(muDoubleScalarAbs(((((t2 * in2[107] + t4 * in2[108])
    + t48 * in2[112]) - t214 * in2[106]) - t209 * in2[113]) - t213 * in2[114]),
    in1[1] - 1.0);
  t60 = t46_tmp * t43 * 2.0;
  t59 = t17_tmp * t43 * 2.0;
  t75 = t29_tmp * t43 * 2.0;
  t233 = t55 + in2[5] * in2[11] * t54 * 2.0;
  t25 = t56 + in2[5] * in2[9] * t54 * 2.0;
  t73 = in2[5] * in2[10] * t54 * 2.0;
  out1[0] = t92;
  out1[1] = -t7 - t51_tmp;
  out1[2] = t50_tmp - in2[3] * in2[5] * 2.0;
  out1[3] = ((((t95 + t96) - t63_tmp) - t62_tmp) - t64_tmp) - t107_tmp;
  out1[4] = t87;
  out1[5] = t91;
  out1[6] = (-t8 - t11) + 1.0;
  out1[7] = t93;
  out1[8] = -t50_tmp + t52;
  memset(&out1[9], 0, 82U * sizeof(real_T));
  out1[91] = t7 - in2[3] * in2[4] * 2.0;
  out1[92] = t123;
  out1[93] = -t9 - t53_tmp;
  out1[94] = (((((t22_tmp + t116) + t117) + t118) - t128_tmp) - t23_tmp) -
    b_t128_tmp;
  out1[95] = ((((t126 + t127) - t63_tmp) - t62_tmp) - t64_tmp) - t137_tmp;
  out1[96] = t122;
  out1[97] = -t7 + t51_tmp;
  out1[98] = (-t8 - t10) + 1.0;
  out1[99] = t124;
  memset(&out1[100], 0, 82U * sizeof(real_T));
  out1[182] = t52_tmp * -2.0 - t50_tmp;
  out1[183] = t9 - in2[4] * in2[5] * 2.0;
  out1[184] = t155;
  out1[185] = t150;
  out1[186] = t154;
  out1[187] = ((((t158 + t159) - t63_tmp) - t62_tmp) - t64_tmp) - t15_tmp;
  out1[188] = t156;
  out1[189] = -t9 + t53_tmp;
  out1[190] = (-t10 - t11) + 1.0;
  memset(&out1[191], 0, 85U * sizeof(real_T));
  out1[276] = (t41 * -2.0 + t17) - t237;
  out1[277] = (-t35 + t19) - t27_tmp;
  out1[278] = t182;
  out1[279] = 0.0;
  out1[280] = 0.0;
  out1[281] = 0.0;
  out1[282] = t184;
  out1[283] = t187;
  out1[284] = -t56 + t188;
  memset(&out1[285], 0, 82U * sizeof(real_T));
  out1[367] = (t35 + t20) - t27_tmp;
  out1[368] = (t41 * -2.0 + t58) - t71;
  out1[369] = (-t49 + t207) - t24_tmp;
  out1[370] = 0.0;
  out1[371] = 0.0;
  out1[372] = 0.0;
  out1[373] = in2[5] * -2.0 + t210;
  out1[374] = t209;
  out1[375] = t213;
  memset(&out1[376], 0, 82U * sizeof(real_T));
  out1[458] = (in2[10] * -2.0 + t59) - t44_tmp;
  out1[459] = (t49 + t75) - t24_tmp;
  t5 = t3 * t12 * 2.0;
  out1[460] = (t41 * -2.0 + t60) - t5;
  out1[461] = 0.0;
  out1[462] = 0.0;
  out1[463] = 0.0;
  out1[464] = t25;
  out1[465] = in2[3] * -2.0 + t73;
  out1[466] = t233;
  memset(&out1[467], 0, 79U * sizeof(real_T));
  t237 = (t29 + t44_tmp) - t59;
  t58 = (t191 - t60) + t5;
  t71 = (t49 - t24_tmp) + t75;
  t75 = t31 - t73;
  t60 = muDoubleScalarPower(muDoubleScalarAbs(((((t58 * in2[108] + t237 * in2
    [106]) + t75 * in2[113]) - t71 * in2[107]) - t233 * in2[114]) - t25 * in2
    [112]), in1[1] - 1.0);
  t5 = (a_tmp * a_tmp + a * a) + b_a * b_a;
  st.site = &gn_emlrtRSI;
  b_sqrt(&st, &t5);
  out2[0] = in1[0] * ((((((b_a_tmp + in2[5] * t32) - in2[4] * t34) + in2[3] *
    t65_tmp) + t6 * t27) - c_a_tmp) - d_a_tmp) * 0.00026666666666666668;
  out2[1] = in1[0] * ((((a_tmp + in2[5] * t27) - in2[3] * t34) - in2[4] *
                       t65_tmp) - t6 * t32) * -0.00026666666666666668;
  out2[2] = in1[0] * ((((t5 + in2[4] * t27) - in2[3] * t32) + in2[5] * t65_tmp)
                      + t6 * t34) * 0.0008;
  out2[3] = in1[0] * (((in2[4] * t43 * 2.0 - in2[5] * t42 * 2.0) + in2[3] * t83 *
                       2.0) - t6 * t36 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[5] * t36 * 2.0 - in2[3] * t43 * 2.0) + in2[4] * t83 *
                       2.0) - t6 * t42 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[4] * t36 * 2.0 - in2[3] * t42 * 2.0) - in2[5] * t83 *
                       2.0) + t6 * t43 * 2.0) * 4.75111111111111E-9;
  t73 = in1[2] * t92 * t111;
  t59 = in1[2] * t93 * t111;
  t5 = in1[2] * t94 * t111;
  out3[0] = (((((((-in1[2] * t87 * t111 * in2[107] - t73 * in2[103]) + t59 *
                  in2[104]) - in1[2] * t91 * t111 * in2[108]) - t5 * in2[105]) +
               t73 * in2[109]) - t59 * in2[110]) + t5 * in2[111]) + in1[2] *
    t107 * t111 * in2[106];
  t73 = in1[2] * t125 * t140;
  t59 = in1[2] * t124 * t140;
  out3[1] = (((((((-in1[2] * t123 * t140 * in2[104] - t73 * in2[103]) + t59 *
                  in2[105]) - in1[2] * t122 * t140 * in2[108]) + in1[2] * t123 *
                t140 * in2[110]) + t73 * in2[109]) - in1[2] * t128 * t140 * in2
              [106]) - t59 * in2[111]) + in1[2] * t137 * t140 * in2[107];
  t73 = in1[2] * t156 * t173;
  t59 = in1[2] * t155 * t173;
  t5 = in1[2] * t157 * t173;
  out3[2] = (((((((-in1[2] * t150 * t173 * in2[106] + t73 * in2[103]) - t59 *
                  in2[105]) - in1[2] * t154 * t173 * in2[107]) - t5 * in2[104])
               - t73 * in2[109]) + t59 * in2[111]) + t5 * in2[110]) + in1[2] *
    t170 * t173 * in2[108];
  out3[3] = ((((-in1[3] * t182 * t201 * in2[108] - in1[3] * t184 * t201 * in2
                [112]) + in1[3] * t190 * t201 * in2[107]) + in1[3] * t193 * t201
              * in2[106]) - in1[3] * t187 * t201 * in2[113]) + in1[3] * t197 *
    t201 * in2[114];
  out3[4] = ((((-in1[3] * t214 * t46 * in2[106] - in1[3] * t209 * t46 * in2[113])
               + in1[3] * t2 * t46 * in2[107]) - in1[3] * t213 * t46 * in2[114])
             + in1[3] * t4 * t46 * in2[108]) + in1[3] * t48 * t46 * in2[112];
  out3[5] = ((((in1[3] * t237 * t60 * in2[106] - in1[3] * t233 * t60 * in2[114])
               - in1[3] * t25 * t60 * in2[112]) + in1[3] * t58 * t60 * in2[108])
             - in1[3] * t71 * t60 * in2[107]) + in1[3] * t75 * t60 * in2[113];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF94.c) */