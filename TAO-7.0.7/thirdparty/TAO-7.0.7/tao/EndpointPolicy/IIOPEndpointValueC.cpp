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


#include "IIOPEndpointValueC.h"
#include "tao/CDR.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for EndpointPolicy::IIOPEndpointValue.

EndpointPolicy::IIOPEndpointValue_ptr
TAO::Objref_Traits<EndpointPolicy::IIOPEndpointValue>::duplicate (EndpointPolicy::IIOPEndpointValue_ptr p)
{
  return EndpointPolicy::IIOPEndpointValue::_duplicate (p);
}

void
TAO::Objref_Traits<EndpointPolicy::IIOPEndpointValue>::release (EndpointPolicy::IIOPEndpointValue_ptr p)
{
  ::CORBA::release (p);
}

EndpointPolicy::IIOPEndpointValue_ptr
TAO::Objref_Traits<EndpointPolicy::IIOPEndpointValue>::nil ()
{
  return EndpointPolicy::IIOPEndpointValue::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<EndpointPolicy::IIOPEndpointValue>::marshal (const EndpointPolicy::IIOPEndpointValue_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




EndpointPolicy::IIOPEndpointValue::IIOPEndpointValue ()
{}void
EndpointPolicy::IIOPEndpointValue::_tao_any_destructor (void *_tao_void_pointer)
{
  IIOPEndpointValue *_tao_tmp_pointer =
    static_cast<IIOPEndpointValue *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

EndpointPolicy::IIOPEndpointValue_ptr
EndpointPolicy::IIOPEndpointValue::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return IIOPEndpointValue::_duplicate (
      dynamic_cast<IIOPEndpointValue_ptr> (_tao_objref));
}

EndpointPolicy::IIOPEndpointValue_ptr
EndpointPolicy::IIOPEndpointValue::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return IIOPEndpointValue::_duplicate (
      dynamic_cast<IIOPEndpointValue_ptr> (_tao_objref));
}

EndpointPolicy::IIOPEndpointValue_ptr
EndpointPolicy::IIOPEndpointValue::_nil ()
{
  return nullptr;
}

EndpointPolicy::IIOPEndpointValue_ptr
EndpointPolicy::IIOPEndpointValue::_duplicate (IIOPEndpointValue_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
EndpointPolicy::IIOPEndpointValue::_tao_release (IIOPEndpointValue_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
EndpointPolicy::IIOPEndpointValue::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:EndpointPolicy/EndpointValueBase:1.0") == 0 ||
      std::strcmp (value, "IDL:EndpointPolicy/IIOPEndpointValue:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/LocalObject:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* EndpointPolicy::IIOPEndpointValue::_interface_repository_id () const
{
  return "IDL:EndpointPolicy/IIOPEndpointValue:1.0";
}

::CORBA::Boolean
EndpointPolicy::IIOPEndpointValue::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


