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


#include "tao/PI/PI.h"
#include "tao/CDR.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for PortableInterceptor::ClientRequestInterceptor.

PortableInterceptor::ClientRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::duplicate (PortableInterceptor::ClientRequestInterceptor_ptr p)
{
  return PortableInterceptor::ClientRequestInterceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::release (PortableInterceptor::ClientRequestInterceptor_ptr p)
{
  ::CORBA::release (p);
}

PortableInterceptor::ClientRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::nil ()
{
  return PortableInterceptor::ClientRequestInterceptor::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::marshal (const PortableInterceptor::ClientRequestInterceptor_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




PortableInterceptor::ClientRequestInterceptor::ClientRequestInterceptor ()
{}PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return ClientRequestInterceptor::_duplicate (
      dynamic_cast<ClientRequestInterceptor_ptr> (_tao_objref));
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return ClientRequestInterceptor::_duplicate (
      dynamic_cast<ClientRequestInterceptor_ptr> (_tao_objref));
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_nil ()
{
  return nullptr;
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_duplicate (ClientRequestInterceptor_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableInterceptor::ClientRequestInterceptor::_tao_release (ClientRequestInterceptor_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableInterceptor::ClientRequestInterceptor::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:omg.org/PortableInterceptor/Interceptor:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/PortableInterceptor/ClientRequestInterceptor:1.0") == 0 ||
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

const char* PortableInterceptor::ClientRequestInterceptor::_interface_repository_id () const
{
  return "IDL:omg.org/PortableInterceptor/ClientRequestInterceptor:1.0";
}

::CORBA::Boolean
PortableInterceptor::ClientRequestInterceptor::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL

