/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:23 GMT-04:00
 */

#ifndef JS_DH_RIGHTTOE_RIGHT_STANCE_HH
#define JS_DH_RIGHTTOE_RIGHT_STANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void Js_dh_RightToe_Right_Stance_raw(double *p_output1, const double *var1);

  inline void Js_dh_RightToe_Right_Stance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 10, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dh_RightToe_Right_Stance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DH_RIGHTTOE_RIGHT_STANCE_HH
