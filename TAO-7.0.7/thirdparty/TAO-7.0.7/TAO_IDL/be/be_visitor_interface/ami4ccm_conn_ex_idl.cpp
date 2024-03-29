
//=============================================================================
/**
 *  @file    ami4ccm_conn_ex_idl.cpp
 *
 *  Visitor generating code for AMI4CCM Interfaces in the executor IDL
 *
 *  @author Jeff Parsons
 */
//=============================================================================

#include "interface.h"

be_visitor_ami4ccm_conn_ex_idl::be_visitor_ami4ccm_conn_ex_idl (
      be_visitor_context *ctx)
  : be_visitor_scope (ctx),
    os_ (*ctx->stream ())
{
}

be_visitor_ami4ccm_conn_ex_idl::~be_visitor_ami4ccm_conn_ex_idl ()
{
}

int
be_visitor_ami4ccm_conn_ex_idl::visit_interface (be_interface *node)
{
  Identifier *oln = node->original_local_name ();

  TAO_INSERT_COMMENT (&os_);

  os_ << be_nl_2
      << "module CCM_AMI::Connector_T<" << oln << ", AMI4CCM_"
      << oln << "> AMI4CCM_" << oln << "_Connector;";

  return 0;
}

