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

#ifndef _TAO_PIDL_IORINFOC_PE1KP5_H_
#define _TAO_PIDL_IORINFOC_PE1KP5_H_

#include /**/ "ace/pre.h"


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

#include "tao/PortableInterceptorC.h"
#include "tao/Policy_ForwardC.h"
#include "tao/IOPC.h"
#include "tao/ObjRefTemplate/ObjectReferenceTemplate_includeC.h"

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

  

#if !defined (_PORTABLEINTERCEPTOR_IORINFO__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_IORINFO__VAR_OUT_CH_

  class IORInfo;
  using IORInfo_ptr = IORInfo*;
  using IORInfo_var = TAO_Objref_Var_T<IORInfo>;
  using IORInfo_out = TAO_Objref_Out_T<IORInfo>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_IORInterceptor_Export IORInfo
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = IORInfo_ptr;
    using _var_type = IORInfo_var;
    using _out_type = IORInfo_out;

    // The static operations.
    static IORInfo_ptr _duplicate (IORInfo_ptr obj);

    static void _tao_release (IORInfo_ptr obj);

    static IORInfo_ptr _narrow (::CORBA::Object_ptr obj);
    static IORInfo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static IORInfo_ptr _nil ();

    virtual ::CORBA::Policy_ptr get_effective_policy (
      ::CORBA::PolicyType type) = 0;

    virtual void add_ior_component (
      const ::IOP::TaggedComponent & a_component) = 0;

    virtual void add_ior_component_to_profile (
      const ::IOP::TaggedComponent & a_component,
      ::IOP::ProfileId profile_id) = 0;

    virtual char * manager_id () = 0;

    virtual ::PortableInterceptor::AdapterState state () = 0;

    virtual ::PortableInterceptor::ObjectReferenceTemplate * adapter_template () = 0;

    virtual ::PortableInterceptor::ObjectReferenceFactory * current_factory () = 0;

    virtual void current_factory (
      ::PortableInterceptor::ObjectReferenceFactory * current_factory) = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    IORInfo ();

    

    virtual ~IORInfo () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    IORInfo (const IORInfo &) = delete;
    IORInfo (IORInfo &&) = delete;
    IORInfo &operator= (const IORInfo &) = delete;
    IORInfo &operator= (IORInfo &&) = delete;
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

#if !defined (_PORTABLEINTERCEPTOR_IORINFO__TRAITS_)
#define _PORTABLEINTERCEPTOR_IORINFO__TRAITS_

  template<>
  struct TAO_IORInterceptor_Export Objref_Traits< ::PortableInterceptor::IORInfo>
  {
    static ::PortableInterceptor::IORInfo_ptr duplicate (::PortableInterceptor::IORInfo_ptr p);
    static void release (::PortableInterceptor::IORInfo_ptr p);
    static ::PortableInterceptor::IORInfo_ptr nil ();
    static ::CORBA::Boolean marshal (const ::PortableInterceptor::IORInfo_ptr p,TAO_OutputCDR & cdr);
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
