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

#include "ServerObjectA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_ImplementationRepository_ServerObject (
    ::CORBA::tk_objref,
    "IDL:ImplementationRepository/ServerObject:1.0",
    "ServerObject");
  

namespace ImplementationRepository
{
  ::CORBA::TypeCode_ptr const _tc_ServerObject =
    &_tao_tc_ImplementationRepository_ServerObject;
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_ImplementationRepository_AMI_ServerObjectHandler (
    ::CORBA::tk_objref,
    "IDL:ImplementationRepository/AMI_ServerObjectHandler:1.0",
    "AMI_ServerObjectHandler");
  

namespace ImplementationRepository
{
  ::CORBA::TypeCode_ptr const _tc_AMI_ServerObjectHandler =
    &_tao_tc_ImplementationRepository_AMI_ServerObjectHandler;
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_cs.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<ImplementationRepository::ServerObject>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ImplementationRepository
{
  

  /// Copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    ServerObject_ptr _tao_elem)
  {
    ServerObject_ptr _tao_objptr =
      ServerObject::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    ServerObject_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<ServerObject>::insert (
      _tao_any,
      ServerObject::_tao_any_destructor,
      _tc_ServerObject,
      *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ServerObject_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<ServerObject>::extract (
          _tao_any,
          ServerObject::_tao_any_destructor,
          _tc_ServerObject,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  ImplementationRepository::ServerObject_ptr _tao_elem)
{
  ImplementationRepository::ServerObject_ptr _tao_objptr =
    ImplementationRepository::ServerObject::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  ImplementationRepository::ServerObject_ptr *_tao_elem)
{
  TAO::Any_Impl_T<ImplementationRepository::ServerObject>::insert (
    _tao_any,
    ImplementationRepository::ServerObject::_tao_any_destructor,
    ImplementationRepository::_tc_ServerObject,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    ImplementationRepository::ServerObject_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<ImplementationRepository::ServerObject>::extract (
        _tao_any,
        ImplementationRepository::ServerObject::_tao_any_destructor,
        ImplementationRepository::_tc_ServerObject,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_cs.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<ImplementationRepository::AMI_ServerObjectHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ImplementationRepository
{
  

  /// Copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_ServerObjectHandler_ptr _tao_elem)
  {
    AMI_ServerObjectHandler_ptr _tao_objptr =
      AMI_ServerObjectHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_ServerObjectHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<AMI_ServerObjectHandler>::insert (
      _tao_any,
      AMI_ServerObjectHandler::_tao_any_destructor,
      _tc_AMI_ServerObjectHandler,
      *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMI_ServerObjectHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<AMI_ServerObjectHandler>::extract (
          _tao_any,
          AMI_ServerObjectHandler::_tao_any_destructor,
          _tc_AMI_ServerObjectHandler,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  ImplementationRepository::AMI_ServerObjectHandler_ptr _tao_elem)
{
  ImplementationRepository::AMI_ServerObjectHandler_ptr _tao_objptr =
    ImplementationRepository::AMI_ServerObjectHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  ImplementationRepository::AMI_ServerObjectHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<ImplementationRepository::AMI_ServerObjectHandler>::insert (
    _tao_any,
    ImplementationRepository::AMI_ServerObjectHandler::_tao_any_destructor,
    ImplementationRepository::_tc_AMI_ServerObjectHandler,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    ImplementationRepository::AMI_ServerObjectHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<ImplementationRepository::AMI_ServerObjectHandler>::extract (
        _tao_any,
        ImplementationRepository::AMI_ServerObjectHandler::_tao_any_destructor,
        ImplementationRepository::_tc_AMI_ServerObjectHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


