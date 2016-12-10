/* Include files */

#include "simu_cgxe.h"
#include "m_ccjXyiyL6tDQItZsOIsYaH.h"

unsigned int cgxe_simu_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1810777730 &&
      ssGetChecksum1(S) == 3507188704 &&
      ssGetChecksum2(S) == 4070437138 &&
      ssGetChecksum3(S) == 3918811270) {
    method_dispatcher_ccjXyiyL6tDQItZsOIsYaH(S, method, data);
    return 1;
  }

  return 0;
}
