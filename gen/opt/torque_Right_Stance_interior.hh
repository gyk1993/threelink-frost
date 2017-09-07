/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:59 GMT-04:00
 */

#ifndef TORQUE_RIGHT_STANCE_INTERIOR_HH
#define TORQUE_RIGHT_STANCE_INTERIOR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void torque_Right_Stance_interior_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void torque_Right_Stance_interior(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);
    assert_size_matrix(var3, 2, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torque_Right_Stance_interior_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORQUE_RIGHT_STANCE_INTERIOR_HH
