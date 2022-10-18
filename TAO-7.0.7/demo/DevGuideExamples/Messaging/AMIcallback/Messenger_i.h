/* -*- C++ -*-  */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#ifndef MESSENGER_IMPL_H_
#define MESSENGER_IMPL_H_

#include "MessengerS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


class  Messenger_i : public virtual POA_Messenger
{
public:
  //Constructor
  Messenger_i (unsigned int seconds_to_wait = 0,
               CORBA::Boolean throw_exception = 0);

  //Destructor
  virtual ~Messenger_i (void);

virtual CORBA::Boolean send_message (
    const char * user_name,
    const char * subject,
    char *& message,
    CORBA::Long_out time_sent
  );

private:
  // Specify an amount of time to wait inside
  // send_message in order illustrate AMI callback usage
  unsigned int seconds_to_wait_;

  // Force an exception to be thrown to test client-side
  // exception handling
  CORBA::Boolean throw_exception_;

};



#endif /* MESSENGER_IMPL_H_  */
