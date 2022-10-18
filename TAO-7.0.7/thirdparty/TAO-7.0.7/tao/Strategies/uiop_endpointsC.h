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

#ifndef _TAO_PIDL_UIOP_ENDPOINTSC_54XXFW_H_
#define _TAO_PIDL_UIOP_ENDPOINTSC_54XXFW_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Strategies/strategies_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257



struct TAO_UIOP_Endpoint_Info;
using TAO_UIOP_Endpoint_Info_var = ::TAO_Var_Var_T<TAO_UIOP_Endpoint_Info>;
using TAO_UIOP_Endpoint_Info_out = ::TAO_Out_T<TAO_UIOP_Endpoint_Info>;


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47



struct TAO_Strategies_Export TAO_UIOP_Endpoint_Info
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

  
  using _var_type = TAO_UIOP_Endpoint_Info_var;
  using _out_type = TAO_UIOP_Endpoint_Info_out;
  
  ::TAO::String_Manager rendezvous_point;
  ::CORBA::Short priority;
};
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

extern TAO_Strategies_Export ::CORBA::TypeCode_ptr const _tc_TAO_UIOP_Endpoint_Info;


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98



#if !defined (_TAO_UIOPENDPOINTSEQUENCE_CH_)
#define _TAO_UIOPENDPOINTSEQUENCE_CH_

class TAO_UIOPEndpointSequence;
typedef ::TAO_VarSeq_Var_T<TAO_UIOPEndpointSequence> TAO_UIOPEndpointSequence_var;
typedef ::TAO_Seq_Out_T<TAO_UIOPEndpointSequence> TAO_UIOPEndpointSequence_out;


class TAO_Strategies_Export TAO_UIOPEndpointSequence
  : public
      ::TAO::unbounded_value_sequence< TAO_UIOP_Endpoint_Info>
{
public:
  TAO_UIOPEndpointSequence () = default;
  TAO_UIOPEndpointSequence ( ::CORBA::ULong max);
  TAO_UIOPEndpointSequence (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    TAO_UIOP_Endpoint_Info* buffer,
    ::CORBA::Boolean release = false);
  TAO_UIOPEndpointSequence (const TAO_UIOPEndpointSequence &) = default;
  TAO_UIOPEndpointSequence (TAO_UIOPEndpointSequence &&) = default;
  TAO_UIOPEndpointSequence& operator= (const TAO_UIOPEndpointSequence &) = default;
  TAO_UIOPEndpointSequence& operator= (TAO_UIOPEndpointSequence &&) = default;
  virtual ~TAO_UIOPEndpointSequence () = default;
  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

  
  using _var_type = TAO_UIOPEndpointSequence_var;
  using _out_type = TAO_UIOPEndpointSequence_out;
};

#endif /* end #if !defined */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

extern TAO_Strategies_Export ::CORBA::TypeCode_ptr const _tc_TAO_UIOPEndpointSequence;
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
  class Arg_Traits< ::TAO_UIOP_Endpoint_Info>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO_UIOP_Endpoint_Info,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::TAO_UIOPEndpointSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO_UIOPEndpointSequence,
            TAO::Any_Insert_Policy_Noop
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Strategies_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO_UIOP_Endpoint_Info &);
TAO_Strategies_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TAO_UIOP_Endpoint_Info &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_
#define _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Strategies_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_UIOPEndpointSequence &_tao_sequence);
TAO_Strategies_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO_UIOPEndpointSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_TAO_UIOPEndpointSequence_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

