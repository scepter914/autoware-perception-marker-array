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

#include "autoware_perception_marker_array/autoware_perception_marker_array.hpp"

namespace autoware_perception_marker_array
{
AutowarePerceptionMarkerArray::Output AutowarePerceptionMarkerArray::update(
  const AutowarePerceptionMarkerArray::Input & input)
{
  AutowarePerceptionMarkerArray::Output output;

  // Sample
  output.data = input.data + param_.data;
  RCLCPP_INFO(rclcpp::get_logger("autoware_perception_marker_array"), "Debug: %d", 0);
  return output;
}

}  // namespace autoware_perception_marker_array
