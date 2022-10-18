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

#ifndef _TAO_PIDL_PROCESSINGMODEPOLICYC_OMPNLA_H_
#define _TAO_PIDL_PROCESSINGMODEPOLICYC_OMPNLA_H_

#include /**/ "ace/pre.h"

#ifndef TAO_PI_SAFE_INCLUDE
#error You should not include ProcessingModePolicyC.h, use tao/PI/PI.h
#endif /* TAO_PI_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PI/pi_export.h"
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

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace PortableInterceptor
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:366

  typedef ::CORBA::Short ProcessingMode;
  typedef ::CORBA::Short_out ProcessingMode_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::Short LOCAL_AND_REMOTE = 0;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::Short REMOTE_ONLY = 1;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::Short LOCAL_ONLY = 2;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong PROCESSING_MODE_POLICY_TYPE = 100U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_PORTABLEINTERCEPTOR_PROCESSINGMODEPOLICY__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_PROCESSINGMODEPOLICY__VAR_OUT_CH_

  class ProcessingModePolicy;
  using ProcessingModePolicy_ptr = ProcessingModePolicy*;
  using ProcessingModePolicy_var = TAO_Objref_Var_T<ProcessingModePolicy>;
  using ProcessingModePolicy_out = TAO_Objref_Out_T<ProcessingModePolicy>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_PI_Export ProcessingModePolicy
    : public virtual ::CORBA::Policy
  
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = ProcessingModePolicy_ptr;
    using _var_type = ProcessingModePolicy_var;
    using _out_type = ProcessingModePolicy_out;

    // The static operations.
    static ProcessingModePolicy_ptr _duplicate (ProcessingModePolicy_ptr obj);

    static void _tao_release (ProcessingModePolicy_ptr obj);

    static ProcessingModePolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static ProcessingModePolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ProcessingModePolicy_ptr _nil ();

    virtual ::PortableInterceptor::ProcessingMode processing_mode () = 0;

    virtual ::CORBA::Policy_ptr copy () = 0;

    virtual void destroy () = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ProcessingModePolicy ();

    

    virtual ~ProcessingModePolicy () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    ProcessingModePolicy (const ProcessingModePolicy &) = delete;
    ProcessingModePolicy (ProcessingModePolicy &&) = delete;
    ProcessingModePolicy &operator= (const ProcessingModePolicy &) = delete;
    ProcessingModePolicy &operator= (ProcessingModePolicy &&) = delete;
  };


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module PortableInterceptor
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

#if !defined (_PORTABLEINTERCEPTOR_PROCESSINGMODEPOLICY__TRAITS_)
#define _PORTABLEINTERCEPTOR_PROCESSINGMODEPOLICY__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ProcessingModePolicy>
  {
    static ::PortableInterceptor::ProcessingModePolicy_ptr duplicate (::PortableInterceptor::ProcessingModePolicy_ptr p);
    static void release (::PortableInterceptor::ProcessingModePolicy_ptr p);
    static ::PortableInterceptor::ProcessingModePolicy_ptr nil ();
    static ::CORBA::Boolean marshal (const ::PortableInterceptor::ProcessingModePolicy_ptr p,TAO_OutputCDR & cdr);
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

