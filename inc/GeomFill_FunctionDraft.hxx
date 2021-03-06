// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_FunctionDraft_HeaderFile
#define _GeomFill_FunctionDraft_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Adaptor3d_HCurve.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
#include <Standard_Real.hxx>
class Adaptor3d_HCurve;
class Adaptor3d_HSurface;
class math_Matrix;
class gp_Vec;
class GeomFill_Tensor;



class GeomFill_FunctionDraft  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_FunctionDraft(const Handle(Adaptor3d_HSurface)& S, const Handle(Adaptor3d_HCurve)& C);
  
  //! returns the number of variables of the function.
  Standard_EXPORT virtual   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT virtual   Standard_Integer NbEquations()  const;
  
  //! computes the values <F> of the Functions for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  //! returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  //! returns the values <F> of the functions and the derivatives
  //! <D> for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  //! returns the values <F> of the T derivatives for
  //! the parameter Param .
  Standard_EXPORT   Standard_Boolean DerivT (const Handle(Adaptor3d_HCurve)& C, const Standard_Real Param, const Standard_Real W, const gp_Vec& dN, const Standard_Real teta, math_Vector& F) ;
  
  //! returns the values <F> of the T2 derivatives for
  //! the parameter Param .
  Standard_EXPORT   Standard_Boolean Deriv2T (const Handle(Adaptor3d_HCurve)& C, const Standard_Real Param, const Standard_Real W, const gp_Vec& d2N, const Standard_Real teta, math_Vector& F) ;
  
  //! returns the values <D> of  the TX derivatives for
  //! the parameter Param .
  Standard_EXPORT   Standard_Boolean DerivTX (const gp_Vec& dN, const Standard_Real teta, math_Matrix& D) ;
  
  //! returns the values <T> of  the X2 derivatives for
  //! the parameter Param .
  Standard_EXPORT   Standard_Boolean Deriv2X (const math_Vector& X, GeomFill_Tensor& T) ;




protected:





private:



  Handle(Adaptor3d_HCurve) TheCurve;
  Handle(Adaptor3d_HSurface) TheSurface;


};







#endif // _GeomFill_FunctionDraft_HeaderFile
