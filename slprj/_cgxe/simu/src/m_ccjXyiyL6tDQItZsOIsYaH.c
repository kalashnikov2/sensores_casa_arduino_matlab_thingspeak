/* Include files */

#include "modelInterface.h"
#include "m_ccjXyiyL6tDQItZsOIsYaH.h"

/* Type Definitions */

/* Named Constants */
#define SlaveAddress_                  (92.0)
#define RegisterAddressEnable_         (false)
#define RegisterAddress_               (32.0)
#define Datalength_                    (1.0)
#define SampleTime_                    (1.0)

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance);
static codertarget_arduinobase_internal_arduinoI2CRead emlrt_marshallIn
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const mxArray
   *b_sysobj, const char_T *identifier);
static codertarget_arduinobase_internal_arduinoI2CRead b_emlrt_marshallIn
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const mxArray *u,
   const emlrtMsgIdentifier *parentId);
static int32_T c_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier);
static boolean_T e_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *st);
static const mxArray *message(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static int32_T f_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static boolean_T g_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance)
{
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  codertarget_arduinobase_internal_arduinoI2CRead *obj;
  int32_T i0;
  const mxArray *y;
  char_T u[51];
  static char_T cv0[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv2[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[5];
  static char_T cv1[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv3[2] = { 1, 5 };

  init_simulink_io_address(moduleInstance);
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
}

static void cgxe_mdl_initialize(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduinoI2CRead *obj;
  int32_T i1;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv3[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv6[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv4[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv7[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv2[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 8; i1++) {
      c_u[i1] = cv3[i1];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag && (moduleInstance->sysobj.isInitialized == 2)) {
    for (i1 = 0; i1 < 45; i1++) {
      b_u[i1] = cv2[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    for (i1 = 0; i1 < 5; i1++) {
      d_u[i1] = cv4[i1];
    }

    d_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &d_u[0]);
    emlrtAssign(&d_y, m1);
    error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
          &emlrtMCI);
  }
}

static void cgxe_mdl_outputs(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduinoI2CRead *obj;
  int32_T i2;
  const mxArray *y;
  char_T u[45];
  static char_T cv5[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[51];
  static char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv9[2] = { 1, 51 };

  const mxArray *c_y;
  char_T c_u[4];
  static char_T cv7[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv10[2] = { 1, 4 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv8[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv11[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv5[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 4; i2++) {
      c_u[i2] = cv7[i2];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (i2 = 0; i2 < 51; i2++) {
        b_u[i2] = cv6[i2];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m2, &b_u
        [0]);
      emlrtAssign(&b_y, m2);
      for (i2 = 0; i2 < 5; i2++) {
        d_u[i2] = cv8[i2];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    obj->isInitialized = 1;
  }

  *moduleInstance->b_y0 = 0U;
}

static void cgxe_mdl_update(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance)
{
  codertarget_arduinobase_internal_arduinoI2CRead *obj;
  int32_T i3;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv9[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv10[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv14[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv11[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv15[2] = { 1, 7 };

  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      u[i3] = cv9[i3];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i3 = 0; i3 < 8; i3++) {
      c_u[i3] = cv10[i3];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m3, &c_u[0]);
    emlrtAssign(&c_y, m3);
    error(moduleInstance, message(moduleInstance, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        b_u[i3] = cv9[i3];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &b_u
        [0]);
      emlrtAssign(&b_y, m3);
      for (i3 = 0; i3 < 7; i3++) {
        d_u[i3] = cv11[i3];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, b_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m4;
  const mxArray *d_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m4);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  emlrtSetCell(y, 0, b_y);
  d_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&d_y, m4);
  emlrtSetCell(y, 1, d_y);
  emlrtAssign(&st, y);
  return st;
}

static codertarget_arduinobase_internal_arduinoI2CRead emlrt_marshallIn
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const mxArray
   *b_sysobj, const char_T *identifier)
{
  codertarget_arduinobase_internal_arduinoI2CRead y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_arduinobase_internal_arduinoI2CRead b_emlrt_marshallIn
  (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const mxArray *u,
   const emlrtMsgIdentifier *parentId)
{
  codertarget_arduinobase_internal_arduinoI2CRead y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "isInitialized" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, 1,
    fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = c_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "isInitialized")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T c_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = f_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T e_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = g_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  moduleInstance->sysobj = emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetCell(moduleInstance->emlrtRootTLSGlobal, "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = d_emlrt_marshallIn(moduleInstance,
    emlrtAlias(emlrtGetCell(moduleInstance->emlrtRootTLSGlobal,
    "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m5, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static int32_T f_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T g_emlrt_marshallIn(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_ccjXyiyL6tDQItZsOIsYaH
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S);
  moduleInstance->b_y0 = (uint16_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
}

/* CGXE Glue Code */
static void mdlOutputs_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S, int_T tid)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S, int_T tid)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S)
{
  InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *moduleInstance =
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH *)calloc(1, sizeof
    (InstanceStruct_ccjXyiyL6tDQItZsOIsYaH));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_ccjXyiyL6tDQItZsOIsYaH);
  ssSetmdlInitializeConditions(S, mdlInitialize_ccjXyiyL6tDQItZsOIsYaH);
  ssSetmdlUpdate(S, mdlUpdate_ccjXyiyL6tDQItZsOIsYaH);
  ssSetmdlTerminate(S, mdlTerminate_ccjXyiyL6tDQItZsOIsYaH);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S)
{
}

void method_dispatcher_ccjXyiyL6tDQItZsOIsYaH(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_ccjXyiyL6tDQItZsOIsYaH(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_ccjXyiyL6tDQItZsOIsYaH(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_ccjXyiyL6tDQItZsOIsYaH(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_ccjXyiyL6tDQItZsOIsYaH(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: ccjXyiyL6tDQItZsOIsYaH.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_ccjXyiyL6tDQItZsOIsYaH_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.arduinobase.internal.arduinoI2CRead");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_ccjXyiyL6tDQItZsOIsYaH_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.arduinobase.internal.arduinoI2CRead");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
