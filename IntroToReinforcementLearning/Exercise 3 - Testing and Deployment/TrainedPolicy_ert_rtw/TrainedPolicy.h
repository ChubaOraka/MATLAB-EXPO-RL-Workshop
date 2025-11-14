/*
 * File: TrainedPolicy.h
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

#ifndef TrainedPolicy_h_
#define TrainedPolicy_h_
#ifndef TrainedPolicy_COMMON_INCLUDES_
#define TrainedPolicy_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* TrainedPolicy_COMMON_INCLUDES_ */

#include "TrainedPolicy_types.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  c_rl_codegen_policy_rlDetermi_T policy;/* '<S1>/PolicyWrapper' */
  rl_codegen_model_DLNetworkMod_T gobj_1;/* '<S1>/PolicyWrapper' */
  boolean_T policy_not_empty;          /* '<S1>/PolicyWrapper' */
} DW_TrainedPolicy_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T observation[31];              /* '<Root>/observation' */
} ExtU_TrainedPolicy_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T action[6];                    /* '<Root>/action' */
} ExtY_TrainedPolicy_T;

/* Real-time Model Data Structure */
struct tag_RTM_TrainedPolicy_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_TrainedPolicy_T TrainedPolicy_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_TrainedPolicy_T TrainedPolicy_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TrainedPolicy_T TrainedPolicy_Y;

/* Model entry point functions */
extern void TrainedPolicy_initialize(void);
extern void TrainedPolicy_step(void);
extern void TrainedPolicy_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TrainedPolicy_T *const TrainedPolicy_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TrainedPolicy'
 * '<S1>'   : 'TrainedPolicy/Policy'
 * '<S2>'   : 'TrainedPolicy/Policy/PolicyWrapper'
 */
#endif                                 /* TrainedPolicy_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
