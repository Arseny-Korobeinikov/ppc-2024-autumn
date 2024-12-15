// Copyright 2023 Nesterov Alexander
#pragma once

#include <string>
#include <vector>

#include "core/task/include/task.hpp"

namespace gnitienko_k_sum_row_seq {

class SumByRowSeq : public ppc::core::Task {
 public:
  explicit SumByRowSeq(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  std::vector<int> mainFunc();
  std::vector<int> input_{}, res{};
  int rows{}, cols{};
};

}  // namespace gnitienko_k_sum_row_seq