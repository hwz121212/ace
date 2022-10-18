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

#ifndef _TAO_PIDL_MESSAGING_SYNCSCOPE_POLICYC_EPKC2Y_H_
#define _TAO_PIDL_MESSAGING_SYNCSCOPE_POLICYC_EPKC2Y_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PolicyC.h"
#include "tao/Messaging_SyncScopeC.h"
#include "tao/Messaging/Messaging_TypesC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace Messaging
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_MESSAGING_SYNCSCOPEPOLICY__VAR_OUT_CH_)
#define _MESSAGING_SYNCSCOPEPOLICY__VAR_OUT_CH_

  class SyncScopePolicy;
  using SyncScopePolicy_ptr = SyncScopePolicy*;
  using SyncScopePolicy_var = TAO_Objref_Var_T<SyncScopePolicy>;
  using SyncScopePolicy_out = TAO_Objref_Out_T<SyncScopePolicy>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_Messaging_Export SyncScopePolicy
    : public virtual ::CORBA::Policy
  
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = SyncScopePolicy_ptr;
    using _var_type = SyncScopePolicy_var;
    using _out_type = SyncScopePolicy_out;

    // The static operations.
    static SyncScopePolicy_ptr _duplicate (SyncScopePolicy_ptr obj);

    static void _tao_release (SyncScopePolicy_ptr obj);

    static SyncScopePolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static SyncScopePolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SyncScopePolicy_ptr _nil ();

    virtual ::Messaging::SyncScope synchronization () = 0;

    virtual ::CORBA::Policy_ptr copy () = 0;

    virtual void destroy () = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SyncScopePolicy ();

    

    virtual ~SyncScopePolicy () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    SyncScopePolicy (const SyncScopePolicy &) = delete;
    SyncScopePolicy (SyncScopePolicy &&) = delete;
    SyncScopePolicy &operator= (const SyncScopePolicy &) = delete;
    SyncScopePolicy &operator= (SyncScopePolicy &&) = delete;
  };


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module Messaging
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

#if !defined (_MESSAGING_SYNCSCOPEPOLICY__TRAITS_)
#define _MESSAGING_SYNCSCOPEPOLICY__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::Messaging::SyncScopePolicy>
  {
    static ::Messaging::SyncScopePolicy_ptr duplicate (::Messaging::SyncScopePolicy_ptr p);
    static void release (::Messaging::SyncScopePolicy_ptr p);
    static ::Messaging::SyncScopePolicy_ptr nil ();
    static ::CORBA::Boolean marshal (const ::Messaging::SyncScopePolicy_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */
