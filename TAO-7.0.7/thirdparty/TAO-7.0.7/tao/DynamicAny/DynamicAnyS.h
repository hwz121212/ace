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

#ifndef _TAO_IDL_DYNAMICANYS_8FESH5_H_
#define _TAO_IDL_DYNAMICANYS_8FESH5_H_

#include /**/ "ace/pre.h"

#include "tao/DynamicAny/DynamicAny.h"
#include "tao/Typecode_typesS.h"
#include "tao/BooleanSeqS.h"
#include "tao/CharSeqS.h"
#include "tao/DoubleSeqS.h"
#include "tao/FloatSeqS.h"
#include "tao/LongDoubleSeqS.h"
#include "tao/LongLongSeqS.h"
#include "tao/LongSeqS.h"
#include "tao/OctetSeqS.h"
#include "tao/ShortSeqS.h"
#include "tao/ULongLongSeqS.h"
#include "tao/ULongSeqS.h"
#include "tao/UShortSeqS.h"
#include "tao/WCharSeqS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"

// Skeleton file generation suppressed with command line option -SS

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
  class SArg_Traits< ::DynamicAny::NameValuePair>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::NameValuePair,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::DynamicAny::NameValuePairSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::NameValuePairSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::DynamicAny::NameDynAnyPair>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::NameDynAnyPair,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::DynamicAny::NameDynAnyPairSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::NameDynAnyPairSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::DynamicAny::AnySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::AnySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::DynamicAny::DynAnySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::DynamicAny::DynAnySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

