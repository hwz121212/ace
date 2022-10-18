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

#ifndef _TAO_IDL_SERVEROBJECTC_TAJQ8M_H_
#define _TAO_IDL_SERVEROBJECTC_TAJQ8M_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/ImR_Client/imr_client_export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
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

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_root\root_ch.cpp:155



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace ImplementationRepository
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__VAR_OUT_CH_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__VAR_OUT_CH_

  class ServerObject;
  using ServerObject_ptr = ServerObject*;
  using ServerObject_var = TAO_Objref_Var_T<ServerObject>;
  using ServerObject_out = TAO_Objref_Out_T<ServerObject>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_IMR_Client_Export ServerObject
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<ServerObject>;
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = ServerObject_ptr;
    using _var_type = ServerObject_var;
    using _out_type = ServerObject_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ServerObject_ptr _duplicate (ServerObject_ptr obj);

    static void _tao_release (ServerObject_ptr obj);

    static ServerObject_ptr _narrow (::CORBA::Object_ptr obj);
    static ServerObject_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ServerObject_ptr _nil ();

    virtual void ping ();

    virtual void shutdown ();

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    ServerObject ();

    // Concrete non-local interface only.
    ServerObject (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    ServerObject (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~ServerObject () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    ServerObject (const ServerObject &) = delete;
    ServerObject (ServerObject &&) = delete;
    ServerObject &operator= (const ServerObject &) = delete;
    ServerObject &operator= (ServerObject &&) = delete;
  };


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module ImplementationRepository
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:142

  

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__ARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ImplementationRepository::ServerObject>
    : public Object_Arg_Traits_T<
        ::ImplementationRepository::ServerObject_ptr,
        ::ImplementationRepository::ServerObject_var,
        ::ImplementationRepository::ServerObject_out,
        TAO::Objref_Traits<ImplementationRepository::ServerObject>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
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

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__TRAITS_

  template<>
  struct TAO_IMR_Client_Export Objref_Traits< ::ImplementationRepository::ServerObject>
  {
    static ::ImplementationRepository::ServerObject_ptr duplicate (::ImplementationRepository::ServerObject_ptr p);
    static void release (::ImplementationRepository::ServerObject_ptr p);
    static ::ImplementationRepository::ServerObject_ptr nil ();
    static ::CORBA::Boolean marshal (const ::ImplementationRepository::ServerObject_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:40




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IMR_Client_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ImplementationRepository::ServerObject_ptr );
TAO_IMR_Client_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ImplementationRepository::ServerObject_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "ServerObjectC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

