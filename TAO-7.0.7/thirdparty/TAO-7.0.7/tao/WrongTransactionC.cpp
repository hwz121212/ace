// -*- C++ -*-
// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:291


#include "tao/WrongTransactionC.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"
#include "tao/AnyTypeCode_Adapter.h"
#include "ace/Dynamic_Service.h"
#include "ace/Log_Msg.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_exception/exception_cs.cpp:63

CORBA::WrongTransaction::WrongTransaction ()
  : CORBA::UserException (
        "IDL:omg.org/CORBA/WrongTransaction:1.0",
        "WrongTransaction"
      )
{
}

CORBA::WrongTransaction::~WrongTransaction ()
{
}

CORBA::WrongTransaction::WrongTransaction (const ::CORBA::WrongTransaction &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

CORBA::WrongTransaction&
CORBA::WrongTransaction::operator= (const ::CORBA::WrongTransaction &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void CORBA::WrongTransaction::_tao_any_destructor (void *_tao_void_pointer)
{
  WrongTransaction *_tao_tmp_pointer =
    static_cast<WrongTransaction *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

CORBA::WrongTransaction *
CORBA::WrongTransaction::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<WrongTransaction *> (_tao_excp);
}

const CORBA::WrongTransaction *
CORBA::WrongTransaction::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const WrongTransaction *> (_tao_excp);
}

CORBA::Exception *CORBA::WrongTransaction::_alloc ()
{
  CORBA::Exception *retval = nullptr;
  ACE_NEW_RETURN (retval, ::CORBA::WrongTransaction, nullptr);
  return retval;
}

CORBA::Exception *
CORBA::WrongTransaction::_tao_duplicate () const
{
  CORBA::Exception *result = nullptr;
  ACE_NEW_RETURN (
      result,
      ::CORBA::WrongTransaction (*this),
      nullptr
    );
  return result;
}

void CORBA::WrongTransaction::_raise () const
{
  throw *this;
}

void CORBA::WrongTransaction::_tao_encode (
    TAO_OutputCDR &cdr) const
{
  if (cdr << *this)
    {
      return;
    }

  throw ::CORBA::MARSHAL ();
}

void CORBA::WrongTransaction::_tao_decode (
    TAO_InputCDR &cdr
  )
{
  if (cdr >> *this)
    {
      return;
    }

  throw ::CORBA::MARSHAL ();
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr CORBA::WrongTransaction::_tao_type () const
{
  TAO_AnyTypeCode_Adapter *adapter =
    ACE_Dynamic_Service<TAO_AnyTypeCode_Adapter>::instance (
        "AnyTypeCode_Adapter"
      );
  if (adapter != nullptr)
    return adapter->_tao_type_WrongTransaction ();
  else
    {
      TAOLIB_ERROR ((LM_ERROR,
                  ACE_TEXT ("(%P|%t) %p\n"),
                  ACE_TEXT ("Unable to find the ")
                  ACE_TEXT ("AnyTypeCode Adapter instance")));
      return nullptr;
    }
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::WrongTransaction &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::WrongTransaction&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL
