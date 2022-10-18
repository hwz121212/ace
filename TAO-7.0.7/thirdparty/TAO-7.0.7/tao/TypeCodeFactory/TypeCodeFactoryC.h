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

#ifndef _TAO_PIDL_TYPECODEFACTORYC_AXOK5G_H_
#define _TAO_PIDL_TYPECODEFACTORYC_AXOK5G_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TypeCodeFactory/typecodefactory_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/IFR_Client/IFR_ExtendedA.h"
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

#include "tao/IFR_Client/IFR_ExtendedC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace CORBA
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_interface.cpp:747

  

#if !defined (_CORBA_TYPECODEFACTORY__VAR_OUT_CH_)
#define _CORBA_TYPECODEFACTORY__VAR_OUT_CH_

  class TypeCodeFactory;
  using TypeCodeFactory_ptr = TypeCodeFactory*;
  using TypeCodeFactory_var = TAO_Objref_Var_T<TypeCodeFactory>;
  using TypeCodeFactory_out = TAO_Objref_Out_T<TypeCodeFactory>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:39

  

  class TAO_TypeCodeFactory_Export TypeCodeFactory
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    using _ptr_type = TypeCodeFactory_ptr;
    using _var_type = TypeCodeFactory_var;
    using _out_type = TypeCodeFactory_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static TypeCodeFactory_ptr _duplicate (TypeCodeFactory_ptr obj);

    static void _tao_release (TypeCodeFactory_ptr obj);

    static TypeCodeFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static TypeCodeFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TypeCodeFactory_ptr _nil ();

    virtual ::CORBA::TypeCode_ptr create_struct_tc (
      const char * id,
      const char * name,
      const ::CORBA::StructMemberSeq & members) = 0;

    virtual ::CORBA::TypeCode_ptr create_union_tc (
      const char * id,
      const char * name,
      ::CORBA::TypeCode_ptr discriminator_type,
      const ::CORBA::UnionMemberSeq & members) = 0;

    virtual ::CORBA::TypeCode_ptr create_enum_tc (
      const char * id,
      const char * name,
      const ::CORBA::EnumMemberSeq & members) = 0;

    virtual ::CORBA::TypeCode_ptr create_alias_tc (
      const char * id,
      const char * name,
      ::CORBA::TypeCode_ptr original_type) = 0;

    virtual ::CORBA::TypeCode_ptr create_exception_tc (
      const char * id,
      const char * name,
      const ::CORBA::StructMemberSeq & members) = 0;

    virtual ::CORBA::TypeCode_ptr create_interface_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_string_tc (
      ::CORBA::ULong bound) = 0;

    virtual ::CORBA::TypeCode_ptr create_wstring_tc (
      ::CORBA::ULong bound) = 0;

    virtual ::CORBA::TypeCode_ptr create_fixed_tc (
      ::CORBA::UShort digits,
      ::CORBA::UShort scale) = 0;

    virtual ::CORBA::TypeCode_ptr create_sequence_tc (
      ::CORBA::ULong bound,
      ::CORBA::TypeCode_ptr element_type) = 0;

    virtual ::CORBA::TypeCode_ptr create_array_tc (
      ::CORBA::ULong length,
      ::CORBA::TypeCode_ptr element_type) = 0;

    virtual ::CORBA::TypeCode_ptr create_value_tc (
      const char * id,
      const char * name,
      ::CORBA::ValueModifier type_modifier,
      ::CORBA::TypeCode_ptr concrete_base,
      const ::CORBA::ValueMemberSeq & members) = 0;

    virtual ::CORBA::TypeCode_ptr create_value_box_tc (
      const char * id,
      const char * name,
      ::CORBA::TypeCode_ptr boxed_type) = 0;

    virtual ::CORBA::TypeCode_ptr create_native_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_recursive_tc (
      const char * id) = 0;

    virtual ::CORBA::TypeCode_ptr create_abstract_interface_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_local_interface_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_component_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_home_tc (
      const char * id,
      const char * name) = 0;

    virtual ::CORBA::TypeCode_ptr create_event_tc (
      const char * id,
      const char * name,
      ::CORBA::ValueModifier type_modifier,
      ::CORBA::TypeCode_ptr concrete_base,
      const ::CORBA::ValueMemberSeq & members) = 0;

    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    TypeCodeFactory ();

    

    virtual ~TypeCodeFactory () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    TypeCodeFactory (const TypeCodeFactory &) = delete;
    TypeCodeFactory (TypeCodeFactory &&) = delete;
    TypeCodeFactory &operator= (const TypeCodeFactory &) = delete;
    TypeCodeFactory &operator= (TypeCodeFactory &&) = delete;
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:33

  extern TAO_TypeCodeFactory_Export ::CORBA::TypeCode_ptr const _tc_TypeCodeFactory;


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

#if !defined (_CORBA_TYPECODEFACTORY__TRAITS_)
#define _CORBA_TYPECODEFACTORY__TRAITS_

  template<>
  struct TAO_TypeCodeFactory_Export Objref_Traits< ::CORBA::TypeCodeFactory>
  {
    static ::CORBA::TypeCodeFactory_ptr duplicate (::CORBA::TypeCodeFactory_ptr p);
    static void release (::CORBA::TypeCodeFactory_ptr p);
    static ::CORBA::TypeCodeFactory_ptr nil ();
    static ::CORBA::Boolean marshal (const ::CORBA::TypeCodeFactory_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\any_op_ch.cpp:40





#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  TAO_TypeCodeFactory_Export void operator<<= ( ::CORBA::Any &, TypeCodeFactory_ptr); // copying
  TAO_TypeCodeFactory_Export void operator<<= ( ::CORBA::Any &, TypeCodeFactory_ptr *); // non-copying
  TAO_TypeCodeFactory_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TypeCodeFactory_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_TypeCodeFactory_Export void operator<<= (::CORBA::Any &, CORBA::TypeCodeFactory_ptr); // copying
TAO_TypeCodeFactory_Export void operator<<= (::CORBA::Any &, CORBA::TypeCodeFactory_ptr *); // non-copying
TAO_TypeCodeFactory_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CORBA::TypeCodeFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

