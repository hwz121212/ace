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
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_codegen.cpp:682

#ifndef _TAO_IDL_IFR_BASES_T_DYFFA1_CPP_
#define _TAO_IDL_IFR_BASES_T_DYFFA1_CPP_

#include "IFR_BaseS_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\tie_ss.cpp:78

template <class T>
POA_CORBA::IRObject_tie<T>::IRObject_tie (T &t)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::IRObject_tie<T>::IRObject_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::IRObject_tie<T>::IRObject_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::IRObject_tie<T>::IRObject_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::IRObject_tie<T>::~IRObject_tie ()
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::IRObject_tie<T>::_tied_object ()
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::IRObject_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = std::addressof(obj);
  this->rel_ = false;
}

template <class T> void
POA_CORBA::IRObject_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::IRObject_tie<T>::_is_owner ()
{
  return this->rel_;
}

template <class T> void
POA_CORBA::IRObject_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::IRObject_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->IRObject::_default_POA ();
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::DefinitionKind POA_CORBA::IRObject_tie<T>::def_kind  ()
{
  return this->ptr_->def_kind (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::IRObject_tie<T>::destroy  ()
{
  this->ptr_->destroy (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\tie_ss.cpp:78

template <class T>
POA_CORBA::Contained_tie<T>::Contained_tie (T &t)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::Contained_tie<T>::Contained_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::Contained_tie<T>::Contained_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::Contained_tie<T>::Contained_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::Contained_tie<T>::~Contained_tie ()
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::Contained_tie<T>::_tied_object ()
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::Contained_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = std::addressof(obj);
  this->rel_ = false;
}

template <class T> void
POA_CORBA::Contained_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::Contained_tie<T>::_is_owner ()
{
  return this->rel_;
}

template <class T> void
POA_CORBA::Contained_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::Contained_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->Contained::_default_POA ();
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::DefinitionKind POA_CORBA::Contained_tie<T>::def_kind  ()
{
  return this->ptr_->def_kind (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Contained_tie<T>::destroy  ()
{
  this->ptr_->destroy (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::Contained_tie<T>::id  ()
{
  return this->ptr_->id (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Contained_tie<T>::id  (
  const char * id)
{
  this->ptr_->id (
    id
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::Contained_tie<T>::name  ()
{
  return this->ptr_->name (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Contained_tie<T>::name  (
  const char * name)
{
  this->ptr_->name (
    name
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::Contained_tie<T>::version  ()
{
  return this->ptr_->version (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Contained_tie<T>::version  (
  const char * version)
{
  this->ptr_->version (
    version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Container_ptr POA_CORBA::Contained_tie<T>::defined_in  ()
{
  return this->ptr_->defined_in (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::Contained_tie<T>::absolute_name  ()
{
  return this->ptr_->absolute_name (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Repository_ptr POA_CORBA::Contained_tie<T>::containing_repository  ()
{
  return this->ptr_->containing_repository (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Contained::Description * POA_CORBA::Contained_tie<T>::describe  ()
{
  return this->ptr_->describe (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Contained_tie<T>::move  (
  ::CORBA::Container_ptr new_container,
  const char * new_name,
  const char * new_version)
{
  this->ptr_->move (
    new_container,
    new_name,
    new_version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\tie_ss.cpp:78

template <class T>
POA_CORBA::Container_tie<T>::Container_tie (T &t)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::Container_tie<T>::Container_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::Container_tie<T>::Container_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::Container_tie<T>::Container_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::Container_tie<T>::~Container_tie ()
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::Container_tie<T>::_tied_object ()
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::Container_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = std::addressof(obj);
  this->rel_ = false;
}

template <class T> void
POA_CORBA::Container_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::Container_tie<T>::_is_owner ()
{
  return this->rel_;
}

template <class T> void
POA_CORBA::Container_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::Container_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->Container::_default_POA ();
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::DefinitionKind POA_CORBA::Container_tie<T>::def_kind  ()
{
  return this->ptr_->def_kind (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::Container_tie<T>::destroy  ()
{
  this->ptr_->destroy (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Contained_ptr POA_CORBA::Container_tie<T>::lookup  (
  const char * search_name)
{
  return this->ptr_->lookup (
    search_name
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ContainedSeq * POA_CORBA::Container_tie<T>::contents  (
  ::CORBA::DefinitionKind limit_type,
  ::CORBA::Boolean exclude_inherited)
{
  return this->ptr_->contents (
    limit_type,
    exclude_inherited
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ContainedSeq * POA_CORBA::Container_tie<T>::lookup_name  (
  const char * search_name,
  ::CORBA::Long levels_to_search,
  ::CORBA::DefinitionKind limit_type,
  ::CORBA::Boolean exclude_inherited)
{
  return this->ptr_->lookup_name (
    search_name,
    levels_to_search,
    limit_type,
    exclude_inherited
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Container::DescriptionSeq * POA_CORBA::Container_tie<T>::describe_contents  (
  ::CORBA::DefinitionKind limit_type,
  ::CORBA::Boolean exclude_inherited,
  ::CORBA::Long max_returned_objs)
{
  return this->ptr_->describe_contents (
    limit_type,
    exclude_inherited,
    max_returned_objs
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ModuleDef_ptr POA_CORBA::Container_tie<T>::create_module  (
  const char * id,
  const char * name,
  const char * version)
{
  return this->ptr_->create_module (
    id,
    name,
    version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ConstantDef_ptr POA_CORBA::Container_tie<T>::create_constant  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::IDLType_ptr type,
  const ::CORBA::Any & value)
{
  return this->ptr_->create_constant (
    id,
    name,
    version,
    type,
    value
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::StructDef_ptr POA_CORBA::Container_tie<T>::create_struct  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::StructMemberSeq & members)
{
  return this->ptr_->create_struct (
    id,
    name,
    version,
    members
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::UnionDef_ptr POA_CORBA::Container_tie<T>::create_union  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::IDLType_ptr discriminator_type,
  const ::CORBA::UnionMemberSeq & members)
{
  return this->ptr_->create_union (
    id,
    name,
    version,
    discriminator_type,
    members
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::EnumDef_ptr POA_CORBA::Container_tie<T>::create_enum  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::EnumMemberSeq & members)
{
  return this->ptr_->create_enum (
    id,
    name,
    version,
    members
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::AliasDef_ptr POA_CORBA::Container_tie<T>::create_alias  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::IDLType_ptr original_type)
{
  return this->ptr_->create_alias (
    id,
    name,
    version,
    original_type
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::InterfaceDef_ptr POA_CORBA::Container_tie<T>::create_interface  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::InterfaceDefSeq & base_interfaces)
{
  return this->ptr_->create_interface (
    id,
    name,
    version,
    base_interfaces
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ValueDef_ptr POA_CORBA::Container_tie<T>::create_value  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::Boolean is_custom,
  ::CORBA::Boolean is_abstract,
  ::CORBA::ValueDef_ptr base_value,
  ::CORBA::Boolean is_truncatable,
  const ::CORBA::ValueDefSeq & abstract_base_values,
  const ::CORBA::InterfaceDefSeq & supported_interfaces,
  const ::CORBA::InitializerSeq & initializers)
{
  return this->ptr_->create_value (
    id,
    name,
    version,
    is_custom,
    is_abstract,
    base_value,
    is_truncatable,
    abstract_base_values,
    supported_interfaces,
    initializers
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ValueBoxDef_ptr POA_CORBA::Container_tie<T>::create_value_box  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::IDLType_ptr original_type_def)
{
  return this->ptr_->create_value_box (
    id,
    name,
    version,
    original_type_def
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ExceptionDef_ptr POA_CORBA::Container_tie<T>::create_exception  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::StructMemberSeq & members)
{
  return this->ptr_->create_exception (
    id,
    name,
    version,
    members
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::NativeDef_ptr POA_CORBA::Container_tie<T>::create_native  (
  const char * id,
  const char * name,
  const char * version)
{
  return this->ptr_->create_native (
    id,
    name,
    version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::AbstractInterfaceDef_ptr POA_CORBA::Container_tie<T>::create_abstract_interface  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::AbstractInterfaceDefSeq & base_interfaces)
{
  return this->ptr_->create_abstract_interface (
    id,
    name,
    version,
    base_interfaces
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::LocalInterfaceDef_ptr POA_CORBA::Container_tie<T>::create_local_interface  (
  const char * id,
  const char * name,
  const char * version,
  const ::CORBA::InterfaceDefSeq & base_interfaces)
{
  return this->ptr_->create_local_interface (
    id,
    name,
    version,
    base_interfaces
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::ExtValueDef_ptr POA_CORBA::Container_tie<T>::create_ext_value  (
  const char * id,
  const char * name,
  const char * version,
  ::CORBA::Boolean is_custom,
  ::CORBA::Boolean is_abstract,
  ::CORBA::ValueDef_ptr base_value,
  ::CORBA::Boolean is_truncatable,
  const ::CORBA::ValueDefSeq & abstract_base_values,
  const ::CORBA::InterfaceDefSeq & supported_interfaces,
  const ::CORBA::ExtInitializerSeq & initializers)
{
  return this->ptr_->create_ext_value (
    id,
    name,
    version,
    is_custom,
    is_abstract,
    base_value,
    is_truncatable,
    abstract_base_values,
    supported_interfaces,
    initializers
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\tie_ss.cpp:78

template <class T>
POA_CORBA::IDLType_tie<T>::IDLType_tie (T &t)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::IDLType_tie<T>::IDLType_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::IDLType_tie<T>::IDLType_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::IDLType_tie<T>::IDLType_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::IDLType_tie<T>::~IDLType_tie ()
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::IDLType_tie<T>::_tied_object ()
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::IDLType_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = std::addressof(obj);
  this->rel_ = false;
}

template <class T> void
POA_CORBA::IDLType_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::IDLType_tie<T>::_is_owner ()
{
  return this->rel_;
}

template <class T> void
POA_CORBA::IDLType_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::IDLType_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->IDLType::_default_POA ();
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::DefinitionKind POA_CORBA::IDLType_tie<T>::def_kind  ()
{
  return this->ptr_->def_kind (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::IDLType_tie<T>::destroy  ()
{
  this->ptr_->destroy (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::TypeCode_ptr POA_CORBA::IDLType_tie<T>::type  ()
{
  return this->ptr_->type (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_interface\tie_ss.cpp:78

template <class T>
POA_CORBA::TypedefDef_tie<T>::TypedefDef_tie (T &t)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::TypedefDef_tie<T>::TypedefDef_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (std::addressof(t)),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::TypedefDef_tie<T>::TypedefDef_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::TypedefDef_tie<T>::TypedefDef_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::TypedefDef_tie<T>::~TypedefDef_tie ()
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::TypedefDef_tie<T>::_tied_object ()
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::TypedefDef_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = std::addressof(obj);
  this->rel_ = false;
}

template <class T> void
POA_CORBA::TypedefDef_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::TypedefDef_tie<T>::_is_owner ()
{
  return this->rel_;
}

template <class T> void
POA_CORBA::TypedefDef_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::TypedefDef_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->TypedefDef::_default_POA ();
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::DefinitionKind POA_CORBA::TypedefDef_tie<T>::def_kind  ()
{
  return this->ptr_->def_kind (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::TypedefDef_tie<T>::destroy  ()
{
  this->ptr_->destroy (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::TypedefDef_tie<T>::id  ()
{
  return this->ptr_->id (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::TypedefDef_tie<T>::id  (
  const char * id)
{
  this->ptr_->id (
    id
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::TypedefDef_tie<T>::name  ()
{
  return this->ptr_->name (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::TypedefDef_tie<T>::name  (
  const char * name)
{
  this->ptr_->name (
    name
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::TypedefDef_tie<T>::version  ()
{
  return this->ptr_->version (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::TypedefDef_tie<T>::version  (
  const char * version)
{
  this->ptr_->version (
    version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Container_ptr POA_CORBA::TypedefDef_tie<T>::defined_in  ()
{
  return this->ptr_->defined_in (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
char * POA_CORBA::TypedefDef_tie<T>::absolute_name  ()
{
  return this->ptr_->absolute_name (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Repository_ptr POA_CORBA::TypedefDef_tie<T>::containing_repository  ()
{
  return this->ptr_->containing_repository (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::Contained::Description * POA_CORBA::TypedefDef_tie<T>::describe  ()
{
  return this->ptr_->describe (
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
void POA_CORBA::TypedefDef_tie<T>::move  (
  ::CORBA::Container_ptr new_container,
  const char * new_name,
  const char * new_version)
{
  this->ptr_->move (
    new_container,
    new_name,
    new_version
  );
}
// TAO_IDL - Generated from
// d:\hanwenzhi_code\ace\tao-7.0.7\thirdparty\tao-7.0.7\tao_idl\be\be_visitor_operation\tie_ss.cpp:91

template <class T>
::CORBA::TypeCode_ptr POA_CORBA::TypedefDef_tie<T>::type  ()
{
  return this->ptr_->type (
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


#endif /* ifndef */
