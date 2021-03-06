//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisCc3d.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define cc3d_wrap_create             cc3d_wrap_create_
#define cc3d_wrap_delete             cc3d_wrap_delete_
#define cc3d_wrap_update             cc3d_wrap_update_
#define cc3d_wrap_wrapup             cc3d_wrap_wrapup_
#define cc3d_wrap_oneset             cc3d_wrap_oneset_
#define cc3d_wrap_twosets            cc3d_wrap_twosets_
#elif NEED_CAPITALS
#define cc3d_wrap_create             CC3D_WRAP_CREATE
#define cc3d_wrap_delete             CC3D_WRAP_DELETE
#define cc3d_wrap_update             CC3D_WRAP_UPDATE
#define cc3d_wrap_wrapup             CC3D_WRAP_WRAPUP
#define cc3d_wrap_oneset             CC3D_WRAP_ONESET
#define cc3d_wrap_twosets            CC3D_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   cc3d_wrap_create;
    CpseisBase::ModuleDestroy  cc3d_wrap_delete;
    CpseisBase::ModuleUpdate   cc3d_wrap_update;
    CpseisBase::ModuleWrapup   cc3d_wrap_wrapup;
    CpseisBase::ModuleOneset   cc3d_wrap_oneset;
    CpseisBase::ModuleTwosets  cc3d_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisCc3d::CpseisCc3d() : CpseisBase ("CC3D",
                                       cc3d_wrap_create,
                                       cc3d_wrap_delete,
                                       cc3d_wrap_update,
                                       cc3d_wrap_wrapup,
                                       cc3d_wrap_oneset,
                                       cc3d_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
