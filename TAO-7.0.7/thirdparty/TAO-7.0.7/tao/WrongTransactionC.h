// -*- C++ -*-
// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_WRONGTRANSACTIONC_H_
#define _TAO_IDL_ORIG_WRONGTRANSACTIONC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "tao/TAO_Export.h"
#include "tao/ORB.h"

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{

  // TAO_IDL - Generated from
  // be\be_visitor_exception/exception_ch.cpp:53

#if !defined (_CORBA_WRONGTRANSACTION_CH_)
#define _CORBA_WRONGTRANSACTION_CH_

  class TAO_Export WrongTransaction : public CORBA::UserException
  {
  public:

    WrongTransaction ();
    WrongTransaction (const WrongTransaction &);
    ~WrongTransaction ();

    WrongTransaction &operator= (const WrongTransaction &);

    static void _tao_any_destructor (void *);

    static WrongTransaction *_downcast (CORBA::Exception *);
    static const WrongTransaction *_downcast (CORBA::Exception const *);

    static CORBA::Exception *_alloc ();

    virtual CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (
        TAO_OutputCDR &) const;

    virtual void _tao_decode (
        TAO_InputCDR &);

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:129

    virtual CORBA::TypeCode_ptr _tao_type () const;
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module CORBA

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_ch.cpp:52

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::WrongTransaction &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::WrongTransaction &);

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"

#endif /* ifndef */

