#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include <mimosa/non-copyable.hh>
#include <mimosa/ref-countable.hh>

#include "address.hh"
#include "namespace-helper.hh"

namespace hefur {
/**
 * This class represents an announce response.
 * It is used by both http(s) server and upd server.
 */
struct AnnounceResponse : public m::RefCountable<AnnounceResponse>,
                          private m::NonCopyable // should not be copied
{
   MIMOSA_DEF_PTR(AnnounceResponse);

   bool error_;
   std::string error_msg_;

   uint32_t nleechers_;
   uint32_t nseeders_;
   uint32_t ncompleted_;
   uint32_t interval_; // the interval until the next announce in seconds
   std::vector<Address> addrs_;
};
} // namespace hefur
