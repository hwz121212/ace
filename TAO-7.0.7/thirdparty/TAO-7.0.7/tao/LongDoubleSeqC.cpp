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


#include "LongDoubleSeqC.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:104



#if !defined (_CORBA_LONGDOUBLESEQ_CS_)
#define _CORBA_LONGDOUBLESEQ_CS_

CORBA::LongDoubleSeq::LongDoubleSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ::CORBA::LongDouble> (max)
{}

CORBA::LongDoubleSeq::LongDoubleSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::LongDouble * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< ::CORBA::LongDouble>
    (max, length, buffer, release)
{}

void CORBA::LongDoubleSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  LongDoubleSeq * _tao_tmp_pointer =
    static_cast<LongDoubleSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:92

#if !defined _TAO_CDR_OP_CORBA_LongDoubleSeq_CPP_
#define _TAO_CDR_OP_CORBA_LongDoubleSeq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::LongDoubleSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::LongDoubleSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_CORBA_LongDoubleSeq_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL


