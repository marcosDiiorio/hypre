#include "headers.h"

int
hypre_ParVectorZeroBCValues(hypre_ParVector *v,
                            int             *rows,
                            int              nrows)
{
   int   ierr= 0;

   hypre_Vector *v_local = hypre_ParVectorLocalVector(v);

   hypre_SeqVectorZeroBCValues(v_local, rows, nrows);

   return ierr;
}

int
hypre_SeqVectorZeroBCValues(hypre_Vector *v,
                            int          *rows,
                            int           nrows)
{
   double  *vector_data = hypre_VectorData(v);
   int      i;
                                                                                                    
   int      ierr  = 0;
                                                                                                    
#define HYPRE_SMP_PRIVATE i
#include "../utilities/hypre_smp_forloop.h"
   for (i = 0; i < nrows; i++)
      vector_data[rows[i]]= 0.0;
                                                                                                    
   return ierr;
}

