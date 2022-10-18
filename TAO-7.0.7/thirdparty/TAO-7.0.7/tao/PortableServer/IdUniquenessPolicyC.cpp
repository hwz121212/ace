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


#include "IdUniquenessPolicyC.h"
#include "tao/CDR.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for PortableServer::IdUniquenessPolicy.

PortableServer::IdUniquenessPolicy_ptr
TAO::Objref_Traits<PortableServer::IdUniquenessPolicy>::duplicate (PortableServer::IdUniquenessPolicy_ptr p)
{
  return PortableServer::IdUniquenessPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::IdUniquenessPolicy>::release (PortableServer::IdUniquenessPolicy_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::IdUniquenessPolicy_ptr
TAO::Objref_Traits<PortableServer::IdUniquenessPolicy>::nil ()
{
  return PortableServer::IdUniquenessPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::IdUniquenessPolicy>::marshal (const PortableServer::IdUniquenessPolicy_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




PortableServer::IdUniquenessPolicy::IdUniquenessPolicy ()
{}PortableServer::IdUniquenessPolicy_ptr
PortableServer::IdUniquenessPolicy::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return IdUniquenessPolicy::_duplicate (
      dynamic_cast<IdUniquenessPolicy_ptr> (_tao_objref));
}

PortableServer::IdUniquenessPolicy_ptr
PortableServer::IdUniquenessPolicy::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return IdUniquenessPolicy::_duplicate (
      dynamic_cast<IdUniquenessPolicy_ptr> (_tao_objref));
}

PortableServer::IdUniquenessPolicy_ptr
PortableServer::IdUniquenessPolicy::_nil ()
{
  return nullptr;
}

PortableServer::IdUniquenessPolicy_ptr
PortableServer::IdUniquenessPolicy::_duplicate (IdUniquenessPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableServer::IdUniquenessPolicy::_tao_release (IdUniquenessPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::IdUniquenessPolicy::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:omg.org/CORBA/Policy:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/PortableServer/IdUniquenessPolicy:2.3") == 0 ||
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

const char* PortableServer::IdUniquenessPolicy::_interface_repository_id () const
{
  return "IDL:omg.org/PortableServer/IdUniquenessPolicy:2.3";
}

::CORBA::Boolean
PortableServer::IdUniquenessPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_enum\cdr_op_cs.cpp:29



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, PortableServer::IdUniquenessPolicyValue _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, PortableServer::IdUniquenessPolicyValue & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<PortableServer::IdUniquenessPolicyValue> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL

