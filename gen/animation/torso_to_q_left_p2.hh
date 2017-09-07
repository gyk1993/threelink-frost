/*
 * Automatically Generated from Mathematica.
 * Fri 9 Jun 2017 14:07:33 GMT-04:00
 */

#ifndef TORSO_TO_Q_LEFT_P2_HH
#define TORSO_TO_Q_LEFT_P2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void torso_to_q_left_p2_raw(double *p_output1, const double *var1);

  inline void torso_to_q_left_p2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torso_to_q_left_p2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORSO_TO_Q_LEFT_P2_HH
