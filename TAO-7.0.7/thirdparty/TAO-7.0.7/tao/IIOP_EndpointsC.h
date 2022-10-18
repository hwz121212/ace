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

#ifndef _TAO_PIDL_IIOP_ENDPOINTSC_VAOCNQ_H_
#define _TAO_PIDL_IIOP_ENDPOINTSC_VAOCNQ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257

  

  struct IIOP_Endpoint_Info;
  using IIOP_Endpoint_Info_var = ::TAO_Var_Var_T<IIOP_Endpoint_Info>;
  using IIOP_Endpoint_Info_out = ::TAO_Out_T<IIOP_Endpoint_Info>;

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47

  

  struct TAO_Export IIOP_Endpoint_Info
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = IIOP_Endpoint_Info_var;
    using _out_type = IIOP_Endpoint_Info_out;

    static void _tao_any_destructor (void *);
    
    ::TAO::String_Manager host;
    ::CORBA::Short port;
    ::CORBA::Short priority;
  };

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_TAO_IIOPENDPOINTSEQUENCE_CH_)
#define _TAO_IIOPENDPOINTSEQUENCE_CH_

  class IIOPEndpointSequence;
  typedef ::TAO_VarSeq_Var_T<IIOPEndpointSequence> IIOPEndpointSequence_var;
  typedef ::TAO_Seq_Out_T<IIOPEndpointSequence> IIOPEndpointSequence_out;
  

  class TAO_Export IIOPEndpointSequence
    : public
        ::TAO::unbounded_value_sequence< IIOP_Endpoint_Info>
  {
  public:
    IIOPEndpointSequence () = default;
    IIOPEndpointSequence ( ::CORBA::ULong max);
    IIOPEndpointSequence (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      IIOP_Endpoint_Info* buffer,
      ::CORBA::Boolean release = false);
    IIOPEndpointSequence (const IIOPEndpointSequence &) = default;
    IIOPEndpointSequence (IIOPEndpointSequence &&) = default;
    IIOPEndpointSequence& operator= (const IIOPEndpointSequence &) = default;
    IIOPEndpointSequence& operator= (IIOPEndpointSequence &&) = default;
    virtual ~IIOPEndpointSequence () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = IIOPEndpointSequence_var;
    using _out_type = IIOPEndpointSequence_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module TAO
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
  class Arg_Traits< ::TAO::IIOP_Endpoint_Info>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO::IIOP_Endpoint_Info,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::TAO::IIOPEndpointSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO::IIOPEndpointSequence,
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO::IIOP_Endpoint_Info &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TAO::IIOP_Endpoint_Info &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_TAO_IIOPEndpointSequence_H_
#define _TAO_CDR_OP_TAO_IIOPEndpointSequence_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::IIOPEndpointSequence &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::IIOPEndpointSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_TAO_IIOPEndpointSequence_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

