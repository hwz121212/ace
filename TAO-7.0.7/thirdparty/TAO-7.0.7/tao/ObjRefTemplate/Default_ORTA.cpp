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

#include "Default_ORTA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\value_typecode.cpp:63

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_Default_ORT_ObjectReferenceTemplate = 0;
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_TAO_Default_ORT_ObjectReferenceTemplate (
    ::CORBA::tk_value,
    "IDL:TAO_Default_ORT/ObjectReferenceTemplate:1.0",
    "ObjectReferenceTemplate",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_TAO_Default_ORT_ObjectReferenceTemplate,
    0);
  

namespace TAO_Default_ORT
{
  ::CORBA::TypeCode_ptr const _tc_ObjectReferenceTemplate =
    &_tao_tc_TAO_Default_ORT_ObjectReferenceTemplate;
}// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr TAO_Default_ORT::ObjectReferenceTemplate::_tao_type () const
{
  return ::TAO_Default_ORT::_tc_ObjectReferenceTemplate;
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_valuetype\any_op_cs.cpp:44



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TAO_Default_ORT::ObjectReferenceTemplate>::to_value (
      ::CORBA::ValueBase *&_tao_elem) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO_Default_ORT
{
  /// Copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    ObjectReferenceTemplate *_tao_elem)
  {
    #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
      ObjectReferenceTemplate *_tao_copy =
        _tao_elem ?
          ObjectReferenceTemplate::_downcast (_tao_elem->_copy_value ())
          : 0;
      _tao_any <<= &_tao_copy;
    #else
      ::CORBA::add_ref (_tao_elem);
      _tao_any <<= &_tao_elem;
    #endif
  }

  /// Non-copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    ObjectReferenceTemplate **_tao_elem)
  {
    TAO::Any_Impl_T<ObjectReferenceTemplate>::insert (
      _tao_any,
      ObjectReferenceTemplate::_tao_any_destructor,
      _tc_ObjectReferenceTemplate,
      *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ObjectReferenceTemplate *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<ObjectReferenceTemplate>::extract (
          _tao_any,
          ObjectReferenceTemplate::_tao_any_destructor,
          _tc_ObjectReferenceTemplate,
          _tao_elem
        );
  }

  
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  TAO_Default_ORT::ObjectReferenceTemplate *_tao_elem)
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    TAO_Default_ORT::ObjectReferenceTemplate *_tao_copy =
      _tao_elem ?
        TAO_Default_ORT::ObjectReferenceTemplate::_downcast (_tao_elem->_copy_value ())
        : 0;
    _tao_any <<= &_tao_copy;
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  #endif
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  TAO_Default_ORT::ObjectReferenceTemplate **_tao_elem)
{
  TAO::Any_Impl_T<TAO_Default_ORT::ObjectReferenceTemplate>::insert (
    _tao_any,
    TAO_Default_ORT::ObjectReferenceTemplate::_tao_any_destructor,
    TAO_Default_ORT::_tc_ObjectReferenceTemplate,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TAO_Default_ORT::ObjectReferenceTemplate *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<TAO_Default_ORT::ObjectReferenceTemplate>::extract (
        _tao_any,
        TAO_Default_ORT::ObjectReferenceTemplate::_tao_any_destructor,
        TAO_Default_ORT::_tc_ObjectReferenceTemplate,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


