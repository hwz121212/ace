# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# 
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/johnny/DOC_ROOT/stage-8519/ACE_wrappers/bin/mwc.pl -type gnuace -exclude TAO/TAO_ACE.mwc -workers 12 -recurse -hierarchy -relative ACE_ROOT=/home/johnny/DOC_ROOT/stage-8519/ACE_wrappers -relative TAO_ROOT=/home/johnny/DOC_ROOT/stage-8519/ACE_wrappers/TAO
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: BiDirectionalGIOP_Idl BiDirectionalGIOP_Server BiDirectionalGIOP_Client

depend: BiDirectionalGIOP_Idl-depend BiDirectionalGIOP_Server-depend BiDirectionalGIOP_Client-depend

REMAINING_TARGETS := $(filter-out all depend,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)
.PHONY: $(REMAINING_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Client $(@)

.PHONY: BiDirectionalGIOP_Idl
BiDirectionalGIOP_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Idl all

.PHONY: BiDirectionalGIOP_Idl-depend
BiDirectionalGIOP_Idl-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Idl depend

.PHONY: BiDirectionalGIOP_Server
BiDirectionalGIOP_Server: BiDirectionalGIOP_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Server all

.PHONY: BiDirectionalGIOP_Server-depend
BiDirectionalGIOP_Server-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Server depend

.PHONY: BiDirectionalGIOP_Client
BiDirectionalGIOP_Client: BiDirectionalGIOP_Idl BiDirectionalGIOP_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Client all

.PHONY: BiDirectionalGIOP_Client-depend
BiDirectionalGIOP_Client-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.BiDirectionalGIOP_Client depend

project_name_list:
	@echo BiDirectionalGIOP_Client
	@echo BiDirectionalGIOP_Idl
	@echo BiDirectionalGIOP_Server
