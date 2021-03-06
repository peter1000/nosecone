// Copyright 2015 Charles D. Aylward
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// A (possibly updated) copy of of this software is available at
// https://github.com/cdaylward/nosecone

#pragma once

#include "appc/discovery/types.h"

#include "nosecone/executor/image.h"


namespace nosecone {
namespace executor {


using namespace appc::discovery;


Try<URI> fetch(const Name& name, const Labels& labels);


Try<Images> fetch_and_validate(const appc::discovery::Name& name,
                               const appc::discovery::Labels& labels,
                               const bool with_dependencies = false,
                               Images dependencies = Images{});


} // namespace executor
} // namespace nosecone
