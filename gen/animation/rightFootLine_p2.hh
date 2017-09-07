/*
 * Automatically Generated from Mathematica.
 * Fri 9 Jun 2017 14:07:37 GMT-04:00
 */

#ifndef RIGHTFOOTLINE_P2_HH
#define RIGHTFOOTLINE_P2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void rightFootLine_p2_raw(double *p_output1, const double *var1);

  inline void rightFootLine_p2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    rightFootLine_p2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RIGHTFOOTLINE_P2_HH
