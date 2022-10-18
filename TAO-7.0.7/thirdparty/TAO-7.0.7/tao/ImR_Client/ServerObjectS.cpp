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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:622

#ifndef _TAO_IDL_SERVEROBJECTS_HPF7TV_CPP_
#define _TAO_IDL_SERVEROBJECTS_HPF7TV_CPP_


#include "ServerObjectS.h"
#include "tao/PortableServer/Operation_Table_Dynamic_Hash.h"
#include "tao/PortableServer/Direct_Collocation_Upcall_Wrapper.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"
#include "cstring"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



static const TAO_operation_db_entry ImplementationRepository_ServerObject_operations [] = {
  {"ping", std::addressof(POA_ImplementationRepository::ServerObject::ping_skel), std::addressof(POA_ImplementationRepository::_TAO_ServerObject_Direct_Proxy_Impl::ping)},
  {"shutdown", std::addressof(POA_ImplementationRepository::ServerObject::shutdown_skel), std::addressof(POA_ImplementationRepository::_TAO_ServerObject_Direct_Proxy_Impl::shutdown)},
  {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
  {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
  {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
  {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
  {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr}
};

static const ::CORBA::Long _tao_ImplementationRepository_ServerObject_optable_size = sizeof (ACE_Hash_Map_Entry<const char *, TAO::Operation_Skeletons>) * (21);
static char _tao_ImplementationRepository_ServerObject_optable_pool [_tao_ImplementationRepository_ServerObject_optable_size];
static ACE_Static_Allocator_Base _tao_ImplementationRepository_ServerObject_allocator (_tao_ImplementationRepository_ServerObject_optable_pool, _tao_ImplementationRepository_ServerObject_optable_size);
static TAO_Dynamic_Hash_OpTable tao_ImplementationRepository_ServerObject_optable (
    ImplementationRepository_ServerObject_operations,
    7,
    14,
    &_tao_ImplementationRepository_ServerObject_allocator
  );


///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_ImplementationRepository::_TAO_ServerObject_Direct_Proxy_Impl::~_TAO_ServerObject_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:56

void
POA_ImplementationRepository::_TAO_ServerObject_Direct_Proxy_Impl::ping (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument **)
  
{
  POA_ImplementationRepository::ServerObject_ptr _tao_ptr = 
    dynamic_cast<POA_ImplementationRepository::ServerObject_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->ping (
      );
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:56

void
POA_ImplementationRepository::_TAO_ServerObject_Direct_Proxy_Impl::shutdown (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument **)
  
{
  POA_ImplementationRepository::ServerObject_ptr _tao_ptr = 
    dynamic_cast<POA_ImplementationRepository::ServerObject_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->shutdown (
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:89



POA_ImplementationRepository::ServerObject::ServerObject ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_ImplementationRepository_ServerObject_optable);
}

POA_ImplementationRepository::ServerObject::ServerObject (const ServerObject& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


namespace POA_ImplementationRepository
{
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:79

  class ping_ServerObject
    : public TAO::Upcall_Command
  {
  public:
    inline ping_ServerObject (
      POA_ImplementationRepository::ServerObject * servant)
      : servant_ (servant)
    {
    }

    void execute () override
    {
      this->servant_->ping ();
    }
  
  private:
    POA_ImplementationRepository::ServerObject * const servant_;
  };
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_ss.cpp:167

void POA_ImplementationRepository::ServerObject::ping_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_ImplementationRepository::ServerObject * const impl =
    dynamic_cast<POA_ImplementationRepository::ServerObject *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  ping_ServerObject command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 1
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_ImplementationRepository
{
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:79

  class shutdown_ServerObject
    : public TAO::Upcall_Command
  {
  public:
    inline shutdown_ServerObject (
      POA_ImplementationRepository::ServerObject * servant)
      : servant_ (servant)
    {
    }

    void execute () override
    {
      this->servant_->shutdown ();
    }
  
  private:
    POA_ImplementationRepository::ServerObject * const servant_;
  };
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_ss.cpp:167

void POA_ImplementationRepository::ServerObject::shutdown_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_ImplementationRepository::ServerObject * const impl =
    dynamic_cast<POA_ImplementationRepository::ServerObject *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  shutdown_ServerObject command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 1
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}




// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:155





::CORBA::Boolean POA_ImplementationRepository::ServerObject::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:ImplementationRepository/ServerObject:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_ImplementationRepository::ServerObject::_interface_repository_id () const
{
  return "IDL:ImplementationRepository/ServerObject:1.0";
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:403



void POA_ImplementationRepository::ServerObject::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:354



ImplementationRepository::ServerObject *
POA_ImplementationRepository::ServerObject::_this ()
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp {};

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      nullptr);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  return TAO::Narrow_Utils< ::ImplementationRepository::ServerObject>::unchecked_narrow (obj.in ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
