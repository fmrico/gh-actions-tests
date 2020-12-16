// Copyright 2020 Intelligent Robotics Lab
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

#ifndef MYLIB_BASE__UTILSBASE_HPP_
#define MYLIB_BASE__UTILSBASE_HPP_

#include <memory>

#include "rclcpp_lifecycle/lifecycle_node.hpp"

namespace mylib_base
{

class PluginBase
{
public:
  using Ptr = std::shared_ptr<PluginBase>;

  virtual int get_secret() = 0;

protected:
  int secret_;
};

}  // namespace mylib_base

#endif  // MYLIB_BASE__UTILSBASE_HPP_
