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

#ifndef _TAO_PIDL_IDUNIQUENESSPOLICYC_JT363F_H_
#define _TAO_PIDL_IDUNIQUENESSPOLICYC_JT363F_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PortableServer/portableserver_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
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

namespace PortableServer
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_enum\enum_ch.cpp:39

  enum IdUniquenessPolicyValue
  {
    UNIQUE_ID,
    MULTIPLE_ID
  };

  typedef IdUniquenessPolicyValue &IdUniquenessPolicyValue_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_PORTABLESERVER_IDUNIQUENESSPOLICY__VAR_OUT_CH_)
#define _PORTABLESERVER_IDUNIQUENESSPOLICY__VAR_OUT_CH_

  class IdUniquenessPolicy;
  using IdUniquenessPolicy_ptr = IdUniquenessPolicy*;
  using IdUniquenessPolicy_var = TAO_Objref_Var_T<IdUniquenessPolicy>;
  using IdUniquenessPolicy_out = TAO_Objref_Out_T<IdUniquenessPolicy>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_PortableServer_Export IdUniquenessPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = IdUniquenessPolicy_ptr;
    using _var_type = IdUniquenessPolicy_var;
    using _out_type = IdUniquenessPolicy_out;

    // The static operations.
    static IdUniquenessPolicy_ptr _duplicate (IdUniquenessPolicy_ptr obj);

    static void _tao_release (IdUniquenessPolicy_ptr obj);

    static IdUniquenessPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static IdUniquenessPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static IdUniquenessPolicy_ptr _nil ();

    virtual ::PortableServer::IdUniquenessPolicyValue value () = 0;

    virtual ::CORBA::Policy_ptr copy () = 0;

    virtual void destroy () = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    IdUniquenessPolicy ();

    

    virtual ~IdUniquenessPolicy () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    IdUniquenessPolicy (const IdUniquenessPolicy &) = delete;
    IdUniquenessPolicy (IdUniquenessPolicy &&) = delete;
    IdUniquenessPolicy &operator= (const IdUniquenessPolicy &) = delete;
    IdUniquenessPolicy &operator= (IdUniquenessPolicy &&) = delete;
  };


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module PortableServer
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::PortableServer::IdUniquenessPolicyValue>
    : public
        Basic_Arg_Traits_T<
            ::PortableServer::IdUniquenessPolicyValue,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
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

#if !defined (_PORTABLESERVER_IDUNIQUENESSPOLICY__TRAITS_)
#define _PORTABLESERVER_IDUNIQUENESSPOLICY__TRAITS_

  template<>
  struct TAO_PortableServer_Export Objref_Traits< ::PortableServer::IdUniquenessPolicy>
  {
    static ::PortableServer::IdUniquenessPolicy_ptr duplicate (::PortableServer::IdUniquenessPolicy_ptr p);
    static void release (::PortableServer::IdUniquenessPolicy_ptr p);
    static ::PortableServer::IdUniquenessPolicy_ptr nil ();
    static ::CORBA::Boolean marshal (const ::PortableServer::IdUniquenessPolicy_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_enum\cdr_op_ch.cpp:33



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_PortableServer_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, PortableServer::IdUniquenessPolicyValue _tao_enumerator);
TAO_PortableServer_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, PortableServer::IdUniquenessPolicyValue &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

