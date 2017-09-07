/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:30 GMT-04:00
 */

#ifndef J_D1Y_TIMEVC_RIGHT_STANCE_HH
#define J_D1Y_TIMEVC_RIGHT_STANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void J_d1y_timevc_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7);

  inline void J_d1y_timevc_Right_Stance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6,const Eigen::VectorXd &var7)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 5, 1);
    assert_size_matrix(var3, 5, 1);
    assert_size_matrix(var4, 12, 1);
    assert_size_matrix(var5, 2, 1);
    assert_size_matrix(var6, 1, 1);
    assert_size_matrix(var7, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d1y_timevc_Right_Stance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data(),var7.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D1Y_TIMEVC_RIGHT_STANCE_HH
