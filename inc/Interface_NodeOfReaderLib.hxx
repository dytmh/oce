// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_NodeOfReaderLib_HeaderFile
#define _Interface_NodeOfReaderLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_NodeOfReaderLib_HeaderFile
#include <Handle_Interface_NodeOfReaderLib.hxx>
#endif

#ifndef _Handle_Interface_GlobalNodeOfReaderLib_HeaderFile
#include <Handle_Interface_GlobalNodeOfReaderLib.hxx>
#endif
#ifndef _Handle_Interface_NodeOfReaderLib_HeaderFile
#include <Handle_Interface_NodeOfReaderLib.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_ReaderModule_HeaderFile
#include <Handle_Interface_ReaderModule.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
class Interface_GlobalNodeOfReaderLib;
class Standard_Transient;
class Interface_ReaderModule;
class Interface_Protocol;
class Interface_ReaderLib;



class Interface_NodeOfReaderLib : public MMgt_TShared {

public:

  
  Standard_EXPORT   Interface_NodeOfReaderLib();
  
  Standard_EXPORT     void AddNode(const Handle(Interface_GlobalNodeOfReaderLib)& anode) ;
  
  Standard_EXPORT    const Handle_Interface_ReaderModule& Module() const;
  
  Standard_EXPORT    const Handle_Interface_Protocol& Protocol() const;
  
  Standard_EXPORT    const Handle_Interface_NodeOfReaderLib& Next() const;




  DEFINE_STANDARD_RTTI(Interface_NodeOfReaderLib)

protected:




private: 


Handle_Interface_GlobalNodeOfReaderLib thenode;
Handle_Interface_NodeOfReaderLib thenext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif