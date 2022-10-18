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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:758

#ifndef _TAO_IDL_LIFESPANPOLICYA_8RYMWF_H_
#define _TAO_IDL_LIFESPANPOLICYA_8RYMWF_H_

#include /**/ "ace/pre.h"

#include /**/ "tao/PortableServer/portableserver_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/PortableServer/LifespanPolicyC.h"
#include "tao/AnyTypeCode/PolicyA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:43

namespace PortableServer
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_LifespanPolicyValue;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_LifespanPolicy;


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:70


} // module PortableServer

// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_enum\any_op_ch.cpp:31



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  

  TAO_PortableServer_Export void operator<<= (::CORBA::Any &, ::PortableServer::LifespanPolicyValue);
  TAO_PortableServer_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::PortableServer::LifespanPolicyValue &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_PortableServer_Export void operator<<= (::CORBA::Any &, PortableServer::LifespanPolicyValue);
TAO_PortableServer_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, PortableServer::LifespanPolicyValue &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
