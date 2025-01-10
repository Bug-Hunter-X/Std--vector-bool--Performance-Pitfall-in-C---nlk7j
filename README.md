# std::vector<bool> Performance Issue in C++

This repository demonstrates a common performance issue associated with `std::vector<bool>` in C++.  `std::vector<bool>` is often mistakenly used as a space-efficient way to store bits, but its implementation can lead to surprisingly slow access times compared to using more appropriate bit manipulation techniques.  This can be a significant problem in performance-critical applications.

The example code shows how a naive use of `std::vector<bool>` can negatively impact performance.  The improved solution provides a more efficient alternative using bitset.