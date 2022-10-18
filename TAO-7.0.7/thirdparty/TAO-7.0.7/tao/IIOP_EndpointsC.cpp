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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:363


#include "IIOP_EndpointsC.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\structure_cs.cpp:55

void
TAO::IIOP_Endpoint_Info::_tao_any_destructor (
    void *_tao_void_pointer)
{
  IIOP_Endpoint_Info *_tao_tmp_pointer =
    static_cast<IIOP_Endpoint_Info *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:104



#if !defined (_TAO_IIOPENDPOINTSEQUENCE_CS_)
#define _TAO_IIOPENDPOINTSEQUENCE_CS_

TAO::IIOPEndpointSequence::IIOPEndpointSequence (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< IIOP_Endpoint_Info> (max)
{}

TAO::IIOPEndpointSequence::IIOPEndpointSequence (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    TAO::IIOP_Endpoint_Info * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< IIOP_Endpoint_Info>
    (max, length, buffer, release)
{}

void TAO::IIOPEndpointSequence::_tao_any_destructor (
    void * _tao_void_pointer)
{
  IIOPEndpointSequence * _tao_tmp_pointer =
    static_cast<IIOPEndpointSequence *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:48



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::IIOP_Endpoint_Info &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.host.in ()) &&
    (strm << _tao_aggregate.port) &&
    (strm << _tao_aggregate.priority);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::IIOP_Endpoint_Info &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.host.out ()) &&
    (strm >> _tao_aggregate.port) &&
    (strm >> _tao_aggregate.priority);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:92

#if !defined _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_
#define _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::IIOPEndpointSequence &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::IIOPEndpointSequence &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_TAO_IIOPEndpointSequence_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL


