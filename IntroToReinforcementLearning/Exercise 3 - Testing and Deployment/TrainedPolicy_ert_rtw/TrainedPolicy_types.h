/*
 * File: TrainedPolicy_types.h
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

#ifndef TrainedPolicy_types_h_
#define TrainedPolicy_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLAB Function: '<S1>/PolicyWrapper' */
#ifndef struct_tag_O33VGH4yQOoDpoKeNPSteF
#define struct_tag_O33VGH4yQOoDpoKeNPSteF

struct tag_O33VGH4yQOoDpoKeNPSteF
{
  real_T f1[6];
};

#endif                                 /* struct_tag_O33VGH4yQOoDpoKeNPSteF */

#ifndef typedef_cell_wrap_12_TrainedPolicy_T
#define typedef_cell_wrap_12_TrainedPolicy_T

typedef struct tag_O33VGH4yQOoDpoKeNPSteF cell_wrap_12_TrainedPolicy_T;

#endif                                /* typedef_cell_wrap_12_TrainedPolicy_T */

#ifndef struct_tag_xviDWIkgrKK5ptWTEU1YkF
#define struct_tag_xviDWIkgrKK5ptWTEU1YkF

struct tag_xviDWIkgrKK5ptWTEU1YkF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_xviDWIkgrKK5ptWTEU1YkF */

#ifndef typedef_rl_codegen_model_DLNetworkMod_T
#define typedef_rl_codegen_model_DLNetworkMod_T

typedef struct tag_xviDWIkgrKK5ptWTEU1YkF rl_codegen_model_DLNetworkMod_T;

#endif                             /* typedef_rl_codegen_model_DLNetworkMod_T */

#ifndef struct_tag_PXCXydkyh2hrRN5O9V25uH
#define struct_tag_PXCXydkyh2hrRN5O9V25uH

struct tag_PXCXydkyh2hrRN5O9V25uH
{
  real32_T Data[6];
};

#endif                                 /* struct_tag_PXCXydkyh2hrRN5O9V25uH */

#ifndef typedef_dlarray_1_TrainedPolicy_T
#define typedef_dlarray_1_TrainedPolicy_T

typedef struct tag_PXCXydkyh2hrRN5O9V25uH dlarray_1_TrainedPolicy_T;

#endif                                 /* typedef_dlarray_1_TrainedPolicy_T */

#ifndef struct_tag_Jbh7QZVMFDyi2OIQtpEALD
#define struct_tag_Jbh7QZVMFDyi2OIQtpEALD

struct tag_Jbh7QZVMFDyi2OIQtpEALD
{
  cell_wrap_12_TrainedPolicy_T UpperLimits_;
  cell_wrap_12_TrainedPolicy_T LowerLimits_;
};

#endif                                 /* struct_tag_Jbh7QZVMFDyi2OIQtpEALD */

#ifndef typedef_c_rl_codegen_policy_internal__T
#define typedef_c_rl_codegen_policy_internal__T

typedef struct tag_Jbh7QZVMFDyi2OIQtpEALD c_rl_codegen_policy_internal__T;

#endif                             /* typedef_c_rl_codegen_policy_internal__T */

#ifndef struct_tag_xJ56zsl0n1nHnOlRPKSSu
#define struct_tag_xJ56zsl0n1nHnOlRPKSSu

struct tag_xJ56zsl0n1nHnOlRPKSSu
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  rl_codegen_model_DLNetworkMod_T *Model_;
  c_rl_codegen_policy_internal__T ActionBounder_;
};

#endif                                 /* struct_tag_xJ56zsl0n1nHnOlRPKSSu */

#ifndef typedef_c_rl_codegen_policy_rlDetermi_T
#define typedef_c_rl_codegen_policy_rlDetermi_T

typedef struct tag_xJ56zsl0n1nHnOlRPKSSu c_rl_codegen_policy_rlDetermi_T;

#endif                             /* typedef_c_rl_codegen_policy_rlDetermi_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_TrainedPolicy_T RT_MODEL_TrainedPolicy_T;

#endif                                 /* TrainedPolicy_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
