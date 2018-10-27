# CMake generated Testfile for 
# Source directory: /usr/src/gtest/monerov/tests/hash
# Build directory: /usr/src/gtest/monerov/tests/hash
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(hash-fast "/usr/src/gtest/monerov/tests/hash/hash-tests" "fast" "/usr/src/gtest/monerov/tests/hash/tests-fast.txt")
add_test(hash-slow "/usr/src/gtest/monerov/tests/hash/hash-tests" "slow" "/usr/src/gtest/monerov/tests/hash/tests-slow.txt")
add_test(hash-slow-1 "/usr/src/gtest/monerov/tests/hash/hash-tests" "slow-1" "/usr/src/gtest/monerov/tests/hash/tests-slow-1.txt")
add_test(hash-tree "/usr/src/gtest/monerov/tests/hash/hash-tests" "tree" "/usr/src/gtest/monerov/tests/hash/tests-tree.txt")
add_test(hash-extra-blake "/usr/src/gtest/monerov/tests/hash/hash-tests" "extra-blake" "/usr/src/gtest/monerov/tests/hash/tests-extra-blake.txt")
add_test(hash-extra-groestl "/usr/src/gtest/monerov/tests/hash/hash-tests" "extra-groestl" "/usr/src/gtest/monerov/tests/hash/tests-extra-groestl.txt")
add_test(hash-extra-jh "/usr/src/gtest/monerov/tests/hash/hash-tests" "extra-jh" "/usr/src/gtest/monerov/tests/hash/tests-extra-jh.txt")
add_test(hash-extra-skein "/usr/src/gtest/monerov/tests/hash/hash-tests" "extra-skein" "/usr/src/gtest/monerov/tests/hash/tests-extra-skein.txt")
