/*
 * Automatically Generated from Mathematica.
 * Fri 9 Jun 2017 14:07:34 GMT-04:00
 */

#ifndef Q_LEFT_TO_LEFT_LEG_P2_HH
#define Q_LEFT_TO_LEFT_LEG_P2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void q_left_to_left_leg_p2_raw(double *p_output1, const double *var1);

  inline void q_left_to_left_leg_p2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    q_left_to_left_leg_p2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Q_LEFT_TO_LEFT_LEG_P2_HH
