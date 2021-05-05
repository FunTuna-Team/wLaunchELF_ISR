#ifdef LANG_SPA
#define CUSTOM_LNG
#include "Lang/SPA.LNG"
#endif

#ifdef LANG_ENG
#define CUSTOM_LNG
#include "Lang/ENG.LNG"
#endif

#ifndef CUSTOM_LNG
#include "Lang/ENG.LNG"
#endif
