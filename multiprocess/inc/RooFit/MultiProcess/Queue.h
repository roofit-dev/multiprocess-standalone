/*
 * Project: RooFit
 * Authors:
 *   PB, Patrick Bos, Netherlands eScience Center, p.bos@esciencecenter.nl
 *   IP, Inti Pelupessy, Netherlands eScience Center, i.pelupessy@esciencecenter.nl
 *
 * Copyright (c) 2016-2021, Netherlands eScience Center
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */
#ifndef ROOT_ROOFIT_MultiProcess_Queue
#define ROOT_ROOFIT_MultiProcess_Queue

#include "RooFit/MultiProcess/types.h"
#include "RooFit/MultiProcess/Messenger.h"

#include <queue>

namespace RooFit {
namespace MultiProcess {

class Queue {
public:
   bool pop(JobTask &job_task);
   void add(JobTask job_task);

   void loop();

   void process_master_message(M2Q message);
   void process_worker_message(std::size_t this_worker_id, W2Q message);

private:
   std::queue<JobTask> queue_;
   std::size_t N_tasks_ = 0; // total number of received tasks
   std::size_t N_tasks_at_workers_ = 0;
};

} // namespace MultiProcess
} // namespace RooFit

#endif // ROOT_ROOFIT_MultiProcess_Queue
