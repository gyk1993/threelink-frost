/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:24 GMT-04:00
 */

#ifndef J_DDH_RIGHTTOE_RIGHT_STANCE_HH
#define J_DDH_RIGHTTOE_RIGHT_STANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void J_ddh_RightToe_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_ddh_RightToe_Right_Stance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);
    assert_size_matrix(var2, 5, 1);
    assert_size_matrix(var3, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_ddh_RightToe_Right_Stance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DDH_RIGHTTOE_RIGHT_STANCE_HH
