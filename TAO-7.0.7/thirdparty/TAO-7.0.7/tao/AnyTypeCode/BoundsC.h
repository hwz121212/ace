// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v3.0.7
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:148

#ifndef _TAO_PIDL_BOUNDSC_4JAJDY_H_
#define _TAO_PIDL_BOUNDSC_4JAJDY_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/AnyTypeCode/TAO_AnyTypeCode_Export.h"
#include "tao/ORB.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace CORBA
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\exception_ch.cpp:40

  

  class TAO_AnyTypeCode_Export Bounds : public ::CORBA::UserException
  {
  public:

    Bounds ();
    Bounds (const Bounds &);
    ~Bounds () = default;

    Bounds &operator= (const Bounds &);

    static void _tao_any_destructor (void *);

    static Bounds *_downcast ( ::CORBA::Exception *);
    static const Bounds *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module CORBA
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_traits.cpp:58




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:36



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_AnyTypeCode_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::Bounds &);
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::Bounds &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

