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

#ifndef _TAO_PIDL_INT8SEQC_UT06GQ_H_
#define _TAO_PIDL_INT8SEQC_UT06GQ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace CORBA
{

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_CORBA_INT8SEQ_CH_)
#define _CORBA_INT8SEQ_CH_

  class Int8Seq;
  typedef ::TAO_FixedSeq_Var_T<Int8Seq> Int8Seq_var;
  typedef ::TAO_Seq_Out_T<Int8Seq> Int8Seq_out;
  

  class TAO_Export Int8Seq
    : public
        ::TAO::unbounded_value_sequence< ::CORBA::Int8, CORBA::IDLv4::Int8_tag>
  {
  public:
    Int8Seq () = default;
    Int8Seq ( ::CORBA::ULong max);
    Int8Seq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Int8* buffer,
      ::CORBA::Boolean release = false);
    Int8Seq (const Int8Seq &) = default;
    Int8Seq (Int8Seq &&) = default;
    Int8Seq& operator= (const Int8Seq &) = default;
    Int8Seq& operator= (Int8Seq &&) = default;
    virtual ~Int8Seq () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = Int8Seq_var;
    using _out_type = Int8Seq_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module CORBA
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:64




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::CORBA::Int8Seq>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::Int8Seq,
            TAO::Any_Insert_Policy_AnyTypeCode_Adapter
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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_template_export.cpp:37

#if defined ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION_EXPORT
  template class TAO_Export ::TAO::unbounded_value_sequence< ::CORBA::Int8, CORBA::IDLv4::Int8_tag>;
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION_EXPORT */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_CORBA_Int8Seq_H_
#define _TAO_CDR_OP_CORBA_Int8Seq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::Int8Seq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::Int8Seq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_CORBA_Int8Seq_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

