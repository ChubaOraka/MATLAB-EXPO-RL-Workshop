/*
 * File: TrainedPolicy_private.h
 *
 * Code generated for Simulink model 'TrainedPolicy'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Fri Nov 14 21:53:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TrainedPolicy_private_h_
#define TrainedPolicy_private_h_
#include "rtwtypes.h"
#include "TrainedPolicy_types.h"
#include "TrainedPolicy.h"

extern void microKernel1783343928409562993(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void microKernel6338851115173922237(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void microKernel11345392019352796108(int32_T K, const real32_T *A,
  int32_T LDA, const real32_T *B, real32_T *C);
extern void macroKernel17094083016026593088(int32_T M, int32_T K, int32_T N,
  const real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
  int32_T LDC);
extern void matrixMultiply17094083016026593088(int32_T M, int32_T K, int32_T N,
  int32_T blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A,
  const real32_T *B, real32_T *C);
extern void macroKernel2953286246676416244(int32_T M, int32_T K, int32_T N,
  const real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
  int32_T LDC);
extern void matrixMultiply2953286246676416244(int32_T M, int32_T K, int32_T N,
  int32_T blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A,
  const real32_T *B, real32_T *C);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);

#endif                                 /* TrainedPolicy_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
