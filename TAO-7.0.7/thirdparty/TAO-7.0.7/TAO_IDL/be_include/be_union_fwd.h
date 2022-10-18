/* -*- c++ -*- */

//=============================================================================
/**
 *  @file    be_union_fwd.h
 *
 *  Extension of class AST_UnionFwd that provides additional
 *  means for C++ mapping of a union.
 *
 *  @author Jeff Parsons
 */
//=============================================================================

#ifndef BE_UNION_FWD_H
#define BE_UNION_FWD_H

#include "be_structure_fwd.h"
#include "ast_union_fwd.h"

class be_visitor;

class be_union_fwd : public virtual AST_UnionFwd,
                     public virtual be_structure_fwd
{
  // =TITLE
  //   be_union_fwd
  //
  // =DESCRIPTION
  //   Extensions to the AST_UnionFwd class
public:
  be_union_fwd (AST_Union *dummy,
                UTL_ScopedName *n);

  virtual ~be_union_fwd ();

  /// Cleanup function.
  virtual void destroy ();

  // Visiting.
  virtual int accept (be_visitor* visitor);
};

#endif // if !defined
