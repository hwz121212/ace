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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:363


#include "ServerObjectC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "cstring"

#if !defined (__ACE_INLINE__)
#include "ServerObjectC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for ImplementationRepository::ServerObject.

ImplementationRepository::ServerObject_ptr
TAO::Objref_Traits<ImplementationRepository::ServerObject>::duplicate (ImplementationRepository::ServerObject_ptr p)
{
  return ImplementationRepository::ServerObject::_duplicate (p);
}

void
TAO::Objref_Traits<ImplementationRepository::ServerObject>::release (ImplementationRepository::ServerObject_ptr p)
{
  ::CORBA::release (p);
}

ImplementationRepository::ServerObject_ptr
TAO::Objref_Traits<ImplementationRepository::ServerObject>::nil ()
{
  return ImplementationRepository::ServerObject::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ImplementationRepository::ServerObject>::marshal (const ImplementationRepository::ServerObject_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_cs.cpp:87

void
ImplementationRepository::ServerObject::ping ()
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      1,
      "ping",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _invocation_call.invoke (nullptr, 0);
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_cs.cpp:87

void
ImplementationRepository::ServerObject::shutdown ()
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _invocation_call.invoke (nullptr, 0);
}

ImplementationRepository::ServerObject::ServerObject ()
{
}
void
ImplementationRepository::ServerObject::_tao_any_destructor (void *_tao_void_pointer)
{
  ServerObject *_tao_tmp_pointer =
    static_cast<ServerObject *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

ImplementationRepository::ServerObject_ptr
ImplementationRepository::ServerObject::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<ServerObject>::narrow (_tao_objref, "IDL:ImplementationRepository/ServerObject:1.0");
}

ImplementationRepository::ServerObject_ptr
ImplementationRepository::ServerObject::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<ServerObject>::unchecked_narrow (_tao_objref);
}

ImplementationRepository::ServerObject_ptr
ImplementationRepository::ServerObject::_nil ()
{
  return nullptr;
}

ImplementationRepository::ServerObject_ptr
ImplementationRepository::ServerObject::_duplicate (ServerObject_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ImplementationRepository::ServerObject::_tao_release (ServerObject_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ImplementationRepository::ServerObject::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:ImplementationRepository/ServerObject:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* ImplementationRepository::ServerObject::_interface_repository_id () const
{
  return "IDL:ImplementationRepository/ServerObject:1.0";
}

::CORBA::Boolean
ImplementationRepository::ServerObject::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\cdr_op_cs.cpp:50



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ImplementationRepository::ServerObject_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ImplementationRepository::ServerObject_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::ImplementationRepository::ServerObject>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


