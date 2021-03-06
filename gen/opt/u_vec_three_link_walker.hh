/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:54 GMT-04:00
 */

#ifndef U_VEC_THREE_LINK_WALKER_HH
#define U_VEC_THREE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void u_vec_three_link_walker_raw(double *p_output1, const double *var1,const double *var2);

  inline void u_vec_three_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_vec_three_link_walker_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_VEC_THREE_LINK_WALKER_HH
