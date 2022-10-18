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

#ifndef _TAO_IDL_PORTABLESERVER_POLICYS_XL5SKU_CPP_
#define _TAO_IDL_PORTABLESERVER_POLICYS_XL5SKU_CPP_


#include "PolicyS.h"
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



static const TAO_operation_db_entry CORBA_Policy_operations [] = {
  {"_get_policy_type", std::addressof(POA_CORBA::Policy::_get_policy_type_skel), std::addressof(POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::_get_policy_type)},
  {"copy", std::addressof(POA_CORBA::Policy::copy_skel), std::addressof(POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::copy)},
  {"destroy", std::addressof(POA_CORBA::Policy::destroy_skel), std::addressof(POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::destroy)},
  {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
  {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
  {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
  {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
  {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr}
};

static const ::CORBA::Long _tao_CORBA_Policy_optable_size = sizeof (ACE_Hash_Map_Entry<const char *, TAO::Operation_Skeletons>) * (24);
static char _tao_CORBA_Policy_optable_pool [_tao_CORBA_Policy_optable_size];
static ACE_Static_Allocator_Base _tao_CORBA_Policy_allocator (_tao_CORBA_Policy_optable_pool, _tao_CORBA_Policy_optable_size);
static TAO_Dynamic_Hash_OpTable tao_CORBA_Policy_optable (
    CORBA_Policy_operations,
    8,
    16,
    &_tao_CORBA_Policy_allocator
  );


///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::~_TAO_Policy_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:56

void
POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::_get_policy_type (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_CORBA::Policy_ptr _tao_ptr = 
    dynamic_cast<POA_CORBA::Policy_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::CORBA::ULong>::ret_val *) args[0])->arg () =
    _tao_ptr->policy_type (
        );
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:56

void
POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::copy (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_CORBA::Policy_ptr _tao_ptr = 
    dynamic_cast<POA_CORBA::Policy_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::CORBA::Policy>::ret_val *) args[0])->arg () =
    _tao_ptr->copy (
        );
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:56

void
POA_CORBA::_TAO_Policy_Direct_Proxy_Impl::destroy (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument **)
  
{
  POA_CORBA::Policy_ptr _tao_ptr = 
    dynamic_cast<POA_CORBA::Policy_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->destroy (
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:89



POA_CORBA::Policy::Policy ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_CORBA_Policy_optable);
}

POA_CORBA::Policy::Policy (const Policy& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


namespace POA_CORBA
{
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:79

  class _get_policy_type_Policy
    : public TAO::Upcall_Command
  {
  public:
    inline _get_policy_type_Policy (
      POA_CORBA::Policy * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    void execute () override
    {
      TAO::SArg_Traits< ::CORBA::ULong>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->policy_type ();
    }
  
  private:
    POA_CORBA::Policy * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_ss.cpp:167

void POA_CORBA::Policy::_get_policy_type_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::CORBA::ULong>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_CORBA::Policy * const impl =
    dynamic_cast<POA_CORBA::Policy *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_policy_type_Policy command (
    impl,
    server_request.operation_details (),
    args);
  
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


namespace POA_CORBA
{
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:79

  class copy_Policy
    : public TAO::Upcall_Command
  {
  public:
    inline copy_Policy (
      POA_CORBA::Policy * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    void execute () override
    {
      TAO::SArg_Traits< ::CORBA::Policy>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Policy> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->copy ();
    }
  
  private:
    POA_CORBA::Policy * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_ss.cpp:167

void POA_CORBA::Policy::copy_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::CORBA::Policy>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_CORBA::Policy * const impl =
    dynamic_cast<POA_CORBA::Policy *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  copy_Policy command (
    impl,
    server_request.operation_details (),
    args);
  
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


namespace POA_CORBA
{
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:79

  class destroy_Policy
    : public TAO::Upcall_Command
  {
  public:
    inline destroy_Policy (
      POA_CORBA::Policy * servant)
      : servant_ (servant)
    {
    }

    void execute () override
    {
      this->servant_->destroy ();
    }
  
  private:
    POA_CORBA::Policy * const servant_;
  };
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\operation_ss.cpp:167

void POA_CORBA::Policy::destroy_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_CORBA::Policy * const impl =
    dynamic_cast<POA_CORBA::Policy *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  destroy_Policy command (
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





::CORBA::Boolean POA_CORBA::Policy::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/CORBA/Policy:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_CORBA::Policy::_interface_repository_id () const
{
  return "IDL:omg.org/CORBA/Policy:1.0";
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:403



void POA_CORBA::Policy::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ss.cpp:354



CORBA::Policy *
POA_CORBA::Policy::_this ()
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

  return TAO::Narrow_Utils< ::CORBA::Policy>::unchecked_narrow (obj.in ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
