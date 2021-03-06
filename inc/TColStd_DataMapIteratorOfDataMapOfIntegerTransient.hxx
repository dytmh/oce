// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapIteratorOfDataMapOfIntegerTransient_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfIntegerTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient.hxx>
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapIntegerHasher;
class TColStd_DataMapOfIntegerTransient;
class TColStd_DataMapNodeOfDataMapOfIntegerTransient;



class TColStd_DataMapIteratorOfDataMapOfIntegerTransient  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfIntegerTransient();
  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfIntegerTransient(const TColStd_DataMapOfIntegerTransient& aMap);
  
  Standard_EXPORT   void Initialize (const TColStd_DataMapOfIntegerTransient& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Value()  const;




protected:





private:





};







#endif // _TColStd_DataMapIteratorOfDataMapOfIntegerTransient_HeaderFile
