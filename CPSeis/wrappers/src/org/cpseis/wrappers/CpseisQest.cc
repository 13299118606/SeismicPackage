//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisQest.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define qest_wrap_create             qest_wrap_create_
#define qest_wrap_delete             qest_wrap_delete_
#define qest_wrap_update             qest_wrap_update_
#define qest_wrap_wrapup             qest_wrap_wrapup_
#define qest_wrap_oneset             qest_wrap_oneset_
#define qest_wrap_twosets            qest_wrap_twosets_
#elif NEED_CAPITALS
#define qest_wrap_create             QEST_WRAP_CREATE
#define qest_wrap_delete             QEST_WRAP_DELETE
#define qest_wrap_update             QEST_WRAP_UPDATE
#define qest_wrap_wrapup             QEST_WRAP_WRAPUP
#define qest_wrap_oneset             QEST_WRAP_ONESET
#define qest_wrap_twosets            QEST_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   qest_wrap_create;
    CpseisBase::ModuleDestroy  qest_wrap_delete;
    CpseisBase::ModuleUpdate   qest_wrap_update;
    CpseisBase::ModuleWrapup   qest_wrap_wrapup;
    CpseisBase::ModuleOneset   qest_wrap_oneset;
    CpseisBase::ModuleTwosets  qest_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisQest::CpseisQest() : CpseisBase ("QEST",
                                       qest_wrap_create,
                                       qest_wrap_delete,
                                       qest_wrap_update,
                                       qest_wrap_wrapup,
                                       qest_wrap_oneset,
                                       qest_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//