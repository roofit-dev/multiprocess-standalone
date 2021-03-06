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
#ifndef ROOT_ROOFIT_MultiProcess_types
#define ROOT_ROOFIT_MultiProcess_types

#include <utility> // pair

namespace RooFit {
namespace MultiProcess {

// some helper types
using Task = std::size_t;
/// combined job_object and task identifier type
using JobTask = std::pair<std::size_t, Task>;

} // namespace MultiProcess
} // namespace RooFit

#endif // ROOT_ROOFIT_MultiProcess_types
