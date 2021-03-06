// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HArray2OfSurfaceElementPurpose_HeaderFile
#define _StepElement_HArray2OfSurfaceElementPurpose_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_HArray2OfSurfaceElementPurpose.hxx>

#include <StepElement_Array2OfSurfaceElementPurpose.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class StepElement_SurfaceElementPurpose;
class StepElement_Array2OfSurfaceElementPurpose;



class StepElement_HArray2OfSurfaceElementPurpose : public MMgt_TShared
{

public:

  
    StepElement_HArray2OfSurfaceElementPurpose(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    StepElement_HArray2OfSurfaceElementPurpose(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const StepElement_SurfaceElementPurpose& V);
  
      void Init (const StepElement_SurfaceElementPurpose& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const StepElement_SurfaceElementPurpose& Value) ;
  
     const  StepElement_SurfaceElementPurpose& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      StepElement_SurfaceElementPurpose& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  StepElement_Array2OfSurfaceElementPurpose& Array2()  const;
  
      StepElement_Array2OfSurfaceElementPurpose& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(StepElement_HArray2OfSurfaceElementPurpose)

protected:




private: 


  StepElement_Array2OfSurfaceElementPurpose myArray;


};

#define ItemHArray2 StepElement_SurfaceElementPurpose
#define ItemHArray2_hxx <StepElement_SurfaceElementPurpose.hxx>
#define TheArray2 StepElement_Array2OfSurfaceElementPurpose
#define TheArray2_hxx <StepElement_Array2OfSurfaceElementPurpose.hxx>
#define TCollection_HArray2 StepElement_HArray2OfSurfaceElementPurpose
#define TCollection_HArray2_hxx <StepElement_HArray2OfSurfaceElementPurpose.hxx>
#define Handle_TCollection_HArray2 Handle_StepElement_HArray2OfSurfaceElementPurpose
#define TCollection_HArray2_Type_() StepElement_HArray2OfSurfaceElementPurpose_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _StepElement_HArray2OfSurfaceElementPurpose_HeaderFile
