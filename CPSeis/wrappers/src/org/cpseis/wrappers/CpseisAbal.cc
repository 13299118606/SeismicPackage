//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisAbal.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define abal_wrap_create             abal_wrap_create_
#define abal_wrap_delete             abal_wrap_delete_
#define abal_wrap_update             abal_wrap_update_
#define abal_wrap_wrapup             abal_wrap_wrapup_
#define abal_wrap_oneset             abal_wrap_oneset_
#define abal_wrap_twosets            abal_wrap_twosets_
#elif NEED_CAPITALS
#define abal_wrap_create             ABAL_WRAP_CREATE
#define abal_wrap_delete             ABAL_WRAP_DELETE
#define abal_wrap_update             ABAL_WRAP_UPDATE
#define abal_wrap_wrapup             ABAL_WRAP_WRAPUP
#define abal_wrap_oneset             ABAL_WRAP_ONESET
#define abal_wrap_twosets            ABAL_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   abal_wrap_create;
    CpseisBase::ModuleDestroy  abal_wrap_delete;
    CpseisBase::ModuleUpdate   abal_wrap_update;
    CpseisBase::ModuleWrapup   abal_wrap_wrapup;
    CpseisBase::ModuleOneset   abal_wrap_oneset;
    CpseisBase::ModuleTwosets  abal_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisAbal::CpseisAbal() : CpseisBase ("ABAL",
                                       abal_wrap_create,
                                       abal_wrap_delete,
                                       abal_wrap_update,
                                       abal_wrap_wrapup,
                                       abal_wrap_oneset,
                                       abal_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//