
#include <stdlib.h> // for NULL

#include <R.h>
#include <Rconfig.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <R_ext/Visibility.h>

#include "rdatetime.h"

/* Define .Call functions */
static const R_CallMethodDef callMethods[] = {

  {"_rdatetime",   (DL_FUNC) &_rdatetime,  0},
  {NULL,                NULL,              0}
};

void attribute_visible R_init_rdatetime(DllInfo *info)
{
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);

  R_useDynamicSymbols(info, FALSE);

  R_forceSymbols(info, TRUE);  // controls visibility
}
