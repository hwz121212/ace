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

#include "OctetSeqA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:47


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:457


#ifndef _TAO_TYPECODE_CORBA_OctetSeq_GUARD
#define _TAO_TYPECODE_CORBA_OctetSeq_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        CORBA_OctetSeq_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_octet,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CORBA_OctetSeq_0 =
        &CORBA_OctetSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CORBA_OctetSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_OctetSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/OctetSeq:1.0",
    "OctetSeq",
    &TAO::TypeCode::tc_CORBA_OctetSeq_0);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_OctetSeq =
    &_tao_tc_CORBA_OctetSeq;
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\any_op_cs.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  
  /// Copying insertion.
  void operator<<= (
    ::CORBA::Any &_tao_any,
    const ::CORBA::OctetSeq &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CORBA::OctetSeq>::insert_copy (
      _tao_any,
      ::CORBA::OctetSeq::_tao_any_destructor,
      ::CORBA::_tc_OctetSeq,
      _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
    ::CORBA::Any &_tao_any,
    ::CORBA::OctetSeq *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CORBA::OctetSeq>::insert (
      _tao_any,
      ::CORBA::OctetSeq::_tao_any_destructor,
      ::CORBA::_tc_OctetSeq,
      _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::CORBA::OctetSeq *&_tao_elem)
  {
    return TAO::Any_Dual_Impl_T< ::CORBA::OctetSeq>::extract (
      _tao_any,
      ::CORBA::OctetSeq::_tao_any_destructor,
      ::CORBA::_tc_OctetSeq,
      _tao_elem);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const CORBA::OctetSeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CORBA::OctetSeq>::insert_copy (
    _tao_any,
    CORBA::OctetSeq::_tao_any_destructor,
    CORBA::_tc_OctetSeq,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  CORBA::OctetSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CORBA::OctetSeq>::insert (
    _tao_any,
    CORBA::OctetSeq::_tao_any_destructor,
    CORBA::_tc_OctetSeq,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const CORBA::OctetSeq *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T<CORBA::OctetSeq>::extract (
    _tao_any,
    CORBA::OctetSeq::_tao_any_destructor,
    CORBA::_tc_OctetSeq,
    _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


