/*
 * File:          bHYPRE_SStructParCSRMatrix_IOR.h
 * Symbol:        bHYPRE.SStructParCSRMatrix-v1.0.0
 * Symbol Type:   class
 * Babel Version: 0.10.8
 * Description:   Intermediate Object Representation for bHYPRE.SStructParCSRMatrix
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.8
 */

#ifndef included_bHYPRE_SStructParCSRMatrix_IOR_h
#define included_bHYPRE_SStructParCSRMatrix_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_bHYPRE_MatrixVectorView_IOR_h
#include "bHYPRE_MatrixVectorView_IOR.h"
#endif
#ifndef included_bHYPRE_Operator_IOR_h
#include "bHYPRE_Operator_IOR.h"
#endif
#ifndef included_bHYPRE_ProblemDefinition_IOR_h
#include "bHYPRE_ProblemDefinition_IOR.h"
#endif
#ifndef included_bHYPRE_SStructMatrixView_IOR_h
#include "bHYPRE_SStructMatrixView_IOR.h"
#endif
#ifndef included_bHYPRE_SStruct_MatrixVectorView_IOR_h
#include "bHYPRE_SStruct_MatrixVectorView_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "bHYPRE.SStructParCSRMatrix" (version 1.0.0)
 * 
 * The SStructParCSR matrix class.
 * 
 * Objects of this type can be cast to SStructMatrixView or
 * Operator objects using the {\tt \_\_cast} methods.
 * 
 */

struct bHYPRE_SStructParCSRMatrix__array;
struct bHYPRE_SStructParCSRMatrix__object;
struct bHYPRE_SStructParCSRMatrix__sepv;

extern struct bHYPRE_SStructParCSRMatrix__object*
bHYPRE_SStructParCSRMatrix__new(void);

extern struct bHYPRE_SStructParCSRMatrix__sepv*
bHYPRE_SStructParCSRMatrix__statics(void);

extern void bHYPRE_SStructParCSRMatrix__init(
  struct bHYPRE_SStructParCSRMatrix__object* self);
extern void bHYPRE_SStructParCSRMatrix__fini(
  struct bHYPRE_SStructParCSRMatrix__object* self);
extern void bHYPRE_SStructParCSRMatrix__IOR_version(int32_t *major,
  int32_t *minor);

/*
 * Forward references for external classes and interfaces.
 */

struct bHYPRE_SStructGraph__array;
struct bHYPRE_SStructGraph__object;
struct bHYPRE_Vector__array;
struct bHYPRE_Vector__object;
struct sidl_BaseInterface__array;
struct sidl_BaseInterface__object;
struct sidl_ClassInfo__array;
struct sidl_ClassInfo__object;
struct sidl_io_Deserializer__array;
struct sidl_io_Deserializer__object;
struct sidl_io_Serializer__array;
struct sidl_io_Serializer__object;

/*
 * Declare the static method entry point vector.
 */

struct bHYPRE_SStructParCSRMatrix__sepv {
  /* Implicit builtin methods */
  /* Methods introduced in sidl.BaseInterface-v0.9.3 */
  /* Methods introduced in sidl.BaseClass-v0.9.3 */
  /* Methods introduced in bHYPRE.Operator-v1.0.0 */
  /* Methods introduced in bHYPRE.ProblemDefinition-v1.0.0 */
  /* Methods introduced in bHYPRE.MatrixVectorView-v1.0.0 */
  /* Methods introduced in bHYPRE.SStruct_MatrixVectorView-v1.0.0 */
  /* Methods introduced in bHYPRE.SStructMatrixView-v1.0.0 */
  /* Methods introduced in bHYPRE.SStructParCSRMatrix-v1.0.0 */
  struct bHYPRE_SStructParCSRMatrix__object* (*f_Create)(
    /* in */ void* mpi_comm,
    /* in */ struct bHYPRE_SStructGraph__object* graph);
};

/*
 * Declare the method entry point vector.
 */

struct bHYPRE_SStructParCSRMatrix__epv {
  /* Implicit builtin methods */
  void* (*f__cast)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name);
  void (*f__delete)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  void (*f__exec)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_io_Deserializer__object* inArgs,
    /* in */ struct sidl_io_Serializer__object* outArgs);
  char* (*f__getURL)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  void (*f__ctor)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  void (*f__dtor)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  /* Methods introduced in sidl.BaseInterface-v0.9.3 */
  void (*f_addRef)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  void (*f_deleteRef)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  sidl_bool (*f_isSame)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj);
  struct sidl_BaseInterface__object* (*f_queryInt)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name);
  sidl_bool (*f_isType)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  /* Methods introduced in sidl.BaseClass-v0.9.3 */
  /* Methods introduced in bHYPRE.Operator-v1.0.0 */
  int32_t (*f_SetCommunicator)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ void* mpi_comm);
  int32_t (*f_SetIntParameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in */ int32_t value);
  int32_t (*f_SetDoubleParameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in */ double value);
  int32_t (*f_SetStringParameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in */ const char* value);
  int32_t (*f_SetIntArray1Parameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in rarray[nvalues] */ struct sidl_int__array* value);
  int32_t (*f_SetIntArray2Parameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in array<int,2,column-major> */ struct sidl_int__array* value);
  int32_t (*f_SetDoubleArray1Parameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in rarray[nvalues] */ struct sidl_double__array* value);
  int32_t (*f_SetDoubleArray2Parameter)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* in array<double,2,column-major> */ struct sidl_double__array* value);
  int32_t (*f_GetIntValue)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* out */ int32_t* value);
  int32_t (*f_GetDoubleValue)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* name,
    /* out */ double* value);
  int32_t (*f_Setup)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ struct bHYPRE_Vector__object* b,
    /* in */ struct bHYPRE_Vector__object* x);
  int32_t (*f_Apply)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ struct bHYPRE_Vector__object* b,
    /* inout */ struct bHYPRE_Vector__object** x);
  /* Methods introduced in bHYPRE.ProblemDefinition-v1.0.0 */
  int32_t (*f_Initialize)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  int32_t (*f_Assemble)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  /* Methods introduced in bHYPRE.MatrixVectorView-v1.0.0 */
  /* Methods introduced in bHYPRE.SStruct_MatrixVectorView-v1.0.0 */
  int32_t (*f_GetObject)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* out */ struct sidl_BaseInterface__object** A);
  /* Methods introduced in bHYPRE.SStructMatrixView-v1.0.0 */
  int32_t (*f_SetGraph)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ struct bHYPRE_SStructGraph__object* graph);
  int32_t (*f_SetValues)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t part,
    /* in rarray[dim] */ struct sidl_int__array* index,
    /* in */ int32_t var,
    /* in rarray[nentries] */ struct sidl_int__array* entries,
    /* in rarray[nentries] */ struct sidl_double__array* values);
  int32_t (*f_SetBoxValues)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t part,
    /* in rarray[dim] */ struct sidl_int__array* ilower,
    /* in rarray[dim] */ struct sidl_int__array* iupper,
    /* in */ int32_t var,
    /* in rarray[nentries] */ struct sidl_int__array* entries,
    /* in rarray[nvalues] */ struct sidl_double__array* values);
  int32_t (*f_AddToValues)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t part,
    /* in rarray[dim] */ struct sidl_int__array* index,
    /* in */ int32_t var,
    /* in rarray[nentries] */ struct sidl_int__array* entries,
    /* in rarray[nentries] */ struct sidl_double__array* values);
  int32_t (*f_AddToBoxValues)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t part,
    /* in rarray[dim] */ struct sidl_int__array* ilower,
    /* in rarray[dim] */ struct sidl_int__array* iupper,
    /* in */ int32_t var,
    /* in rarray[nentries] */ struct sidl_int__array* entries,
    /* in rarray[nvalues] */ struct sidl_double__array* values);
  int32_t (*f_SetSymmetric)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t part,
    /* in */ int32_t var,
    /* in */ int32_t to_var,
    /* in */ int32_t symmetric);
  int32_t (*f_SetNSSymmetric)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ int32_t symmetric);
  int32_t (*f_SetComplex)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self);
  int32_t (*f_Print)(
    /* in */ struct bHYPRE_SStructParCSRMatrix__object* self,
    /* in */ const char* filename,
    /* in */ int32_t all);
  /* Methods introduced in bHYPRE.SStructParCSRMatrix-v1.0.0 */
};

/*
 * Define the class object structure.
 */

struct bHYPRE_SStructParCSRMatrix__object {
  struct sidl_BaseClass__object                  d_sidl_baseclass;
  struct bHYPRE_MatrixVectorView__object         d_bhypre_matrixvectorview;
  struct bHYPRE_Operator__object                 d_bhypre_operator;
  struct bHYPRE_ProblemDefinition__object        d_bhypre_problemdefinition;
  struct bHYPRE_SStructMatrixView__object        d_bhypre_sstructmatrixview;
  struct bHYPRE_SStruct_MatrixVectorView__object 
    d_bhypre_sstruct_matrixvectorview;
  struct bHYPRE_SStructParCSRMatrix__epv*        d_epv;
  void*                                          d_data;
};

struct bHYPRE_SStructParCSRMatrix__external {
  struct bHYPRE_SStructParCSRMatrix__object*
  (*createObject)(void);

  struct bHYPRE_SStructParCSRMatrix__sepv*
  (*getStaticEPV)(void);
  struct sidl_BaseClass__epv*(*getSuperEPV)(void);
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct bHYPRE_SStructParCSRMatrix__external*
bHYPRE_SStructParCSRMatrix__externals(void);

struct bHYPRE_SStruct_MatrixVectorView__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_SStruct_MatrixVectorView(
  char* url, struct sidl_BaseInterface__object **_ex);
char* 
  skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_SStruct_MatrixVectorView(
  struct bHYPRE_SStruct_MatrixVectorView__object* obj); 

struct bHYPRE_SStructMatrixView__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_SStructMatrixView(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_SStructMatrixView(struct 
  bHYPRE_SStructMatrixView__object* obj); 

struct bHYPRE_SStructParCSRMatrix__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_SStructParCSRMatrix(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_SStructParCSRMatrix(struct 
  bHYPRE_SStructParCSRMatrix__object* obj); 

struct bHYPRE_Operator__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_Operator(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_Operator(struct 
  bHYPRE_Operator__object* obj); 

struct sidl_ClassInfo__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_sidl_ClassInfo(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_sidl_ClassInfo(struct 
  sidl_ClassInfo__object* obj); 

struct bHYPRE_Vector__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_Vector(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_Vector(struct 
  bHYPRE_Vector__object* obj); 

struct bHYPRE_ProblemDefinition__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_ProblemDefinition(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_ProblemDefinition(struct 
  bHYPRE_ProblemDefinition__object* obj); 

struct sidl_BaseInterface__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_sidl_BaseInterface(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_sidl_BaseInterface(struct 
  sidl_BaseInterface__object* obj); 

struct bHYPRE_SStructGraph__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_SStructGraph(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_SStructGraph(struct 
  bHYPRE_SStructGraph__object* obj); 

struct bHYPRE_MatrixVectorView__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_bHYPRE_MatrixVectorView(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_bHYPRE_MatrixVectorView(struct 
  bHYPRE_MatrixVectorView__object* obj); 

struct sidl_BaseClass__object* 
  skel_bHYPRE_SStructParCSRMatrix_fconnect_sidl_BaseClass(char* url,
  struct sidl_BaseInterface__object **_ex);
char* skel_bHYPRE_SStructParCSRMatrix_fgetURL_sidl_BaseClass(struct 
  sidl_BaseClass__object* obj); 

#ifdef __cplusplus
}
#endif
#endif
