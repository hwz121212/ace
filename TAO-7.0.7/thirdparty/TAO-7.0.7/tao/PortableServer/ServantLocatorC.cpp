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


#include "ServantLocatorC.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for PortableServer::ServantLocator.

PortableServer::ServantLocator_ptr
TAO::Objref_Traits<PortableServer::ServantLocator>::duplicate (PortableServer::ServantLocator_ptr p)
{
  return PortableServer::ServantLocator::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::ServantLocator>::release (PortableServer::ServantLocator_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::ServantLocator_ptr
TAO::Objref_Traits<PortableServer::ServantLocator>::nil ()
{
  return PortableServer::ServantLocator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::ServantLocator>::marshal (const PortableServer::ServantLocator_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




PortableServer::ServantLocator::ServantLocator ()
{}PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return ServantLocator::_duplicate (
      dynamic_cast<ServantLocator_ptr> (_tao_objref));
}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return ServantLocator::_duplicate (
      dynamic_cast<ServantLocator_ptr> (_tao_objref));
}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_nil ()
{
  return nullptr;
}

PortableServer::ServantLocator_ptr
PortableServer::ServantLocator::_duplicate (ServantLocator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableServer::ServantLocator::_tao_release (ServantLocator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::ServantLocator::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:omg.org/PortableServer/ServantManager:2.3") == 0 ||
      std::strcmp (value, "IDL:omg.org/PortableServer/ServantLocator:2.3") == 0 ||
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

const char* PortableServer::ServantLocator::_interface_repository_id () const
{
  return "IDL:omg.org/PortableServer/ServantLocator:2.3";
}

::CORBA::Boolean
PortableServer::ServantLocator::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


