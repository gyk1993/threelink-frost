/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:43 GMT-04:00
 */

#ifndef J_SWING_FOOT_RETRACTION_HH
#define J_SWING_FOOT_RETRACTION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void J_swing_foot_retraction_raw(double *p_output1, const double *var1);

  inline void J_swing_foot_retraction(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_swing_foot_retraction_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_SWING_FOOT_RETRACTION_HH
