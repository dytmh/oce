// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_ConcentricPresentation_HeaderFile
#define _DsgPrs_ConcentricPresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <Standard_Real.hxx>
class Prs3d_Presentation;
class gp_Pnt;
class gp_Dir;


//! A framework to define display of relations of concentricity.
class DsgPrs_ConcentricPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines the display of elements showing relations of
  //! concentricity between shapes.
  //! These include the center aCenter, the radius
  //! aRadius, the direction aNorm and the point aPoint.
  //! These arguments are added to the presentation
  //! object aPresentation. Their display attributes are
  //! defined by the attribute manager aDrawer.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Pnt& aCenter, const Standard_Real aRadius, const gp_Dir& aNorm, const gp_Pnt& aPoint) ;




protected:





private:





};







#endif // _DsgPrs_ConcentricPresentation_HeaderFile
