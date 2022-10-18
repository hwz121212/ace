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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:148

#ifndef _TAO_IDL_TCC_KDTI5U_H_
#define _TAO_IDL_TCC_KDTI5U_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TransportCurrent/Transport_Current_Export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/AnyTypeCode/IOPA.h"
#include "tao/AnyTypeCode/TimeBaseA.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/IOPC.h"
#include "tao/TimeBaseC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:366

  typedef ::CORBA::ULongLong CounterT;
  typedef ::CORBA::ULongLong_out CounterT_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_Transport_Current_Export ::CORBA::TypeCode_ptr const _tc_CounterT;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

  namespace Transport
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\exception_ch.cpp:40

    

    class TAO_Transport_Current_Export NoContext : public ::CORBA::UserException
    {
    public:

      NoContext ();
      NoContext (const NoContext &);
      ~NoContext () = default;

      NoContext &operator= (const NoContext &);

      static void _tao_any_destructor (void *);

      static NoContext *_downcast ( ::CORBA::Exception *);
      static const NoContext *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc ();

      virtual ::CORBA::Exception *_tao_duplicate () const;

      virtual void _raise () const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);

      virtual ::CORBA::TypeCode_ptr _tao_type () const;
    };
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

    extern TAO_Transport_Current_Export ::CORBA::TypeCode_ptr const _tc_NoContext;
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

    

#if !defined (_TAO_TRANSPORT_CURRENT__VAR_OUT_CH_)
#define _TAO_TRANSPORT_CURRENT__VAR_OUT_CH_

    class Current;
    using Current_ptr = Current*;
    using Current_var = TAO_Objref_Var_T<Current>;
    using Current_out = TAO_Objref_Out_T<Current>;

#endif /* end #if !defined */

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

    

    class TAO_Transport_Current_Export Current
      : public virtual ::CORBA::Object
    {
    public:
      // TAO_IDL - Generated from
      // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

      using _ptr_type = Current_ptr;
      using _var_type = Current_var;
      using _out_type = Current_out;

      static void _tao_any_destructor (void *);

      // The static operations.
      static Current_ptr _duplicate (Current_ptr obj);

      static void _tao_release (Current_ptr obj);

      static Current_ptr _narrow (::CORBA::Object_ptr obj);
      static Current_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static Current_ptr _nil ();

      virtual ::CORBA::Long id () = 0;

      virtual ::TAO::CounterT bytes_sent () = 0;

      virtual ::TAO::CounterT bytes_received () = 0;

      virtual ::TAO::CounterT messages_sent () = 0;

      virtual ::TAO::CounterT messages_received () = 0;

      virtual ::TimeBase::TimeT open_since () = 0;

      
      // TAO_IDL - Generated from
      // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

      

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id () const;
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Abstract or local interface only.
      Current ();

      

      virtual ~Current () = default;
    
    private:
      // Private and unimplemented for concrete interfaces.
      Current (const Current &) = delete;
      Current (Current &&) = delete;
      Current &operator= (const Current &) = delete;
      Current &operator= (Current &&) = delete;
    };
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

    extern TAO_Transport_Current_Export ::CORBA::TypeCode_ptr const _tc_Current;
  
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62

  
  } // module TAO::Transport


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module TAO
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_traits.cpp:58




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TAO_TRANSPORT_CURRENT__TRAITS_)
#define _TAO_TRANSPORT_CURRENT__TRAITS_

  template<>
  struct TAO_Transport_Current_Export Objref_Traits< ::TAO::Transport::Current>
  {
    static ::TAO::Transport::Current_ptr duplicate (::TAO::Transport::Current_ptr p);
    static void release (::TAO::Transport::Current_ptr p);
    static ::TAO::Transport::Current_ptr nil ();
    static ::CORBA::Boolean marshal (const ::TAO::Transport::Current_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\any_op_ch.cpp:36



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO
{
  
  namespace Transport
  {
    

    TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, const ::TAO::Transport::NoContext &); // copying version
    TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, ::TAO::Transport::NoContext*); // noncopying version
    TAO_Transport_Current_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::TAO::Transport::NoContext *&);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, const TAO::Transport::NoContext &); // copying version
TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, TAO::Transport::NoContext*); // noncopying version
TAO_Transport_Current_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const TAO::Transport::NoContext *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_ch.cpp:40





#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO
{
  
  namespace Transport
  {
    TAO_Transport_Current_Export void operator<<= ( ::CORBA::Any &, Current_ptr); // copying
    TAO_Transport_Current_Export void operator<<= ( ::CORBA::Any &, Current_ptr *); // non-copying
    TAO_Transport_Current_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Current_ptr &);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, TAO::Transport::Current_ptr); // copying
TAO_Transport_Current_Export void operator<<= (::CORBA::Any &, TAO::Transport::Current_ptr *); // non-copying
TAO_Transport_Current_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TAO::Transport::Current_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:36



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Transport_Current_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO::Transport::NoContext &);
TAO_Transport_Current_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TAO::Transport::NoContext &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

