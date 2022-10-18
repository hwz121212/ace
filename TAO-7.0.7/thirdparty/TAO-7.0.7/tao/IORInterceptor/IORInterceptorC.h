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

#ifndef _TAO_PIDL_IORINTERCEPTORC_L6AMXO_H_
#define _TAO_PIDL_IORINTERCEPTORC_L6AMXO_H_

#include /**/ "ace/pre.h"

#ifndef TAO_IORINTERCEPTOR_SAFE_INCLUDE
#error You should not include IORInterceptorC.h, use tao/IORInterceptor/IORInterceptor.h
#endif /* TAO_IORINTERCEPTOR_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/IORInterceptor/iorinterceptor_export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
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

#include "tao/PI/InterceptorC.h"
#include "tao/IORInterceptor/IORInfoC.h"
#include "tao/ObjRefTemplate/ObjectReferenceTemplateC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace PortableInterceptor
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR__VAR_OUT_CH_

  class IORInterceptor;
  using IORInterceptor_ptr = IORInterceptor*;
  using IORInterceptor_var = TAO_Objref_Var_T<IORInterceptor>;
  using IORInterceptor_out = TAO_Objref_Out_T<IORInterceptor>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_IORInterceptor_Export IORInterceptor
    : public virtual ::PortableInterceptor::Interceptor
  
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = IORInterceptor_ptr;
    using _var_type = IORInterceptor_var;
    using _out_type = IORInterceptor_out;

    // The static operations.
    static IORInterceptor_ptr _duplicate (IORInterceptor_ptr obj);

    static void _tao_release (IORInterceptor_ptr obj);

    static IORInterceptor_ptr _narrow (::CORBA::Object_ptr obj);
    static IORInterceptor_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static IORInterceptor_ptr _nil ();

    virtual void establish_components (
      ::PortableInterceptor::IORInfo_ptr info) = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    IORInterceptor ();

    

    virtual ~IORInterceptor () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    IORInterceptor (const IORInterceptor &) = delete;
    IORInterceptor (IORInterceptor &&) = delete;
    IORInterceptor &operator= (const IORInterceptor &) = delete;
    IORInterceptor &operator= (IORInterceptor &&) = delete;
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR_3_0__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR_3_0__VAR_OUT_CH_

  class IORInterceptor_3_0;
  using IORInterceptor_3_0_ptr = IORInterceptor_3_0*;
  using IORInterceptor_3_0_var = TAO_Objref_Var_T<IORInterceptor_3_0>;
  using IORInterceptor_3_0_out = TAO_Objref_Out_T<IORInterceptor_3_0>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_IORInterceptor_Export IORInterceptor_3_0
    : public virtual ::PortableInterceptor::IORInterceptor
  
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = IORInterceptor_3_0_ptr;
    using _var_type = IORInterceptor_3_0_var;
    using _out_type = IORInterceptor_3_0_out;

    // The static operations.
    static IORInterceptor_3_0_ptr _duplicate (IORInterceptor_3_0_ptr obj);

    static void _tao_release (IORInterceptor_3_0_ptr obj);

    static IORInterceptor_3_0_ptr _narrow (::CORBA::Object_ptr obj);
    static IORInterceptor_3_0_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static IORInterceptor_3_0_ptr _nil ();

    virtual void components_established (
      ::PortableInterceptor::IORInfo_ptr info) = 0;

    virtual void adapter_manager_state_changed (
      const char * id,
      ::PortableInterceptor::AdapterState state) = 0;

    virtual void adapter_state_changed (
      const ::PortableInterceptor::ObjectReferenceTemplateSeq & templates,
      ::PortableInterceptor::AdapterState state) = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    IORInterceptor_3_0 ();

    

    virtual ~IORInterceptor_3_0 () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    IORInterceptor_3_0 (const IORInterceptor_3_0 &) = delete;
    IORInterceptor_3_0 (IORInterceptor_3_0 &&) = delete;
    IORInterceptor_3_0 &operator= (const IORInterceptor_3_0 &) = delete;
    IORInterceptor_3_0 &operator= (IORInterceptor_3_0 &&) = delete;
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

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR__TRAITS_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR__TRAITS_

  template<>
  struct TAO_IORInterceptor_Export Objref_Traits< ::PortableInterceptor::IORInterceptor>
  {
    static ::PortableInterceptor::IORInterceptor_ptr duplicate (::PortableInterceptor::IORInterceptor_ptr p);
    static void release (::PortableInterceptor::IORInterceptor_ptr p);
    static ::PortableInterceptor::IORInterceptor_ptr nil ();
    static ::CORBA::Boolean marshal (const ::PortableInterceptor::IORInterceptor_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR_3_0__TRAITS_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR_3_0__TRAITS_

  template<>
  struct TAO_IORInterceptor_Export Objref_Traits< ::PortableInterceptor::IORInterceptor_3_0>
  {
    static ::PortableInterceptor::IORInterceptor_3_0_ptr duplicate (::PortableInterceptor::IORInterceptor_3_0_ptr p);
    static void release (::PortableInterceptor::IORInterceptor_3_0_ptr p);
    static ::PortableInterceptor::IORInterceptor_3_0_ptr nil ();
    static ::CORBA::Boolean marshal (const ::PortableInterceptor::IORInterceptor_3_0_ptr p,TAO_OutputCDR & cdr);
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
