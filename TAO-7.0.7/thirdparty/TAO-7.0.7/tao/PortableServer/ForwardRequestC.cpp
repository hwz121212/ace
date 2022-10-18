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


#include "ForwardRequestC.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\exception_ctor.cpp:50



PortableServer::ForwardRequest::ForwardRequest (
    const ::CORBA::Object_ptr  _tao_forward_reference)
  : ::CORBA::UserException (
        "IDL:omg.org/PortableServer/ForwardRequest:2.3",
        "ForwardRequest")
{
  this->forward_reference = CORBA::Object::_duplicate (_tao_forward_reference);
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\exception_cs.cpp:97

PortableServer::ForwardRequest::ForwardRequest ()
  : ::CORBA::UserException (
        "IDL:omg.org/PortableServer/ForwardRequest:2.3",
        "ForwardRequest")
{
}

PortableServer::ForwardRequest::ForwardRequest (const ::PortableServer::ForwardRequest &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ())
{
  this->forward_reference = CORBA::Object::_duplicate (_tao_excp.forward_reference.in ());
}

PortableServer::ForwardRequest&
PortableServer::ForwardRequest::operator= (const ::PortableServer::ForwardRequest &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  this->forward_reference = CORBA::Object::_duplicate (_tao_excp.forward_reference.in ());
  return *this;
}

void PortableServer::ForwardRequest::_tao_any_destructor (void *_tao_void_pointer)
{
  ForwardRequest *_tao_tmp_pointer =
    static_cast<ForwardRequest *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableServer::ForwardRequest *
PortableServer::ForwardRequest::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<ForwardRequest *> (_tao_excp);
}

const PortableServer::ForwardRequest *
PortableServer::ForwardRequest::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const ForwardRequest *> (_tao_excp);
}

::CORBA::Exception *PortableServer::ForwardRequest::_alloc ()
{
  ::CORBA::Exception *retval {};
  ACE_NEW_RETURN (retval, ::PortableServer::ForwardRequest, nullptr);
  return retval;
}

::CORBA::Exception *
PortableServer::ForwardRequest::_tao_duplicate () const
{
  ::CORBA::Exception *result {};
  ACE_NEW_RETURN (result, ::PortableServer::ForwardRequest (*this), nullptr);
  return result;
}

void PortableServer::ForwardRequest::_raise () const
{
  throw *this;
}

void PortableServer::ForwardRequest::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void PortableServer::ForwardRequest::_tao_decode (TAO_InputCDR &cdr)
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
    const PortableServer::ForwardRequest &_tao_aggregate)
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.forward_reference.in ())
       );
    }
  else
    {
      return false;
    }
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    PortableServer::ForwardRequest &_tao_aggregate)
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.forward_reference.out ())
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


