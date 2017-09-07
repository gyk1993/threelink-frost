/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:59 GMT-04:00
 */

#ifndef J_TORQUE_RIGHT_STANCE_TERMINAL_HH
#define J_TORQUE_RIGHT_STANCE_TERMINAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void J_torque_Right_Stance_terminal_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void J_torque_Right_Stance_terminal(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);
    assert_size_matrix(var3, 2, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_torque_Right_Stance_terminal_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUE_RIGHT_STANCE_TERMINAL_HH
