/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fj_k_matF.c
 *
 * Code generation for function 'fj_k_matF'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "fj_k_matF.h"

/* Function Definitions */
void fj_k_matF(const emlrtStack *sp, const real_T in1[34], const real_T in2[36],
               real_T s, real_T fj_k_mat[324])
{
  real_T t2;
  real_T a;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t14_tmp_tmp;
  real_T t16;
  real_T t27;
  (void)sp;
  (void)in2;
  (void)s;

  /* FJ_K_MATF */
  /*     FJ_K_MAT = FJ_K_MATF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 00:06:24 */
  t2 = 1.0 / in1[33];
  a = muDoubleScalarCos(in1[20]);
  t4 = 1.0 / in1[4];
  t5 = in1[2] * in1[2];
  t6 = in1[3] * in1[3];
  t9 = in1[18] * in1[18];
  t10 = muDoubleScalarSin(in1[20]);
  t11 = 1.0 / (t10 * t10);
  t14_tmp_tmp = in1[33] * in1[33];
  a = t14_tmp_tmp * (a * a);
  t16 = t2 * (t5 - t6) - t9 * t11 * (a - 1.0) * 6.0;
  t27 = 1.0 / t14_tmp_tmp * (t5 * t5 - t6 * t6) + t9 * t9 * (1.0 /
    muDoubleScalarPower(t10, 4.0)) * ((a - 1.0) * (a - 1.0)) * 6.0;
  t6 = t27 * 3.1415926535897931 / 4.0 - t2 * t9 * t11 * (a - 1.0) * (in1[19] *
    in1[19]) * 3.1415926535897931 * 3.0;
  t10 = -in1[1] * t2 * t4 * t16 * 3.1415926535897931;
  fj_k_mat[0] = t10;
  memset(&fj_k_mat[1], 0, 18U * sizeof(real_T));
  fj_k_mat[19] = t10;
  memset(&fj_k_mat[20], 0, 18U * sizeof(real_T));
  t14_tmp_tmp = in1[1] * t2 * t4;
  a = t14_tmp_tmp * t16 * 3.1415926535897931 * -3.0;
  fj_k_mat[38] = a;
  memset(&fj_k_mat[39], 0, 18U * sizeof(real_T));
  t5 = t14_tmp_tmp * t6 * -3.0;
  fj_k_mat[57] = t5;
  memset(&fj_k_mat[58], 0, 18U * sizeof(real_T));
  fj_k_mat[76] = in1[1] * t2 * t4 * t6 * -3.0;
  memset(&fj_k_mat[77], 0, 18U * sizeof(real_T));
  t14_tmp_tmp = t14_tmp_tmp * t27 * 3.1415926535897931 * -0.5;
  fj_k_mat[95] = t14_tmp_tmp;
  memset(&fj_k_mat[96], 0, 18U * sizeof(real_T));
  fj_k_mat[114] = t10;
  memset(&fj_k_mat[115], 0, 18U * sizeof(real_T));
  fj_k_mat[133] = t10;
  memset(&fj_k_mat[134], 0, 18U * sizeof(real_T));
  fj_k_mat[152] = a;
  memset(&fj_k_mat[153], 0, 18U * sizeof(real_T));
  fj_k_mat[171] = t5;
  memset(&fj_k_mat[172], 0, 18U * sizeof(real_T));
  fj_k_mat[190] = in1[1] * t2 * t4 * t6 * -3.0;
  memset(&fj_k_mat[191], 0, 18U * sizeof(real_T));
  fj_k_mat[209] = t14_tmp_tmp;
  memset(&fj_k_mat[210], 0, 18U * sizeof(real_T));
  fj_k_mat[228] = t10;
  memset(&fj_k_mat[229], 0, 18U * sizeof(real_T));
  fj_k_mat[247] = t10;
  memset(&fj_k_mat[248], 0, 18U * sizeof(real_T));
  fj_k_mat[266] = a;
  memset(&fj_k_mat[267], 0, 18U * sizeof(real_T));
  fj_k_mat[285] = t5;
  memset(&fj_k_mat[286], 0, 18U * sizeof(real_T));
  fj_k_mat[304] = in1[1] * t2 * t4 * t6 * -3.0;
  memset(&fj_k_mat[305], 0, 18U * sizeof(real_T));
  fj_k_mat[323] = t14_tmp_tmp;
}

/* End of code generation (fj_k_matF.c) */
