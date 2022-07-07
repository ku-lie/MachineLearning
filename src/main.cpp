// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// float sum(const vector<float> nums)
// {
//     float nums_sum = 0;
//     for (const auto &num : nums)
//         nums_sum += num;
//     return nums_sum;
// }

// float mean(const vector<float> nums)
// {
//     return sum(nums) / nums.size();
// }

// vector<float> vecAddVal(vector<float> nums, float val)
// {
//     vector<float> vec;
//     for (const auto &num : nums)
//         vec.push_back(num + val);
//     return vec;
// }

// vector<float> vecCutVal(vector<float> nums, float val)
// {
//     return vecAddVal(nums, -val);
// }

// vector<float> vecMultiplyVal(vector<float> nums, float val)
// {
//     vector<float> vec;
//     for (const auto &num : nums)
//         vec.push_back(num * val);
//     return vec;
// }

// vector<float> vecDivVal(vector<float> nums, float val)
// {
//     return vecMultiplyVal(nums, 1.0F / val);
// }

// vector<float> vecDocProduct(vector<float> nums1, vector<float> nums2)
// {
//     auto lenth = nums1.size();
//     vector<float> result;
//     if (lenth != nums2.size())
//     {
//         cerr << "nums1和nums2的大小不一样!"
//              << "nums1的长度为: " << lenth << "\nnums2的长度为: " << nums2.size() << endl;
//         return vector<float>();
//     }
//     else
//         for (size_t i = 0; i != lenth; ++i)
//             result.push_back(nums1[i] * nums2[i]);
//     return result;
// }

// vector<float> vecSubtract(vector<float> nums1, vector<float> nums2)
// {
//     auto lenth = nums1.size();
//     vector<float> result;
//     if (lenth != nums2.size())
//     {
//         cerr << "nums1和nums2的大小不一样!"
//              << "nums1的长度为: " << lenth << "\nnums2的长度为: " << nums2.size() << endl;
//         return vector<float>();
//     }
//     else
//         for (size_t i = 0; i != lenth; ++i)
//             result.push_back(nums1[i] - nums2[i]);
//     return result;
// }
// int main()
// {
//     vector<float> x{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     vector<float> y{2, 3.3, 4, 5, 6.5, 7, 7.8, 9, 10.4, 11};
//     /*y=x+2*/
//     float o_num = sum(vecDocProduct(y, vecCutVal(x, mean(x))));
//     float o_den = sum(vecDocProduct(x, x)) - pow(sum(x), 2) / x.size();
//     float omega = o_num / o_den;
//     float b = mean(vecSubtract(y, vecMultiplyVal(x, omega)));
//     cout << omega << endl
//          << b << endl;
//     return 0;
// }
#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::Vector3d;
using std::cout;
using std::endl;
// y=x1+2x2+3
int main()
{
    MatrixXd x(3, 3);
    x << 1, 2, 1,
        3, 4, 1,
        5, 6, 1;
    Vector3d y(6, 12, 18);
    cout << x.transpose() * x << endl;
    cout << y << endl;
    return 0;
}