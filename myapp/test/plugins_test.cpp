// Copyright 2019 Intelligent Robotics Lab
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

#include "gtest/gtest.h"

#include "pluginlib/class_loader.hpp"
#include "pluginlib/class_list_macros.hpp"

#include "rclcpp/rclcpp.hpp"

#include "mylib_base/UtilsBase.hpp"

TEST(planner_expert, load_popf_plugin)
{
  try {
    pluginlib::ClassLoader<mylib_base::PluginBase> lp_loader(
      "mylib_base", "mylib_base::PluginBase");
    mylib_base::PluginBase::Ptr plugin = lp_loader.createUniqueInstance("mylib/Plugin");
    ASSERT_TRUE(true);
  } catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
    ASSERT_TRUE(false);
  }
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
