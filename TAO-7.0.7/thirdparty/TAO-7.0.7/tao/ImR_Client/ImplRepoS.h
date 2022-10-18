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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:445

#ifndef _TAO_IDL_IMPLREPOS_ABQR7O_H_
#define _TAO_IDL_IMPLREPOS_ABQR7O_H_

#include /**/ "ace/pre.h"

#include "ImplRepoC.h"
#include "tao/ImR_Client/ServerObjectS.h"
#include "tao/StringSeqS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ImplementationRepository::EnvironmentVariable>
    : public
        Var_Size_SArg_Traits_T<
            ::ImplementationRepository::EnvironmentVariable,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::ImplementationRepository::EnvironmentList>
    : public
        Var_Size_SArg_Traits_T<
            ::ImplementationRepository::EnvironmentList,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::ImplementationRepository::ActivationMode>
    : public
        Basic_SArg_Traits_T<
            ::ImplementationRepository::ActivationMode,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ImplementationRepository::StartupOptions>
    : public
        Var_Size_SArg_Traits_T<
            ::ImplementationRepository::StartupOptions,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::ImplementationRepository::ServerActiveStatus>
    : public
        Basic_SArg_Traits_T<
            ::ImplementationRepository::ServerActiveStatus,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ImplementationRepository::ServerInformation>
    : public
        Var_Size_SArg_Traits_T<
            ::ImplementationRepository::ServerInformation,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::ImplementationRepository::ServerInformationList>
    : public
        Var_Size_SArg_Traits_T<
            ::ImplementationRepository::ServerInformationList,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:142

  

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVERINFORMATIONITERATOR__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_SERVERINFORMATIONITERATOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::ServerInformationIterator>
    : public Object_SArg_Traits_T<
        ::ImplementationRepository::ServerInformationIterator_ptr,
        ::ImplementationRepository::ServerInformationIterator_var,
        ::ImplementationRepository::ServerInformationIterator_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:142

  

#if !defined (_IMPLEMENTATIONREPOSITORY_ADMINISTRATION__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_ADMINISTRATION__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::Administration>
    : public Object_SArg_Traits_T<
        ::ImplementationRepository::Administration_ptr,
        ::ImplementationRepository::Administration_var,
        ::ImplementationRepository::Administration_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:142

  

#if !defined (_IMPLEMENTATIONREPOSITORY_ADMINISTRATIONEXT__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_ADMINISTRATIONEXT__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::AdministrationExt>
    : public Object_SArg_Traits_T<
        ::ImplementationRepository::AdministrationExt_ptr,
        ::ImplementationRepository::AdministrationExt_var,
        ::ImplementationRepository::AdministrationExt_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_sh.cpp:34

namespace POA_ImplementationRepository
{
  

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_sh.cpp:72

  

  class ServerInformationIterator;
  typedef ServerInformationIterator *ServerInformationIterator_ptr;

  class _TAO_ServerInformationIterator_Direct_Proxy_Impl;

  class TAO_IMR_Client_Export ServerInformationIterator
    : public virtual PortableServer::ServantBase
  {
  protected:
    ServerInformationIterator ();
  
  public:
    /// Useful for template programming.
    typedef ::ImplementationRepository::ServerInformationIterator _stub_type;
    typedef ::ImplementationRepository::ServerInformationIterator_ptr _stub_ptr_type;
    typedef ::ImplementationRepository::ServerInformationIterator_var _stub_var_type;

    ServerInformationIterator (const ServerInformationIterator& rhs);
    virtual ~ServerInformationIterator () = default;

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::ImplementationRepository::ServerInformationIterator *_this ();
    
    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual ::CORBA::Boolean next_n (
      ::CORBA::ULong how_many,
      ::ImplementationRepository::ServerInformationList_out servers) = 0;

    static void next_n_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void destroy () = 0;

    static void destroy_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\direct_proxy_impl_sh.cpp:23

  

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_IMR_Client_Export _TAO_ServerInformationIterator_Direct_Proxy_Impl
  {
  public:
    virtual ~_TAO_ServerInformationIterator_Direct_Proxy_Impl ();
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    next_n (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    destroy (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_sh.cpp:72

  

  class Administration;
  typedef Administration *Administration_ptr;

  class _TAO_Administration_Direct_Proxy_Impl;

  class TAO_IMR_Client_Export Administration
    : public virtual PortableServer::ServantBase
  {
  protected:
    Administration ();
  
  public:
    /// Useful for template programming.
    typedef ::ImplementationRepository::Administration _stub_type;
    typedef ::ImplementationRepository::Administration_ptr _stub_ptr_type;
    typedef ::ImplementationRepository::Administration_var _stub_var_type;

    Administration (const Administration& rhs);
    virtual ~Administration () = default;

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::ImplementationRepository::Administration *_this ();
    
    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void activate_server (
      const char * server) = 0;

    static void activate_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void add_or_update_server (
      const char * server,
      const ::ImplementationRepository::StartupOptions & options) = 0;

    static void add_or_update_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void remove_server (
      const char * server) = 0;

    static void remove_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void shutdown_server (
      const char * server) = 0;

    static void shutdown_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void server_is_running (
      const char * server,
      const char * partial_ior,
      ::ImplementationRepository::ServerObject_ptr server_object) = 0;

    static void server_is_running_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void server_is_shutting_down (
      const char * server) = 0;

    static void server_is_shutting_down_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void find (
      const char * server,
      ::ImplementationRepository::ServerInformation_out info) = 0;

    static void find_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void list (
      ::CORBA::ULong how_many,
      ::CORBA::Boolean determine_active_status,
      ::ImplementationRepository::ServerInformationList_out server_list,
      ::ImplementationRepository::ServerInformationIterator_out server_iterator) = 0;

    static void list_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void shutdown (
      ::CORBA::Boolean activators,
      ::CORBA::Boolean servers) = 0;

    static void shutdown_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\direct_proxy_impl_sh.cpp:23

  

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_IMR_Client_Export _TAO_Administration_Direct_Proxy_Impl
  {
  public:
    virtual ~_TAO_Administration_Direct_Proxy_Impl ();
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    activate_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    add_or_update_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    remove_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    shutdown_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    server_is_running (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    server_is_shutting_down (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    find (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    list (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    shutdown (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_sh.cpp:72

  

  class AdministrationExt;
  typedef AdministrationExt *AdministrationExt_ptr;

  class _TAO_AdministrationExt_Direct_Proxy_Impl;

  class TAO_IMR_Client_Export AdministrationExt
    : public virtual POA_ImplementationRepository::Administration
  {
  protected:
    AdministrationExt ();
  
  public:
    /// Useful for template programming.
    typedef ::ImplementationRepository::AdministrationExt _stub_type;
    typedef ::ImplementationRepository::AdministrationExt_ptr _stub_ptr_type;
    typedef ::ImplementationRepository::AdministrationExt_var _stub_var_type;

    AdministrationExt (const AdministrationExt& rhs);
    virtual ~AdministrationExt () = default;

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::ImplementationRepository::AdministrationExt *_this ();
    
    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void link_servers (
      const char * server,
      const ::CORBA::StringSeq & peers) = 0;

    static void link_servers_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void kill_server (
      const char * server,
      ::CORBA::Short signum) = 0;

    static void kill_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_sh.cpp:35

    virtual void force_remove_server (
      const char * server,
      ::CORBA::Short signum) = 0;

    static void force_remove_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\direct_proxy_impl_sh.cpp:23

  

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_IMR_Client_Export _TAO_AdministrationExt_Direct_Proxy_Impl
    : public virtual ::POA_ImplementationRepository::_TAO_Administration_Direct_Proxy_Impl
  {
  public:
    virtual ~_TAO_AdministrationExt_Direct_Proxy_Impl ();
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    link_servers (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    kill_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\proxy_impl_xh.cpp:25

    static void
    force_remove_server (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_sh.cpp:65

} // module ImplementationRepository

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

