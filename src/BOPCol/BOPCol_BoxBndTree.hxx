// Created by: Peter KURNEV
// Copyright (c) 2010-2014 OPEN CASCADE SAS
// Copyright (c) 2007-2010 CEA/DEN, EDF R&D, OPEN CASCADE
// Copyright (c) 2003-2007 OPEN CASCADE, EADS/CCR, LIP6, CEA/DEN, CEDRAT,
//                         EDF R&D, LEG, PRINCIPIA R&D, BUREAU VERITAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef NMTDS_BoxBndTree_HeaderFile
#define NMTDS_BoxBndTree_HeaderFile

#include <NCollection_UBTree.hxx>
#include <Bnd_Box.hxx>
#include <BOPCol_ListOfInteger.hxx>
/**
 * The instantiation of the algorithm of unbalanced binary tree 
 * of overlapped bounding boxes.
 *
*/
typedef NCollection_UBTree <Standard_Integer , Bnd_Box> BOPCol_BoxBndTree;

  class BOPCol_BoxBndTreeSelector : public BOPCol_BoxBndTree::Selector {
    public:
      Standard_EXPORT BOPCol_BoxBndTreeSelector();
      Standard_EXPORT virtual Standard_Boolean Reject(const Bnd_Box&) const;
      Standard_EXPORT virtual Standard_Boolean Accept(const Standard_Integer &);
      Standard_EXPORT virtual ~BOPCol_BoxBndTreeSelector();
      
      Standard_EXPORT void Clear();
      Standard_EXPORT void SetBox(const Bnd_Box&);
      Standard_EXPORT const BOPCol_ListOfInteger& Indices() const;

    protected:
      Bnd_Box  myBox;
      BOPCol_ListOfInteger myIndices;
      
  };

#endif
