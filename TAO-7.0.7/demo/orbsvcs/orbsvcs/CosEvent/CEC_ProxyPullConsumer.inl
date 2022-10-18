// -*- C++ -*-
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE CORBA::Boolean
TAO_CEC_ProxyPullConsumer::is_connected_i () const
{
  return !CORBA::is_nil (this->supplier_.in ());
}

ACE_INLINE CORBA::Boolean
TAO_CEC_ProxyPullConsumer::is_connected () const
{
  ACE_GUARD_RETURN (ACE_Lock, ace_mon, *this->lock_, false);

  return this->is_connected_i ();
}

ACE_INLINE CosEventComm::PullSupplier_ptr
TAO_CEC_ProxyPullConsumer::supplier () const
{
  ACE_GUARD_RETURN (ACE_Lock, ace_mon, *this->lock_, 0);
  return CosEventComm::PullSupplier::_duplicate (this->supplier_.in ());
}

ACE_INLINE void
TAO_CEC_ProxyPullConsumer::supplier_i (CosEventComm::PullSupplier_ptr supplier)
{
  this->supplier_ = supplier;
}

ACE_INLINE void
TAO_CEC_ProxyPullConsumer::supplier (CosEventComm::PullSupplier_ptr supplier)
{
  ACE_GUARD (ACE_Lock, ace_mon, *this->lock_);

  this->supplier_i (supplier);
}

TAO_END_VERSIONED_NAMESPACE_DECL
