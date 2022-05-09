#/**
# * @file install.sh
# * @author Azmi ŞAHİN (azmisahin@outlook.com)
# * @brief emulation of risc-based architectures with a cisc architecture.
# * @version 0.1
# * @date 2022-05-02
# *
# * @copyright Copyright (c) 2022
# */

echo ruby package install
bundle install

echo gcc version
gcc --version

echo ruby version
ruby --version

echo gem version
gem --version

echo cucumber version
cucumber --version