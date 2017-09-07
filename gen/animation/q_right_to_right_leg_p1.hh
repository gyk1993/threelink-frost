/*
 * Automatically Generated from Mathematica.
 * Fri 9 Jun 2017 14:07:31 GMT-04:00
 */

#ifndef Q_RIGHT_TO_RIGHT_LEG_P1_HH
#define Q_RIGHT_TO_RIGHT_LEG_P1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void q_right_to_right_leg_p1_raw(double *p_output1, const double *var1);

  inline void q_right_to_right_leg_p1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    q_right_to_right_leg_p1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Q_RIGHT_TO_RIGHT_LEG_P1_HH
