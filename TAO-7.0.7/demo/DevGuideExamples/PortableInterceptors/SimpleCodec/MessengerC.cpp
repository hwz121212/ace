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


#include "MessengerC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/ORB_Core.h"
#include "cstring"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Messenger.

Messenger_ptr
TAO::Objref_Traits<Messenger>::duplicate (Messenger_ptr p)
{
  return Messenger::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger>::release (Messenger_ptr p)
{
  ::CORBA::release (p);
}

Messenger_ptr
TAO::Objref_Traits<Messenger>::nil ()
{
  return Messenger::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger>::marshal (const Messenger_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_cs.cpp:87

void
Messenger::send_message (
  const ::CORBA::OctetSeq & user_name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::OctetSeq>::in_arg_val _tao_user_name (user_name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_user_name)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (nullptr, 0);
}

Messenger::Messenger ()
{
}
Messenger_ptr
Messenger::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Messenger>::narrow (_tao_objref, "IDL:Messenger:1.0");
}

Messenger_ptr
Messenger::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Messenger>::unchecked_narrow (_tao_objref);
}

Messenger_ptr
Messenger::_nil ()
{
  return nullptr;
}

Messenger_ptr
Messenger::_duplicate (Messenger_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::_tao_release (Messenger_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:Messenger:1.0") == 0 ||
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

const char* Messenger::_interface_repository_id () const
{
  return "IDL:Messenger:1.0";
}

::CORBA::Boolean
Messenger::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::Messenger>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


