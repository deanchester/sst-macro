/*
 *  This file is part of SST/macroscale:
 *               The macroscale architecture simulator from the SST suite.
 *  Copyright (c) 2009 Sandia Corporation.
 *  This software is distributed under the BSD License.
 *  Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
 *  the U.S. Government retains certain rights in this software.
 *  For more information, see the LICENSE file in the top
 *  SST/macroscale directory.
 */

#ifndef SSTMAC_BACKENDS_NATIVE_LAUNCH_ROUNDROBININDEXING_H_INCLUDED
#define SSTMAC_BACKENDS_NATIVE_LAUNCH_ROUNDROBININDEXING_H_INCLUDED

#include <sstmac/software/launch/task_mapper.h>

namespace sstmac {
namespace sw {

/**
 * An index strategy that allocates indices using a round robin.
 */
class round_robin_task_mapper : public task_mapper
{

 public:
  round_robin_task_mapper(sprockit::sim_parameters* params) :
    task_mapper(params)
  {
  }

  std::string
  to_string() const override {
    return "round robin task mapper";
  }

  virtual
  ~round_robin_task_mapper() throw ();

  virtual void
  map_ranks(
    const ordered_node_set& nodes,
    int ppn,
    std::vector<node_id> &result,
    int nproc) override;

};

}
} // end of namespace sstmac.

#endif
