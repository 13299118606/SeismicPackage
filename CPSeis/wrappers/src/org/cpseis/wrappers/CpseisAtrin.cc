//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisAtrin.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define atrin_wrap_create             atrin_wrap_create_
#define atrin_wrap_delete             atrin_wrap_delete_
#define atrin_wrap_update             atrin_wrap_update_
#define atrin_wrap_wrapup             atrin_wrap_wrapup_
#define atrin_wrap_oneset             atrin_wrap_oneset_
#define atrin_wrap_twosets            atrin_wrap_twosets_
#elif NEED_CAPITALS
#define atrin_wrap_create             ATRIN_WRAP_CREATE
#define atrin_wrap_delete             ATRIN_WRAP_DELETE
#define atrin_wrap_update             ATRIN_WRAP_UPDATE
#define atrin_wrap_wrapup             ATRIN_WRAP_WRAPUP
#define atrin_wrap_oneset             ATRIN_WRAP_ONESET
#define atrin_wrap_twosets            ATRIN_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   atrin_wrap_create;
    CpseisBase::ModuleDestroy  atrin_wrap_delete;
    CpseisBase::ModuleUpdate   atrin_wrap_update;
    CpseisBase::ModuleWrapup   atrin_wrap_wrapup;
    CpseisBase::ModuleOneset   atrin_wrap_oneset;
    CpseisBase::ModuleTwosets  atrin_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisAtrin::CpseisAtrin() : CpseisBase ("ATRIN",
                                       atrin_wrap_create,
                                       atrin_wrap_delete,
                                       atrin_wrap_update,
                                       atrin_wrap_wrapup,
                                       atrin_wrap_oneset,
                                       atrin_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//