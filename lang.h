#ifdef LANG_SPA
#define CUSTOM_LNG
#include "lang/SPA.LNG"
#endif

#ifdef LANG_ENG
#define CUSTOM_LNG
#include "lang/ENG.LNG"
#endif

#ifndef CUSTOM_LNG
#include "lang/ENG.LNG"
#endif
