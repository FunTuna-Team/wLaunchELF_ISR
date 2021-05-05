#ifdef LANG_SPA
#define CUSTOM_LNG
#include "LANG/SPA.LNG"
#endif

#ifdef LANG_ENG
#define CUSTOM_LNG
#include "LANG/ENG.LNG"
#endif

#ifndef CUSTOM_LNG
#include "LANG/ENG.LNG"
#endif

