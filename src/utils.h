#pragma once

#include <iostream>
#include <Eigen/Core>

namespace utils {

void PrintVec() {
  Eigen::Vector2d test_vec(0, 1);
  Eigen::IOFormat format =
      Eigen::IOFormat(Eigen::FullPrecision, Eigen::DontAlignCols, "", ",", "", "", "", "");
  std::cout << test_vec.format(format) << "\n";
}

void SayGoodbye() {
  std::cout << "Goodbye.\n";
}

}  // namespace utils
