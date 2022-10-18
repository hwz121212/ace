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

#ifndef TAO_IFR_CLIENT_SKEL_EXPORT_H
#define TAO_IFR_CLIENT_SKEL_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TAO_IFR_CLIENT_SKEL_HAS_DLL)
#  define TAO_IFR_CLIENT_SKEL_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TAO_IFR_CLIENT_SKEL_HAS_DLL */

#if !defined (TAO_IFR_CLIENT_SKEL_HAS_DLL)
#  define TAO_IFR_CLIENT_SKEL_HAS_DLL 1
#endif /* ! TAO_IFR_CLIENT_SKEL_HAS_DLL */

#if defined (TAO_IFR_CLIENT_SKEL_HAS_DLL) && (TAO_IFR_CLIENT_SKEL_HAS_DLL == 1)
#  if defined (TAO_IFR_CLIENT_SKEL_BUILD_DLL)
#    define TAO_IFR_CLIENT_SKEL_Export ACE_Proper_Export_Flag
#    define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_IFR_CLIENT_SKEL_BUILD_DLL */
#    define TAO_IFR_CLIENT_SKEL_Export ACE_Proper_Import_Flag
#    define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_IFR_CLIENT_SKEL_BUILD_DLL */
#else /* TAO_IFR_CLIENT_SKEL_HAS_DLL == 1 */
#  define TAO_IFR_CLIENT_SKEL_Export
#  define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARATION(T)
#  define TAO_IFR_CLIENT_SKEL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_IFR_CLIENT_SKEL_HAS_DLL == 1 */

// Set TAO_IFR_CLIENT_SKEL_NTRACE = 0 to turn on library-specific
// tracing even if tracing is turned off for ACE.
#if !defined (TAO_IFR_CLIENT_SKEL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define TAO_IFR_CLIENT_SKEL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define TAO_IFR_CLIENT_SKEL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !TAO_IFR_CLIENT_SKEL_NTRACE */

#if (TAO_IFR_CLIENT_SKEL_NTRACE == 1)
#  define TAO_IFR_CLIENT_SKEL_TRACE(X)
#else /* (TAO_IFR_CLIENT_SKEL_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define TAO_IFR_CLIENT_SKEL_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (TAO_IFR_CLIENT_SKEL_NTRACE == 1) */

#endif /* TAO_IFR_CLIENT_SKEL_EXPORT_H */

