// Copyright 2022 Satoshi Tanaka
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

#ifndef AUTOWARE_PERCEPTION_MARKER_ARRAY__AUTOWARE_PERCEPTION_MARKER_ARRAY_HPP__
#define AUTOWARE_PERCEPTION_MARKER_ARRAY__AUTOWARE_PERCEPTION_MARKER_ARRAY_HPP__

#include <memory>
#include <string>
#include <vector>

#include "rclcpp/logger.hpp"

namespace autoware_perception_marker_array
{
class AutowarePerceptionMarkerArray
{
public:
  explicit AutowarePerceptionMarkerArray(const rclcpp::Logger & logger) : logger_(logger) {}

  struct Input
  {
    int data{};
  };

  struct Output
  {
    int data{};
  };

  struct Param
  {
    int data{};
  };

  void setParam(const Param & param) { param_ = param; }

  Output update(const Input & input);

private:
  rclcpp::Logger logger_;
  Param param_{};
};

}  // namespace autoware_perception_marker_array

#endif  // AUTOWARE_PERCEPTION_MARKER_ARRAY__AUTOWARE_PERCEPTION_MARKER_ARRAY_HPP__
