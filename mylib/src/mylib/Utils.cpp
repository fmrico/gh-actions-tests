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

#include "rclcpp_lifecycle/lifecycle_node.hpp"

#include "mylib/Utils.hpp"

namespace mylib
{

Plugin::Plugin()
: Plugin(2)
{
}

Plugin::Plugin(int init)
{
  secret_ = init;
}

int
Plugin::get_secret()
{
  return secret_;
}


bool get_true()
{
  return true;
}

int duplicate(int x)
{
  if (x < 0) {
    x = 2 * -x;
  } else {
    x = x * 2;
  }

  return x;
}

rclcpp::Time get_time(rclcpp_lifecycle::LifecycleNode::SharedPtr node)
{
  return node->now();
}

}  // namespace mylib

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(mylib::Plugin, mylib_base::PluginBase)
