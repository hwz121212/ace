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

#ifndef _TAO_IDL_ENDPOINTPOLICYA_ZM53GI_H_
#define _TAO_IDL_ENDPOINTPOLICYA_ZM53GI_H_

#include /**/ "ace/pre.h"

#include /**/ "tao/EndpointPolicy/EndpointPolicy_Export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/EndpointPolicy/EndpointPolicyC.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/EndpointPolicy/EndpointPolicyTypeA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:43

namespace EndpointPolicy
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_EndpointPolicy_Export ::CORBA::TypeCode_ptr const _tc_EndpointValueBase;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_EndpointPolicy_Export ::CORBA::TypeCode_ptr const _tc_EndpointList;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_EndpointPolicy_Export ::CORBA::TypeCode_ptr const _tc_Policy;


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:70


} // module EndpointPolicy



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_ch.cpp:40





#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, EndpointValueBase_ptr); // copying
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, EndpointValueBase_ptr *); // non-copying
  TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EndpointValueBase_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EndpointPolicy_Export void operator<<= (::CORBA::Any &, EndpointPolicy::EndpointValueBase_ptr); // copying
TAO_EndpointPolicy_Export void operator<<= (::CORBA::Any &, EndpointPolicy::EndpointValueBase_ptr *); // non-copying
TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EndpointPolicy::EndpointValueBase_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\any_op_ch.cpp:46





#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, const ::EndpointPolicy::EndpointList &); // copying version
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, ::EndpointPolicy::EndpointList*); // noncopying version
  TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::EndpointPolicy::EndpointList *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, const EndpointPolicy::EndpointList &); // copying version
TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, EndpointPolicy::EndpointList*); // noncopying version
TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const EndpointPolicy::EndpointList *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_ch.cpp:40





#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, Policy_ptr); // copying
  TAO_EndpointPolicy_Export void operator<<= ( ::CORBA::Any &, Policy_ptr *); // non-copying
  TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Policy_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EndpointPolicy_Export void operator<<= (::CORBA::Any &, EndpointPolicy::Policy_ptr); // copying
TAO_EndpointPolicy_Export void operator<<= (::CORBA::Any &, EndpointPolicy::Policy_ptr *); // non-copying
TAO_EndpointPolicy_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EndpointPolicy::Policy_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
