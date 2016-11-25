!!------------------------ tfatt_wrap.f90 --------------------------!!
!!------------------------ tfatt_wrap.f90 --------------------------!!
!!------------------------ tfatt_wrap.f90 --------------------------!!

!!!!!!!!!! DO NOT EDIT THIS FILE - it is machine generated !!!!!!!!!!

!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!

      module tfatt_wrap_module
      use tfatt_module
      implicit none
      public

      type :: tfatt_wrap_struct
        type(tfatt_struct),pointer :: obj
      end type tfatt_wrap_struct

      end module tfatt_wrap_module

!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!

      subroutine tfatt_wrap_create (fpoint)  
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(out)   :: fpoint
      type(tfatt_struct)     ,pointer       :: obj           ! local

      nullify (obj)               ! needed for intel compiler.
      call tfatt_create (obj)
      fpoint%obj => obj

      end subroutine tfatt_wrap_create

!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!

      subroutine tfatt_wrap_delete (fpoint)   
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(inout) :: fpoint
      type(tfatt_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call tfatt_delete (obj)
      fpoint%obj => obj

      end subroutine tfatt_wrap_delete

!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!

      subroutine tfatt_wrap_update (fpoint)     
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(inout) :: fpoint
      type(tfatt_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call tfatt_update (obj)

      end subroutine tfatt_wrap_update

!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!

      subroutine tfatt_wrap_wrapup (fpoint)      
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(inout) :: fpoint
      type(tfatt_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call tfatt_wrapup (obj)

      end subroutine tfatt_wrap_wrapup

!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!

      subroutine tfatt_wrap_oneset (fpoint,ntr,  &
                                   hd,tr,lenhd,lentr,num)
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd,lentr,num  ! argument
      integer               ,intent(inout) :: ntr              ! argument
      double precision      ,intent(inout) :: hd(lenhd,num)    ! argument
      real                  ,intent(inout) :: tr(lentr,num)    ! argument
      type(tfatt_struct)     ,pointer       :: obj              ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
!!!!  call tfatt (obj,ntr,hd,tr)                ! might be commented out.

      end subroutine tfatt_wrap_oneset

!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!

      subroutine tfatt_wrap_twosets (fpoint,ntr,                 &
                                    hd1,tr1,lenhd1,lentr1,num1, &
                                    hd2,tr2,lenhd2,lentr2,num2)
      use tfatt_wrap_module
      implicit none
      type(tfatt_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd1,lentr1,num1 ! argument
      integer               ,intent(in)    :: lenhd2,lentr2,num2 ! argument
      integer               ,intent(inout) :: ntr                ! argument
      double precision      ,intent(inout) :: hd1(lenhd1,num1)   ! argument
      real                  ,intent(inout) :: tr1(lentr1,num1)   ! argument
      double precision      ,intent(inout) :: hd2(lenhd2,num2)   ! argument
      real                  ,intent(inout) :: tr2(lentr2,num2)   ! argument
      type(tfatt_struct)     ,pointer       :: obj                ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call tfatt (obj,ntr,hd1,tr1,hd2,tr2)      ! might be commented out.

      end subroutine tfatt_wrap_twosets

!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!