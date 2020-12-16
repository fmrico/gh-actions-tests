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
#include "gtest/gtest.h"

#include "mylib/Utils.hpp"


TEST(test_utils, plugin)
{
  mylib::Plugin plugin(2);

  ASSERT_NE(plugin.get_secret(), 0);
  ASSERT_EQ(plugin.get_secret(), 2);
}

TEST(test_utils, get_true)
{
  ASSERT_TRUE(mylib::get_true());
}

TEST(test_utils, duplicate)
{
  ASSERT_LT(0, mylib::duplicate(2));
  ASSERT_LT(0, mylib::duplicate(-2));
}

TEST(test_utils, get_time)
{
  auto node = rclcpp_lifecycle::LifecycleNode::make_shared("test_node");
  ASSERT_GT(mylib::get_time(node).seconds(), 1.0);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  rclcpp::init(argc, argv);

  return RUN_ALL_TESTS();
}
