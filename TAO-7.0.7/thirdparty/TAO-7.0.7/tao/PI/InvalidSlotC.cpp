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
#include "tao/SystemException.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\exception_cs.cpp:97

PortableInterceptor::InvalidSlot::InvalidSlot ()
  : ::CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/InvalidSlot:1.0",
        "InvalidSlot")
{
}

PortableInterceptor::InvalidSlot::InvalidSlot (const ::PortableInterceptor::InvalidSlot &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ())
{
}

PortableInterceptor::InvalidSlot&
PortableInterceptor::InvalidSlot::operator= (const ::PortableInterceptor::InvalidSlot &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void PortableInterceptor::InvalidSlot::_tao_any_destructor (void *_tao_void_pointer)
{
  InvalidSlot *_tao_tmp_pointer =
    static_cast<InvalidSlot *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableInterceptor::InvalidSlot *
PortableInterceptor::InvalidSlot::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<InvalidSlot *> (_tao_excp);
}

const PortableInterceptor::InvalidSlot *
PortableInterceptor::InvalidSlot::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const InvalidSlot *> (_tao_excp);
}

::CORBA::Exception *PortableInterceptor::InvalidSlot::_alloc ()
{
  ::CORBA::Exception *retval {};
  ACE_NEW_RETURN (retval, ::PortableInterceptor::InvalidSlot, nullptr);
  return retval;
}

::CORBA::Exception *
PortableInterceptor::InvalidSlot::_tao_duplicate () const
{
  ::CORBA::Exception *result {};
  ACE_NEW_RETURN (result, ::PortableInterceptor::InvalidSlot (*this), nullptr);
  return result;
}

void PortableInterceptor::InvalidSlot::_raise () const
{
  throw *this;
}

void PortableInterceptor::InvalidSlot::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void PortableInterceptor::InvalidSlot::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\cdr_op_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const PortableInterceptor::InvalidSlot &_tao_aggregate)
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    PortableInterceptor::InvalidSlot&)
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


