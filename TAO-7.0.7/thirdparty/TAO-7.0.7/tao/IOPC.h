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

#ifndef _TAO_PIDL_IOPC_2KKKPV_H_
#define _TAO_PIDL_IOPC_2KKKPV_H_

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

#include "tao/OctetSeqC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 7
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:34

namespace IOP
{
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:366

  typedef ::CORBA::ULong ProfileId;
  typedef ::CORBA::ULong_out ProfileId_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_INTERNET_IOP = 0U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_MULTIPLE_COMPONENTS = 1U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257

  

  struct TaggedProfile;
  using TaggedProfile_var = ::TAO_Var_Var_T<TaggedProfile>;
  using TaggedProfile_out = ::TAO_Out_T<TaggedProfile>;

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47

  

  struct TAO_Export TaggedProfile
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = TaggedProfile_var;
    using _out_type = TaggedProfile_out;

    static void _tao_any_destructor (void *);
    
    IOP::ProfileId tag;
    CORBA::OctetSeq profile_data;
  };

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_IOP_TAGGEDPROFILESEQ_CH_)
#define _IOP_TAGGEDPROFILESEQ_CH_

  class TaggedProfileSeq;
  typedef ::TAO_VarSeq_Var_T<TaggedProfileSeq> TaggedProfileSeq_var;
  typedef ::TAO_Seq_Out_T<TaggedProfileSeq> TaggedProfileSeq_out;
  

  class TAO_Export TaggedProfileSeq
    : public
        ::TAO::unbounded_value_sequence< TaggedProfile>
  {
  public:
    TaggedProfileSeq () = default;
    TaggedProfileSeq ( ::CORBA::ULong max);
    TaggedProfileSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      TaggedProfile* buffer,
      ::CORBA::Boolean release = false);
    TaggedProfileSeq (const TaggedProfileSeq &) = default;
    TaggedProfileSeq (TaggedProfileSeq &&) = default;
    TaggedProfileSeq& operator= (const TaggedProfileSeq &) = default;
    TaggedProfileSeq& operator= (TaggedProfileSeq &&) = default;
    virtual ~TaggedProfileSeq () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = TaggedProfileSeq_var;
    using _out_type = TaggedProfileSeq_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257

  

  struct IOR;
  using IOR_var = ::TAO_Var_Var_T<IOR>;
  using IOR_out = ::TAO_Out_T<IOR>;

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47

  

  struct TAO_Export IOR
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = IOR_var;
    using _out_type = IOR_out;

    static void _tao_any_destructor (void *);
    
    ::TAO::String_Manager type_id;
    IOP::TaggedProfileSeq profiles;
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:366

  typedef ::CORBA::ULong ComponentId;
  typedef ::CORBA::ULong_out ComponentId_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257

  

  struct TaggedComponent;
  using TaggedComponent_var = ::TAO_Var_Var_T<TaggedComponent>;
  using TaggedComponent_out = ::TAO_Out_T<TaggedComponent>;

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47

  

  struct TAO_Export TaggedComponent
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = TaggedComponent_var;
    using _out_type = TaggedComponent_out;

    static void _tao_any_destructor (void *);
    
    IOP::ComponentId tag;
    CORBA::OctetSeq component_data;
  };

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_IOP_MULTIPLECOMPONENTPROFILE_CH_)
#define _IOP_MULTIPLECOMPONENTPROFILE_CH_

  class MultipleComponentProfile;
  typedef ::TAO_VarSeq_Var_T<MultipleComponentProfile> MultipleComponentProfile_var;
  typedef ::TAO_Seq_Out_T<MultipleComponentProfile> MultipleComponentProfile_out;
  

  class TAO_Export MultipleComponentProfile
    : public
        ::TAO::unbounded_value_sequence< TaggedComponent>
  {
  public:
    MultipleComponentProfile () = default;
    MultipleComponentProfile ( ::CORBA::ULong max);
    MultipleComponentProfile (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      TaggedComponent* buffer,
      ::CORBA::Boolean release = false);
    MultipleComponentProfile (const MultipleComponentProfile &) = default;
    MultipleComponentProfile (MultipleComponentProfile &&) = default;
    MultipleComponentProfile& operator= (const MultipleComponentProfile &) = default;
    MultipleComponentProfile& operator= (MultipleComponentProfile &&) = default;
    virtual ~MultipleComponentProfile () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = MultipleComponentProfile_var;
    using _out_type = MultipleComponentProfile_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_IOP_TAGGEDCOMPONENTSEQ_CH_)
#define _IOP_TAGGEDCOMPONENTSEQ_CH_

  class TaggedComponentSeq;
  typedef ::TAO_VarSeq_Var_T<TaggedComponentSeq> TaggedComponentSeq_var;
  typedef ::TAO_Seq_Out_T<TaggedComponentSeq> TaggedComponentSeq_out;
  

  class TAO_Export TaggedComponentSeq
    : public
        ::TAO::unbounded_value_sequence< TaggedComponent>
  {
  public:
    TaggedComponentSeq () = default;
    TaggedComponentSeq ( ::CORBA::ULong max);
    TaggedComponentSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      TaggedComponent* buffer,
      ::CORBA::Boolean release = false);
    TaggedComponentSeq (const TaggedComponentSeq &) = default;
    TaggedComponentSeq (TaggedComponentSeq &&) = default;
    TaggedComponentSeq& operator= (const TaggedComponentSeq &) = default;
    TaggedComponentSeq& operator= (TaggedComponentSeq &&) = default;
    virtual ~TaggedComponentSeq () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = TaggedComponentSeq_var;
    using _out_type = TaggedComponentSeq_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_ORB_TYPE = 0U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_CODE_SETS = 1U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_POLICIES = 2U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_ALTERNATE_IIOP_ADDRESS = 3U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_COMPLETE_OBJECT_KEY = 5U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_ENDPOINT_ID_POSITION = 6U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_LOCATION_POLICY = 12U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_DCE_STRING_BINDING = 100U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_DCE_BINDING_NAME = 101U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_DCE_NO_PIPES = 102U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:366

  typedef ::CORBA::ULong ServiceId;
  typedef ::CORBA::ULong_out ServiceId_out;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:257

  

  struct ServiceContext;
  using ServiceContext_var = ::TAO_Var_Var_T<ServiceContext>;
  using ServiceContext_out = ::TAO_Out_T<ServiceContext>;

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_ch.cpp:47

  

  struct TAO_Export ServiceContext
  {
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = ServiceContext_var;
    using _out_type = ServiceContext_out;

    static void _tao_any_destructor (void *);
    
    IOP::ServiceId context_id;
    CORBA::OctetSeq context_data;
  };

  
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:98

  

#if !defined (_IOP_SERVICECONTEXTLIST_CH_)
#define _IOP_SERVICECONTEXTLIST_CH_

  class ServiceContextList;
  typedef ::TAO_VarSeq_Var_T<ServiceContextList> ServiceContextList_var;
  typedef ::TAO_Seq_Out_T<ServiceContextList> ServiceContextList_out;
  

  class TAO_Export ServiceContextList
    : public
        ::TAO::unbounded_value_sequence< ServiceContext>
  {
  public:
    ServiceContextList () = default;
    ServiceContextList ( ::CORBA::ULong max);
    ServiceContextList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ServiceContext* buffer,
      ::CORBA::Boolean release = false);
    ServiceContextList (const ServiceContextList &) = default;
    ServiceContextList (ServiceContextList &&) = default;
    ServiceContextList& operator= (const ServiceContextList &) = default;
    ServiceContextList& operator= (ServiceContextList &&) = default;
    virtual ~ServiceContextList () = default;
    
    // TAO_IDL - Generated from
    // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_type.cpp:296

    
    using _var_type = ServiceContextList_var;
    using _out_type = ServiceContextList_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TransactionService = 0U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong CodeSets = 1U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong ChainBypassCheck = 2U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong ChainBypassInfo = 3U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong LogicalThreadId = 4U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong BI_DIR_IIOP = 5U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong SendingContextRunTime = 6U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong INVOCATION_POLICIES = 7U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong UnknownExceptionInfo = 9U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong RTCorbaPriority = 10U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong RTCorbaPriorityRange = 11U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_FT_GROUP = 27U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_FT_PRIMARY = 28U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_FT_HEARTBEAT_ENABLED = 29U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong FT_GROUP_VERSION = 12U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong FT_REQUEST = 13U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong REP_NWPRIORITY = 1413545989U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_UIPMC = 3U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_GROUP = 39U;
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_constant\constant_ch.cpp:34

  

  const CORBA::ULong TAG_GROUP_IIOP = 40U;


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_module\module_ch.cpp:62


} // module IOP
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
  class Arg_Traits< ::IOP::TaggedProfile>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::TaggedProfile,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::IOP::TaggedProfileSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::TaggedProfileSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::IOP::IOR>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::IOR,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::IOP::TaggedComponent>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::TaggedComponent,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::IOP::MultipleComponentProfile>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::MultipleComponentProfile,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::IOP::TaggedComponentSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::TaggedComponentSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::IOP::ServiceContext>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::ServiceContext,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::IOP::ServiceContextList>
    : public
        Var_Size_Arg_Traits_T<
            ::IOP::ServiceContextList,
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

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::TaggedProfile &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, IOP::TaggedProfile &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_IOP_TaggedProfileSeq_H_
#define _TAO_CDR_OP_IOP_TaggedProfileSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IOP::TaggedProfileSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IOP::TaggedProfileSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_IOP_TaggedProfileSeq_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::IOR &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, IOP::IOR &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::TaggedComponent &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, IOP::TaggedComponent &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_IOP_MultipleComponentProfile_H_
#define _TAO_CDR_OP_IOP_MultipleComponentProfile_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IOP::MultipleComponentProfile &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IOP::MultipleComponentProfile &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_IOP_MultipleComponentProfile_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_IOP_TaggedComponentSeq_H_
#define _TAO_CDR_OP_IOP_TaggedComponentSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IOP::TaggedComponentSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IOP::TaggedComponentSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_IOP_TaggedComponentSeq_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const IOP::ServiceContext &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, IOP::ServiceContext &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_IOP_ServiceContextList_H_
#define _TAO_CDR_OP_IOP_ServiceContextList_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IOP::ServiceContextList &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IOP::ServiceContextList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_IOP_ServiceContextList_H_ */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:1639



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */
